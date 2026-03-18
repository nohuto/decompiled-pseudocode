/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C00249A4
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0066730 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 2136) )
    return USBD_RemoveDeviceFromGlobalList(a1);
  return result;
}
