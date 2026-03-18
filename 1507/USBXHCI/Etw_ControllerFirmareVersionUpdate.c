/*
 * XREFs of Etw_ControllerFirmareVersionUpdate @ 0x1C0032898
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DB8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Register_ParseCapabilityRegister @ 0x1C0049D30 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     Template_pqqqqqqqsssxqqq @ 0x1C00333C0 (Template_pqqqqqqqsssxqqq.c)
 */

__int64 __fastcall Etw_ControllerFirmareVersionUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    return Template_pqqqqqqqsssxqqq(
             a2 + 210,
             &USBXHCI_ETW_EVENT_CONTROLLER_FIRMWARE_VERSION_UPDATE,
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
