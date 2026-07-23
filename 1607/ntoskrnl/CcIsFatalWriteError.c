/*
 * XREFs of CcIsFatalWriteError @ 0x14008E0DC
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14008F218 (CcNotifyOfMappedWriteComplete.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MmIsWriteErrorFatal @ 0x14008E84C (MmIsWriteErrorFatal.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  unsigned int v7; // ebx

  v3 = a2;
  if ( (int)a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x135AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = CcReferenceSharedCacheMapFileObject(a1, a2, a3);
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v6);
  return (unsigned int)MmIsWriteErrorFatal(1LL, v7, v3) != 0;
}
