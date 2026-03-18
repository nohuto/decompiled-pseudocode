/*
 * XREFs of PspFreeRateControl @ 0x1404D1D14
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x1404D1C98 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404D1E00 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x1406807A8 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140680A28 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1404A5FD0 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x1404D1DE4 (PspGetRateControlSize.c)
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
