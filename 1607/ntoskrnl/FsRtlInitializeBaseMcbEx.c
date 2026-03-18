/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x14008D544
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x14008D4D8 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcb @ 0x14008D538 (FsRtlInitializeBaseMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlInitializeBaseMcbEx(PBASE_MCB Mcb, POOL_TYPE PoolType, USHORT Flags)
{
  char v3; // di
  PVOID PoolWithTag; // rax

  Mcb->PairCount = 0;
  v3 = Flags;
  Mcb->PoolType = PoolType;
  Mcb->Flags = Flags;
  if ( PoolType == PagedPool )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&FsRtlFirstMappingLookasideList);
  else
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(unsigned __int16)PoolType, 0x78uLL, 0x74725346u);
  Mcb->Mapping = PoolWithTag;
  if ( PoolWithTag )
  {
    Mcb->MaximumPairCount = 15;
    return 1;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0;
  }
}
