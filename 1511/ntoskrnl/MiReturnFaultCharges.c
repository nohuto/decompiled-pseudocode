/*
 * XREFs of MiReturnFaultCharges @ 0x1400F2600
 * Callers:
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x14047B620 (MiFreeReadListPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r11

  v4 = a2;
  if ( (int *)a1 == MiSystemPartition )
  {
    MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64(&qword_1402FF5E0, v4);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), a2);
  }
  if ( (a3 & 1) != 0 )
    MiReturnCommit(a1, v4);
}
