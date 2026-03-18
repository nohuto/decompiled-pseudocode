/*
 * XREFs of PspAllocateRateControl @ 0x140487898
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x14046B774 (PsChargeSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140487924 (PspGetRateControlSize.c)
 */

_QWORD *__fastcall PspAllocateRateControl(__int64 a1)
{
  SIZE_T RateControlSize; // rdi
  POOL_TYPE v2; // r9d
  int v3; // ecx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rsi

  RateControlSize = PspGetRateControlSize(a1);
  v2 = PagedPool;
  if ( v3 == 2 )
    v2 = NonPagedPoolNx;
  PoolWithTag = ExAllocatePoolWithTag(v2, RateControlSize, 0x624A7350u);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      memset(PoolWithTag, 0, RateControlSize);
      *PoolWithTag = v5;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
