/*
 * XREFs of HUBUCX_CheckIfHubIsDisconnected @ 0x1C0021540
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B140 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBUCX_CheckIfHubIsDisconnected(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 536))(*(_QWORD *)(a1 + 240));
}
