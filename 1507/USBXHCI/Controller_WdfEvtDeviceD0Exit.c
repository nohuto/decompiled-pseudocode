/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C00013A0 (CommonBuffer_FlushWorkItems.c)
 *     Interrupter_D0ExitStopped @ 0x1C00017AC (Interrupter_D0ExitStopped.c)
 *     Controller_D0Exit @ 0x1C0001840 (Controller_D0Exit.c)
 *     RootHub_D0Exit @ 0x1C0001A90 (RootHub_D0Exit.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0003D74 (Register_SetClearSSICPortUnused.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004E50 (WPP_RECORDER_SF_qLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_D0ExitSaveState @ 0x1C0014A64 (Controller_D0ExitSaveState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Template_pqqh @ 0x1C00168D4 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0016960 (Template_pqqq.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001E0AC (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004E4AC (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3104))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v4 + 348),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 348));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 64),
    v6,
    3,
    83,
    (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 300));
  *(_DWORD *)(v4 + 280) = a2;
  if ( *(_QWORD *)(v4 + 304) && a2 == 6 )
  {
    LOBYTE(v9) = 1;
    (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      *(_QWORD *)(v4 + 248),
      v9);
  }
  else
  {
    CommonBuffer_FlushWorkItems(*(_QWORD **)(v4 + 88));
    RootHub_D0Exit(*(_QWORD *)(v4 + 120), a2, *(unsigned int *)(v4 + 300));
    Controller_D0Exit(v4, a2);
    Interrupter_D0ExitStopped(*(_QWORD *)(v4 + 96), a2);
    if ( (*(_QWORD *)(v4 + 232) & 2) != 0 || *(_BYTE *)(v4 + 284) || a2 == 5 || *(_DWORD *)(v4 + 300) == 5 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 64), 4u, 3u, 0x54u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    }
    else
    {
      v11 = Controller_D0ExitSaveState(v4);
      if ( v11 < 0 )
      {
        *(_BYTE *)(v4 + 284) = 1;
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 64),
          v12,
          3,
          85,
          (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
          v11);
        Controller_HwVerifierBreakIfEnabled(
          v4,
          0,
          0,
          0x400000,
          (__int64)"Controller save state operation failed",
          0LL,
          0LL);
      }
      LOBYTE(v12) = 1;
      Register_SetClearSSICPortUnused(*(_QWORD *)(v4 + 80), v12);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v13, 0LL);
      Controller_ExecuteDSMForHSICDisconnectInU3(v4, 0LL);
    }
  }
  if ( (*(_QWORD *)(v4 + 232) & 0x80000000000LL) != 0 && v8 == 5 )
  {
    LOBYTE(v10) = 1;
    v14 = Register_ControllerReset(*(_QWORD *)(v4 + 80), v10);
    if ( v14 < 0 )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 64),
        v15,
        3,
        86,
        (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
        v14);
    }
  }
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 3056))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(v4 + 256));
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 3056))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(v4 + 376));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqq(
      v16,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v17,
      *(_QWORD *)(v4 + 8),
      a2,
      v8,
      0);
  return 0LL;
}
