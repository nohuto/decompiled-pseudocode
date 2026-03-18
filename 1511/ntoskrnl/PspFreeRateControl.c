/*
 * XREFs of PspFreeRateControl @ 0x140487854
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x1404877D8 (PspRemoveCpuRateControl.c)
 *     PspRemoveRateControl @ 0x1406423B4 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140487924 (PspGetRateControlSize.c)
 */

void __fastcall PspFreeRateControl(__int64 a1, unsigned int a2)
{
  ULONG_PTR RateControlSize; // rax
  void *v4; // rcx

  RateControlSize = PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*(char **)a1, RateControlSize, 0LL);
  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x624A7350u);
  ExFreePoolWithTag((PVOID)a1, 0x624A7350u);
}
