/*
 * XREFs of Controller_IsControllerAccessible @ 0x1C0005C54
 * Callers:
 *     Register_ControllerStop @ 0x1C00041E0 (Register_ControllerStop.c)
 *     Interrupter_D0Entry @ 0x1C0004E40 (Interrupter_D0Entry.c)
 *     Controller_Start @ 0x1C0005440 (Controller_Start.c)
 *     DeviceSlot_Initialize @ 0x1C0005654 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C00056C4 (Command_Initialize.c)
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C0005AFC (Register_WaitForControllerReady.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001C2A0 (Command_WdfEvtTimerFunction.c)
 *     Controller_UcxEvtReset @ 0x1C001FD30 (Controller_UcxEvtReset.c)
 *     DeviceSlot_SetDeviceContext @ 0x1C0020CF8 (DeviceSlot_SetDeviceContext.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C00266E0 (Interrupter_ControllerResetPostReset.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0027A70 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0028270 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0031B50 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031D10 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0031F70 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0032110 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032920 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0032B80 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
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
    0xDCu,
    (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
    v4,
    v5);
  return 0;
}
