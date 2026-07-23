/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800EA100
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x180081930 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x180081A60 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  SIZE_T *ViewSize; // rsi
  PVOID *v3; // r15
  NTSTATUS v4; // edi
  int v5; // r14d
  __int64 v6; // rax
  _QWORD HeapInformation[4]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v8[14]; // [rsp+78h] [rbp-19h] BYREF

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
    else if ( v5 == 0x20000000 )
    {
      memset(HeapInformation, 0, sizeof(HeapInformation));
      HeapInformation[1] = -1LL;
      *((_DWORD *)a1 + 7) = 0;
      HeapInformation[2] = RtlpHpRemoteStackSerializeWriter;
      LODWORD(HeapInformation[0]) = 1;
      HeapInformation[3] = a1;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x20uLL, 0LL);
      if ( v4 >= 0 )
        v4 = *((_DWORD *)a1 + 7);
    }
    else
    {
      memset(v8, 0, 0x58uLL);
      v6 = *((_QWORD *)a1 + 2);
      v8[0] = -1LL;
      v8[1] = v6;
      LODWORD(v8[2]) = v5;
      v8[3] = RtlpExtendedHeapInformationWorkerCallback;
      v8[4] = a1;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v8, 0x58uLL, 0LL);
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
