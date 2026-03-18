/*
 * XREFs of MiObtainFaultCharges @ 0x1400634F0
 * Callers:
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1400AB910 (MiPickClusterForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiObtainFaultCharges(int *a1, unsigned int a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 CachedResidentAvailable; // r8
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned int v10; // ebx

  while ( 1 )
  {
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( a2 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v9 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable - a2,
                 CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == v9;
          LODWORD(CachedResidentAvailable) = v9;
          if ( v8 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v9 );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, 1024LL) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_22;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_22:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
LABEL_6:
  if ( (a3 & 1) != 0 )
  {
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
    if ( a1 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF5D8, v10);
    if ( v10 != a2 )
      MiReturnFaultCharges(a1, a2 - v10, 0LL);
    return v10;
  }
  else
  {
    if ( a1 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF5D8, a2);
    return a2;
  }
}
