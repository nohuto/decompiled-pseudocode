/*
 * XREFs of Etw_ControllerRundown @ 0x1C000A7FC
 * Callers:
 *     Etw_EnableCallback @ 0x1C000A5B0 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C000A860 (Etw_DeviceListRundown.c)
 *     Template_pqqqqqqqsssxqqqt @ 0x1C00317C8 (Template_pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    Template_pqqqqqqqsssxqqqt(
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
      *(_DWORD *)(a2 + 352),
      *(_DWORD *)(a2 + 288),
      *(_DWORD *)(a2 + 144),
      *(unsigned __int8 *)(a2 + 416));
  return Etw_DeviceListRundown(a1, a2);
}
