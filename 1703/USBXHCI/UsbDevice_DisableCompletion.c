/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C002CFB0
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C002D250 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C002D270 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C002E130 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C001CE08 (DeviceSlot_ClearDeviceContext.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C002E75C (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0030364 (WPP_RECORDER_SF_dqL.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rsi
  char v6; // r13
  __int64 v7; // r8
  char v8; // al
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  __int64 *v12; // rdi
  __int64 **v13; // r14
  __int64 v14; // r15
  __int64 *v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  PWDF_DRIVER_GLOBALS v20; // rcx
  _QWORD *v21; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD **)(a1 + 56);
  v6 = 1;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 64LL),
      4u,
      0xBu,
      0x33u,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      *((unsigned __int8 *)v3 + 135),
      *v3);
    UsbDevice_SetDeviceDisabled(v3);
LABEL_3:
    v6 = 0;
    v7 = 3221225473LL;
    goto LABEL_15;
  }
  v8 = *(_BYTE *)(a1 + 68);
  if ( v8 != 1 && v8 != 11 )
  {
    v9 = *(unsigned __int8 *)(a1 + 69);
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 64LL), v9, a3, 53);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)v3[1],
      *v3,
      0,
      0x100000LL,
      "Disable Slot Command failed",
      (_QWORD *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(v3[1], 2, 4120, 0LL, 0LL, 0LL);
    goto LABEL_3;
  }
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v3[1] + 64LL),
    4u,
    0xBu,
    0x34u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    *(unsigned __int8 *)(a1 + 69),
    *v3);
  v21 = *(_QWORD **)(v3[1] + 104LL);
  if ( a3 != 2 )
  {
    v12 = (__int64 *)v3[22];
    LOBYTE(v10) = 1;
    Endpoint_Disable_Internal(v12, v10, v11);
    ESM_AddEvent(v12 + 34);
  }
  v13 = (__int64 **)(v3 + 23);
  v14 = 30LL;
  do
  {
    v15 = *v13;
    if ( *v13 )
    {
      LOBYTE(v10) = 1;
      Endpoint_Disable_Internal(*v13, v10, v11);
      ESM_AddEvent(v15 + 34);
      *v13 = 0LL;
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  DeviceSlot_ClearDeviceContext(v21, (__int64)v3, *((unsigned __int8 *)v3 + 135));
  v7 = 0LL;
  *((_WORD *)v3 + 67) = 0;
  v3[20] = 0LL;
  if ( a3 == 2 )
  {
    memset(v3 + 57, 0, 0x50uLL);
    v16 = v3[1];
    v3[63] = UsbDevice_EnableCompletion;
    v17 = *((_DWORD *)v3 + 123) & 0xFFFF27FF;
    v3[64] = v3;
    *((_DWORD *)v3 + 123) = v17 | 0x2400;
    Command_SendCommand(*(_QWORD *)(v16 + 112), (__int64)(v3 + 57));
    return;
  }
LABEL_15:
  if ( a3 == 1 )
    v7 = 3221225473LL;
  if ( v6 )
  {
    v18 = WdfFunctions_01015;
    v19 = v3[55];
    v20 = WdfDriverGlobals;
    v3[55] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v18 + 2104))(v20, v19, v7);
  }
}
