/*
 * XREFs of MiReturnFaultCharges @ 0x1400B2F88
 * Callers:
 *     MiObtainFaultCharges @ 0x14002B530 (MiObtainFaultCharges.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiGetPageForHeader @ 0x1400FDB48 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiFreeReadListPages @ 0x14042C7D4 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r11
  __int64 v5; // r10

  v4 = a2;
  v5 = a1;
  if ( (int *)a1 == MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a2);
  if ( (a3 & 1) != 0 )
    MiReturnCommit(v5, v4);
}
