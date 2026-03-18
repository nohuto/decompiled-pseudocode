/*
 * XREFs of Etw_ControllerCreate @ 0x1C0004FD0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     Template_pqqqqqqqsssxqqq @ 0x1C00333C0 (Template_pqqqqqqqsssxqqq.c)
 */

__int64 __fastcall Etw_ControllerCreate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    return Template_pqqqqqqqsssxqqq(
             a2 + 210,
             &USBXHCI_ETW_EVENT_CONTROLLER_CREATE,
             0LL,
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
  return result;
}
