/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C000642C
 * Callers:
 *     Register_ControllerStop @ 0x1C0004194 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_Start @ 0x1C0005CF0 (Controller_Start.c)
 *     DeviceSlot_Initialize @ 0x1C0005F04 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C0005F78 (Command_Initialize.c)
 *     Register_ControllerReset @ 0x1C0006120 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C00062BC (Register_WaitForControllerReady.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00185C0 (Command_WdfEvtTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C001C140 (Controller_UcxEvtReset.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C001CF84 (DeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C0022B10 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C0022B84 (Interrupter_D0Entry.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024000 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0024820 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C002E8A0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C002EA60 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C002ECF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C002EEB0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C002F730 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C002F9C0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  unsigned __int8 v2; // cl
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 80) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 293) )
    return 1;
  v5 = *(unsigned __int8 *)(a1 + 293);
  v4 = v2;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1 + 64),
    2u,
    3u,
    0xDBu,
    (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
    v4,
    v5);
  return 0;
}
