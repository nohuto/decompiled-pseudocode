/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C00073DC
 * Callers:
 *     Register_ControllerStop @ 0x1C0004D34 (Register_ControllerStop.c)
 *     Interrupter_D0Entry @ 0x1C0005800 (Interrupter_D0Entry.c)
 *     Controller_Start @ 0x1C0006CD8 (Controller_Start.c)
 *     DeviceSlot_Initialize @ 0x1C0006FC4 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C0007028 (Command_Initialize.c)
 *     Register_ControllerReset @ 0x1C00071C0 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C0007338 (Register_WaitForControllerReady.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001BE40 (Command_WdfEvtTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C001F8D0 (Controller_UcxEvtReset.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C0020718 (DeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C0025F88 (Interrupter_ControllerResetPostReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0027440 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027C40 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00314D0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031690 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00318F0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0031A90 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032240 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00324A0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
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
    0xD9u,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    v4,
    v5);
  return 0;
}
