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

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _QWORD **v3; // r14
  int HeapInformation; // esi
  __int64 v5; // r9
  int v6; // ebp
  _QWORD v7[15]; // [rsp+50h] [rbp-78h] BYREF

  v1 = (unsigned __int64 *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 24) == 0x40000000 )
    *v1 = *(_QWORD *)(a1 + 8);
  else
    *v1 = 0x10000LL;
  v3 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 == 0x40000000 )
    {
      (*v3)[1] = -1LL;
      *(_DWORD *)(a1 + 28) = RtlpHpTagQueryTags(*v3, *v1, (_QWORD *)(a1 + 32), v5);
    }
    else
    {
      memset(v7, 0, 0x58uLL);
      v7[1] = *(_QWORD *)(a1 + 16);
      v7[0] = -1LL;
      v7[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(v7[2]) = v6;
      v7[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v7, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
  if ( *v3 )
    NtUnmapViewOfSection();
  NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
