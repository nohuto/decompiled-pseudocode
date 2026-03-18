/*
 * XREFs of Etw_ControllerFirmareVersionUpdate @ 0x1C0033D78
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DA8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Register_ParseCapabilityRegister @ 0x1C004D050 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     Template_pqqqqqqqsssxqqqt @ 0x1C00348B0 (Template_pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerFirmareVersionUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return Template_pqqqqqqqsssxqqqt(
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
             *(_DWORD *)(a2 + 352),
             *(_DWORD *)(a2 + 288),
             *(_DWORD *)(a2 + 144),
             *(unsigned __int8 *)(a2 + 416));
  return result;
}
