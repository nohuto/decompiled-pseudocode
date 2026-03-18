/*
 * XREFs of Etw_ControllerFirmareVersionUpdate @ 0x1C0033698
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0007DD8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Register_ParseCapabilityRegister @ 0x1C004A0C0 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     Template_pqqqqqqqsssxqqqt @ 0x1C0034390 (Template_pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerFirmareVersionUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-88h]

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
  {
    v3 = *(_DWORD *)(a2 + 148);
    return Template_pqqqqqqqsssxqqqt(
             a2 + 210,
             &USBXHCI_ETW_EVENT_CONTROLLER_FIRMWARE_VERSION_UPDATE,
             0LL,
             *(_QWORD *)(a2 + 8),
             v3,
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
             *(_DWORD *)(a2 + 144),
             *(unsigned __int8 *)(a2 + 408));
  }
  return result;
}
