/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C00042C8
 * Callers:
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 *     Controller_Start @ 0x1C0003FB0 (Controller_Start.c)
 *     DeviceSlot_Initialize @ 0x1C00041A8 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C000420C (Command_Initialize.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00128A0 (Command_WdfEvtTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C0016200 (Controller_UcxEvtReset.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C0017004 (DeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001CDE0 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001CE50 (Interrupter_D0Entry.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001EE60 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001F660 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00306E0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00308A0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0030B00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0030CA0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0031450 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00316B0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  unsigned __int8 v2; // cl
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 80) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 285) )
    return 1;
  v5 = *(unsigned __int8 *)(a1 + 285);
  v4 = v2;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(a1 + 64),
    2u,
    3u,
    0xD7u,
    (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
    v4,
    v5);
  return 0;
}
