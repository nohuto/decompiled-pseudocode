/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800EA040
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x180081940 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x180081A70 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  unsigned __int64 *v1; // rsi
  _QWORD **v3; // r15
  int HeapInformation; // edi
  __int64 v5; // r9
  int v6; // r14d
  __int64 v7; // rax
  _QWORD v8[4]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v9[14]; // [rsp+78h] [rbp-19h] BYREF

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
    else if ( v6 == 0x20000000 )
    {
      memset(v8, 0, sizeof(v8));
      v8[1] = -1LL;
      *(_DWORD *)(a1 + 28) = 0;
      v8[2] = RtlpHpRemoteStackSerializeWriter;
      LODWORD(v8[0]) = 1;
      v8[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v8, 0x20uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
    else
    {
      memset(v9, 0, 0x58uLL);
      v7 = *(_QWORD *)(a1 + 16);
      v9[0] = -1LL;
      v9[1] = v7;
      LODWORD(v9[2]) = v6;
      v9[3] = RtlpExtendedHeapInformationWorkerCallback;
      v9[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v9, 0x58uLL, 0LL);
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
