/*
 * XREFs of PspFreeRateControl @ 0x1404B57B4
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x1404B5738 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x14068088C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140680B0C (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspGetRateControlSize @ 0x1404B5884 (PspGetRateControlSize.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 */

void __fastcall PspFreeRateControl(__int64 a1, unsigned int a2)
{
  void *v3; // rcx

  PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*(PVOID *)a1);
  v3 = *(void **)(a1 + 24);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624A7350u);
  ExFreePoolWithTag((PVOID)a1, 0x624A7350u);
}
