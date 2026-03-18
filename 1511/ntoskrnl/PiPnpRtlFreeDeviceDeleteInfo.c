/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x140604DB0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140604ED4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
