/*
 * XREFs of Controller_InternalReset @ 0x1C001E960
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C001E618 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C001E69C (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C001F8D0 (Controller_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0004610 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerStop @ 0x1C0004D34 (Register_ControllerStop.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0005400 (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0005444 (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     RootHub_D0Entry @ 0x1C0005BD0 (RootHub_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_Start @ 0x1C0006CD8 (Controller_Start.c)
 *     DeviceSlot_Initialize @ 0x1C0006FC4 (DeviceSlot_Initialize.c)
 *     Register_ControllerReset @ 0x1C00071C0 (Register_ControllerReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C001B130 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C001B2F8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C001B3EC (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C001E2A0 (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Template_p @ 0x1C001FD44 (Template_p.c)
 *     Template_pq @ 0x1C001FF30 (Template_pq.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0020600 (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C0025F88 (Interrupter_ControllerResetPostReset.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C002FB48 (UsbDevice_ControllerResetPostReset.c)
 */

__int64 __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  KIRQL v8; // al
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdi
  unsigned int i; // r14d
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-30h]
  int v23; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    Template_p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0xAAu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 296)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  v6 = WdfFunctions_01015;
  LOBYTE(v5) = 1;
  ++*(_DWORD *)(a1 + 288);
  ++*(_DWORD *)(a1 + 352);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(v6 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 248),
    v5);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 128));
  *(_DWORD *)(v7 + 36) = 3;
  *(_BYTE *)(v7 + 137) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 128), v8);
  DeviceSlot_ControllerResetPreReset(*(_QWORD *)(a1 + 104));
  KeFlushQueuedDpcs();
  v9 = Register_ControllerStop(*(_QWORD *)(a1 + 80));
  KeFlushQueuedDpcs();
  if ( v9 >= 0 )
  {
    v10 = Register_ControllerReset(*(_QWORD *)(a1 + 80), 1);
    v4 = v10;
    if ( v10 < 0 )
    {
      v23 = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 64),
        2u,
        3u,
        0xACu,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v23);
    }
  }
  else
  {
    v22 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xABu,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v22);
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 112));
  CommonBuffer_FlushWorkItems(*(_QWORD **)(a1 + 88));
  v11 = *(_QWORD *)(a1 + 104);
  for ( i = 1; i <= *(_DWORD *)(v11 + 16); ++i )
  {
    v13 = *(_QWORD *)(v11 + 32);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 8LL * i);
    else
      v14 = 0LL;
    if ( v14 )
      UsbDevice_ControllerResetPostReset();
  }
  DeviceSlot_DisableAllDeviceSlots(v11);
  DeviceSlot_ScratchpadBuffersInitialize(v11);
  DeviceSlot_Initialize(v11);
  RootHub_D0Entry(*(_QWORD *)(a1 + 120));
  if ( v9 < 0 )
  {
    LODWORD(v21) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xADu,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v21);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v15 = 4107;
LABEL_19:
    Controller_ReportFatalError(a1, 4, v15, 0, 0LL, 0LL);
    goto LABEL_25;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 96));
  if ( v4 >= 0 )
  {
    v16 = Controller_Start((__int64 *)a1);
    v9 = v16;
    if ( v16 < 0 )
    {
      LODWORD(v21) = v16;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 64),
        2u,
        3u,
        0xAFu,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v21);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0,
        0,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v15 = 4104;
      goto LABEL_19;
    }
    v9 = 0;
  }
  else
  {
    LODWORD(v21) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xAEu,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v21);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError(a1, 4, 4103, 0, 0LL, 0LL);
    v9 = v4;
  }
LABEL_25:
  v17 = *(_QWORD *)(a1 + 112);
  if ( v9 < 0 )
  {
    Command_FailAllCommands(v17);
    ((void (__fastcall *)(void *, _QWORD))qword_1C0042760)(WPP_MAIN_CB.Dpc.DpcData, *(_QWORD *)(a1 + 8));
    LODWORD(v21) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xB1u,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v21);
  }
  else
  {
    Command_ControllerResetPostResetSuccess(v17);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0xB0u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  }
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    result = Template_pq(v18, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v19, *(_QWORD *)(a1 + 8), v9);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 296));
  return result;
}
