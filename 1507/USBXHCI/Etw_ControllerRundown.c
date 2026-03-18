/*
 * XREFs of Etw_ControllerRundown @ 0x1C0007174
 * Callers:
 *     Etw_EnableCallback @ 0x1C0006F30 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C00071D0 (Etw_DeviceListRundown.c)
 *     Template_pqqqqqqqsssxqqq @ 0x1C00333C0 (Template_pqqqqqqqsssxqqq.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
    Template_pqqqqqqqsssxqqq(
      a1,
      &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 148),
      *(_DWORD *)(a2 + 164),
      *(unsigned __int16 *)(a2 + 168),
      *(unsigned __int16 *)(a2 + 172),
      *(unsigned __int16 *)(a2 + 152),
      *(unsigned __int16 *)(a2 + 156),
      *(unsigned __int8 *)(a2 + 160),
      a2 + 200,
      a2 + 205,
      a2 + 210,
      *(_QWORD *)(a2 + 224),
      *(_DWORD *)(a2 + 344),
      *(_DWORD *)(a2 + 280),
      *(_DWORD *)(a2 + 144));
  return Etw_DeviceListRundown(a1, a2);
}
