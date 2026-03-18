/*
 * XREFs of CcIsFatalWriteError @ 0x1400E4250
 * Callers:
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400E4064 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x140030710 (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  unsigned __int64 v5; // rax
  int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x1356uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return (unsigned int)MmIsWriteErrorFatal(1, v6, a2) != 0;
}
