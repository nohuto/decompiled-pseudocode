/*
 * XREFs of HUBUCX_CheckIfHubIsDisconnected @ 0x1C001E758
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0066730 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBUCX_CheckIfHubIsDisconnected(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 504))(*(_QWORD *)(a1 + 208));
}
