/*
 * XREFs of Controller_InternalReset @ 0x1C0015420
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C00150D8 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C001515C (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C0016200 (Controller_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C00013A0 (CommonBuffer_FlushWorkItems.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0001410 (DeviceSlot_DisableAllDeviceSlots.c)
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C0002980 (RootHub_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 *     Controller_Start @ 0x1C0003FB0 (Controller_Start.c)
 *     DeviceSlot_Initialize @ 0x1C00041A8 (DeviceSlot_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C0011700 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C00118C8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C00119BC (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C0014C50 (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Template_p @ 0x1C0016674 (Template_p.c)
 *     Template_pq @ 0x1C0016860 (Template_pq.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0016EB4 (DeviceSlot_ControllerResetPreReset.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0016FCC (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001CDE0 (Interrupter_ControllerResetPostReset.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C002E938 (UsbDevice_ControllerResetPostReset.c)
 */

__int64 __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // r8
  __int64 v6; // rbx
  KIRQL v7; // al
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rdi
  unsigned int i; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    Template_p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0xA8u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 296)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  ++*(_DWORD *)(a1 + 288);
  LOBYTE(v5) = 1;
  ++*(_DWORD *)(a1 + 352);
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(a1 + 248),
    v5);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 128));
  *(_DWORD *)(v6 + 36) = 3;
  *(_BYTE *)(v6 + 137) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 128), v7);
  DeviceSlot_ControllerResetPreReset(*(_QWORD *)(a1 + 104));
  KeFlushQueuedDpcs();
  v8 = Register_ControllerStop(*(_QWORD *)(a1 + 80));
  KeFlushQueuedDpcs();
  if ( v8 >= 0 )
  {
    v9 = Register_ControllerReset(*(_QWORD *)(a1 + 80), 1);
    v4 = v9;
    if ( v9 < 0 )
    {
      v22 = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 64),
        2u,
        3u,
        0xAAu,
        (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
        v22);
    }
  }
  else
  {
    v21 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xA9u,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v21);
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 112));
  CommonBuffer_FlushWorkItems(*(_QWORD **)(a1 + 88));
  v10 = *(_QWORD *)(a1 + 104);
  for ( i = 1; i <= *(_DWORD *)(v10 + 16); ++i )
  {
    v12 = *(_QWORD *)(v10 + 32);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 8LL * i);
    else
      v13 = 0LL;
    if ( v13 )
      UsbDevice_ControllerResetPostReset();
  }
  DeviceSlot_DisableAllDeviceSlots(v10);
  DeviceSlot_ScratchpadBuffersInitialize(v10);
  DeviceSlot_Initialize(v10);
  RootHub_D0Entry(*(_QWORD *)(a1 + 120));
  if ( v8 < 0 )
  {
    LODWORD(v20) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xABu,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v20);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v14 = 4107;
LABEL_19:
    Controller_ReportFatalError(a1, 4, v14, 0, 0LL, 0LL);
    goto LABEL_25;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 96));
  if ( v4 >= 0 )
  {
    v15 = Controller_Start((__int64 *)a1);
    v8 = v15;
    if ( v15 < 0 )
    {
      LODWORD(v20) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 64),
        2u,
        3u,
        0xADu,
        (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
        v20);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0,
        0,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v14 = 4104;
      goto LABEL_19;
    }
    v8 = 0;
  }
  else
  {
    LODWORD(v20) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xACu,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v20);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError(a1, 4, 4103, 0, 0LL, 0LL);
    v8 = v4;
  }
LABEL_25:
  v16 = *(_QWORD *)(a1 + 112);
  if ( v8 < 0 )
  {
    Command_FailAllCommands(v16);
    ((void (__fastcall *)(__int64, _QWORD))qword_1C0041520)(UcxGlobals, *(_QWORD *)(a1 + 8));
    LODWORD(v20) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xAFu,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v20);
  }
  else
  {
    Command_ControllerResetPostResetSuccess(v16);
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0xAEu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  }
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 2) != 0 )
    result = Template_pq(v17, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v18, *(_QWORD *)(a1 + 8), v8);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 296));
  return result;
}
