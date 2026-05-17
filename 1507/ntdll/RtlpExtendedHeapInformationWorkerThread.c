/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800D8EF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x180078AA0 (RtlQueryHeapInformation.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r14
  int HeapInformation; // esi
  int v5; // ebp
  _QWORD v6[15]; // [rsp+50h] [rbp-78h] BYREF

  v1 = (_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 24) == 0x40000000 )
    *v1 = *(_QWORD *)(a1 + 8);
  else
    *v1 = 0x10000LL;
  v3 = (_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 == 0x40000000 )
    {
      *(_QWORD *)(*v3 + 8LL) = -1LL;
      *(_DWORD *)(a1 + 28) = RtlpHpVirtQueryHeaps(*v3, *v1, a1 + 32);
    }
    else
    {
      memset(v6, 0, 0x58uLL);
      v6[1] = *(_QWORD *)(a1 + 16);
      v6[0] = -1LL;
      v6[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(v6[2]) = v5;
      v6[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v6, 0x58uLL, 0LL);
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
