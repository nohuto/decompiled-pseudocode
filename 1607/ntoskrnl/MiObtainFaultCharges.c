/*
 * XREFs of MiObtainFaultCharges @ 0x14002B0B0
 * Callers:
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiPickClusterForMappedFileFault @ 0x140097090 (MiPickClusterForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiGetPageForHeader @ 0x1400FB8C8 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
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
