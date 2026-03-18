/*
 * XREFs of MiObtainFaultCharges @ 0x14002B530
 * Callers:
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiPickClusterForMappedFileFault @ 0x140097890 (MiPickClusterForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiGetPageForHeader @ 0x1400FDB48 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnFaultCharges @ 0x1400B2F88 (MiReturnFaultCharges.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x1401034A4 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiObtainFaultCharges(int *a1, unsigned int a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rax
  int v8; // ett
  unsigned int v10; // ebx

  while ( 1 )
  {
    if ( a1 == MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( a2 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v8 = CachedResidentAvailable;
          LODWORD(CachedResidentAvailable) = _InterlockedCompareExchange(
                                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                               CachedResidentAvailable - a2,
                                               CachedResidentAvailable);
          if ( v8 == (_DWORD)CachedResidentAvailable )
            goto LABEL_9;
        }
        while ( a2 <= (unsigned __int64)(unsigned int)CachedResidentAvailable );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, 1024LL) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_10;
  }
LABEL_9:
  if ( a2 )
    goto LABEL_13;
LABEL_10:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
LABEL_13:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( (unsigned int)MiChargeCommit(a1, v10, 1LL) != 1 )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1;
        MiChargeCommit(a1, 1LL, 4LL);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
