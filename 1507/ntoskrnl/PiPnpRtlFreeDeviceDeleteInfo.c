/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x14067FB74
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14067FC98 (PiPnpRtlGatherDeviceDeleteInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
