/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800E0EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x18007FDC0 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18007FED8 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  SIZE_T *ViewSize; // rdi
  PVOID *v3; // r14
  NTSTATUS v4; // esi
  int v5; // ebp
  _QWORD HeapInformation[15]; // [rsp+50h] [rbp-78h] BYREF

  ViewSize = (SIZE_T *)(a1 + 56);
  if ( *((_DWORD *)a1 + 6) == 0x40000000 )
    *ViewSize = *((_QWORD *)a1 + 1);
  else
    *ViewSize = 0x10000LL;
  v3 = (PVOID *)(a1 + 48);
  *((_QWORD *)a1 + 8) = 0LL;
  v4 = ZwMapViewOfSection(
         *(HANDLE *)a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)a1 + 6,
         0LL,
         *ViewSize,
         (PLARGE_INTEGER)a1 + 8,
         ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v4 >= 0 )
  {
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_DWORD *)a1 + 10) = 0;
    *((_DWORD *)a1 + 7) = 0;
    v5 = *((_DWORD *)a1 + 6);
    if ( v5 == 0x40000000 )
    {
      *((_QWORD *)*v3 + 1) = -1LL;
      *((_DWORD *)a1 + 7) = RtlpHpTagQueryTags(*v3, *ViewSize, (_QWORD *)a1 + 4);
    }
    else
    {
      memset(HeapInformation, 0, 0x58uLL);
      HeapInformation[1] = *((_QWORD *)a1 + 2);
      HeapInformation[0] = -1LL;
      HeapInformation[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(HeapInformation[2]) = v5;
      HeapInformation[4] = a1;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
      if ( v4 >= 0 && *((int *)a1 + 7) < 0 )
        v4 = *((_DWORD *)a1 + 7);
    }
  }
  if ( *v3 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v3);
  NtClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v4;
  RtlExitUserThread(0);
}
