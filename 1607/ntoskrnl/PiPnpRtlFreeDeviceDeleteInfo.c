/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x14062EBB0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14062ED30 (PiPnpRtlGatherDeviceDeleteInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
