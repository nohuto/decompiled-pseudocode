/*
 * XREFs of MiObtainFaultCharges @ 0x14008F350
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiPickClusterForMappedFileFault @ 0x140110FE0 (MiPickClusterForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(__int16 *a1, unsigned __int64 a2, char a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 CachedResidentAvailable; // rax
  int v9; // ett
  unsigned __int64 v11; // rdi

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
          v9 = CachedResidentAvailable;
          LODWORD(CachedResidentAvailable) = _InterlockedCompareExchange(
                                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                               CachedResidentAvailable - a2,
                                               CachedResidentAvailable);
          if ( v9 == (_DWORD)CachedResidentAvailable )
            goto LABEL_9;
        }
        while ( a2 <= (unsigned int)CachedResidentAvailable );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, 1024LL, a4) )
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
  a2 = 1LL;
  MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL, a4);
LABEL_13:
  if ( (a3 & 1) != 0 )
  {
    v11 = a2;
    while ( (unsigned int)MiChargeCommit(a1, v11, 1LL) != 1 )
    {
      v11 >>= 1;
      if ( !v11 )
      {
        if ( (a3 & 2) != 0 )
        {
          v11 = 1LL;
          MiChargeCommit(a1, 1LL, 4LL);
        }
        break;
      }
    }
    if ( a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034FA78, v11);
    if ( v11 != a2 )
      MiReturnFaultCharges(a1, a2 - v11, 0LL);
    return v11;
  }
  else
  {
    if ( a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034FA78, a2);
    return a2;
  }
}
