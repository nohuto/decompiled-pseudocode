/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C002EC24
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C002EE90 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C002EEA0 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C002FC40 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C0016E60 (DeviceSlot_ClearDeviceContext.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00304F4 (UsbDevice_SetDeviceDisabled.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0032114 (WPP_RECORDER_SF_dqL.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rdi
  char v6; // r15
  __int64 v7; // r8
  __int64 v8; // rdx
  char v9; // al
  int v10; // edx
  _QWORD *v11; // r12
  __int64 *v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // eax

  v3 = *(_QWORD **)(a1 + 56);
  v6 = 1;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v3[1] + 64LL),
      4u,
      0xBu,
      0x33u,
      (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
      *((unsigned __int8 *)v3 + 135),
      *v3);
    UsbDevice_SetDeviceDisabled(v3);
LABEL_3:
    v6 = 0;
    v7 = 3221225473LL;
    goto LABEL_4;
  }
  v9 = *(_BYTE *)(a1 + 68);
  if ( v9 != 1 && v9 != 11 )
  {
    v10 = *(unsigned __int8 *)(a1 + 69);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 64LL), v10, a3, 53);
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
    (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
    *(unsigned __int8 *)(a1 + 69),
    *v3);
  v11 = *(_QWORD **)(v3[1] + 104LL);
  if ( a3 != 2 )
    Endpoint_Disable(v3[22]);
  v12 = v3 + 23;
  v13 = 30LL;
  do
  {
    if ( *v12 )
    {
      Endpoint_Disable(*v12);
      *v12 = 0LL;
    }
    ++v12;
    --v13;
  }
  while ( v13 );
  DeviceSlot_ClearDeviceContext(v11, (__int64)v3, *((unsigned __int8 *)v3 + 135));
  v7 = 0LL;
  *((_WORD *)v3 + 67) = 0;
  v3[20] = 0LL;
  if ( a3 == 2 )
  {
    memset(v3 + 57, 0, 0x50uLL);
    v14 = v3[1];
    v3[63] = UsbDevice_EnableCompletion;
    v15 = *((_DWORD *)v3 + 123) & 0xFFFF27FF;
    v3[64] = v3;
    *((_DWORD *)v3 + 123) = v15 | 0x2400;
    Command_SendCommand(*(_QWORD *)(v14 + 112), (__int64)(v3 + 57));
    return;
  }
LABEL_4:
  if ( a3 == 1 )
    v7 = 3221225473LL;
  if ( v6 )
  {
    v8 = v3[55];
    v3[55] = 0LL;
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, __int64))(WdfFunctions_01015 + 2104))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      v8,
      v7);
  }
}
