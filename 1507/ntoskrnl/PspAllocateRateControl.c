/*
 * XREFs of PspAllocateRateControl @ 0x14053CE10
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404CF74C (PsChargeSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14053CE9C (PspGetRateControlSize.c)
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
