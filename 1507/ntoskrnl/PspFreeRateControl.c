/*
 * XREFs of PspFreeRateControl @ 0x14053CDC8
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x14053CD70 (PspRemoveCpuRateControl.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14053CE9C (PspGetRateControlSize.c)
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
