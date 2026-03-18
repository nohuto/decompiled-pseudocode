/*
 * XREFs of MmIsWriteErrorFatal @ 0x1400823F0
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     FsRtlLogCcFlushError @ 0x14066C660 (FsRtlLogCcFlushError.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 */

__int64 __fastcall MmIsWriteErrorFatal(int a1, int a2, NTSTATUS a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (a3 == -1073741740 || !a1 || !a2) && a3 != -1073741672 && a3 != -1073741566 && a3 != -1073741202 )
  {
    if ( a3 == -1073741667 )
    {
      if ( a1 && a2 )
        goto LABEL_7;
    }
    else if ( a3 != -1073741662 || !a1 )
    {
LABEL_7:
      LOBYTE(v3) = FsRtlIsTotalDeviceFailure(a3) == 0;
      return v3;
    }
  }
  return 1LL;
}
