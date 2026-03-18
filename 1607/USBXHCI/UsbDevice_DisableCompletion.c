/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C00303A4
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C0030610 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C0030620 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C0031430 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C0020B8C (DeviceSlot_ClearDeviceContext.c)
 *     Endpoint_Disable @ 0x1C00213D0 (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0031A44 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C00335E4 (WPP_RECORDER_SF_dqL.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rdi
  char v6; // r15
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  PWDF_DRIVER_GLOBALS v10; // rcx
  char v11; // al
  int v12; // edx
  _QWORD *v13; // r12
  __int64 *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // eax

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
    goto LABEL_4;
  }
  v11 = *(_BYTE *)(a1 + 68);
  if ( v11 != 1 && v11 != 11 )
  {
    v12 = *(unsigned __int8 *)(a1 + 69);
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 64LL), v12, a3, 53);
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
  v13 = *(_QWORD **)(v3[1] + 104LL);
  if ( a3 != 2 )
    Endpoint_Disable(v3[22]);
  v14 = v3 + 23;
  v15 = 30LL;
  do
  {
    if ( *v14 )
    {
      Endpoint_Disable(*v14);
      *v14 = 0LL;
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  DeviceSlot_ClearDeviceContext(v13, (__int64)v3, *((unsigned __int8 *)v3 + 135));
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
LABEL_4:
  if ( a3 == 1 )
    v7 = 3221225473LL;
  if ( v6 )
  {
    v8 = WdfFunctions_01015;
    v9 = v3[55];
    v10 = WdfDriverGlobals;
    v3[55] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v8 + 2104))(v10, v9, v7);
  }
}
