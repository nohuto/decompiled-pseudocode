/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0003C20 (CommonBuffer_FlushWorkItems.c)
 *     Interrupter_D0ExitStopped @ 0x1C0003D70 (Interrupter_D0ExitStopped.c)
 *     Controller_D0Exit @ 0x1C00043A8 (Controller_D0Exit.c)
 *     RootHub_D0Exit @ 0x1C0004660 (RootHub_D0Exit.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005110 (WPP_RECORDER_SF_qLL.c)
 *     Register_ControllerReset @ 0x1C0006120 (Register_ControllerReset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000804C (Register_SetClearSSICPortUnused.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_D0ExitSaveState @ 0x1C001A8C0 (Controller_D0ExitSaveState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Template_pqqh @ 0x1C001C894 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C001C928 (Template_pqqq.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0023180 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004C008 (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C005325C (Controller_ExecuteKBLPowerTransitionWorkaround.c)
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
  int v11; // ecx
  int v12; // r8d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  int v18; // edx

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v4 + 356),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 356));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 64),
    v6,
    3,
    85,
    (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 308));
  *(_DWORD *)(v4 + 288) = a2;
  if ( *(_QWORD *)(v4 + 312) && a2 == 6 )
  {
    LOBYTE(v9) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 256),
      v9);
  }
  else
  {
    CommonBuffer_FlushWorkItems(*(_QWORD **)(v4 + 88));
    RootHub_D0Exit(*(_QWORD *)(v4 + 120), a2, *(unsigned int *)(v4 + 308));
    Controller_D0Exit(v4, a2);
    Interrupter_D0ExitStopped(*(_QWORD *)(v4 + 96), a2);
    if ( (*(_QWORD *)(v4 + 232) & 2) != 0 || *(_BYTE *)(v4 + 292) || a2 == 5 || *(_DWORD *)(v4 + 308) == 5 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 64), 4u, 3u, 0x56u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    }
    else
    {
      v14 = Controller_D0ExitSaveState(v4);
      if ( v14 < 0 )
      {
        *(_BYTE *)(v4 + 292) = 1;
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 64),
          v15,
          3,
          87,
          (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
          v14);
        Controller_HwVerifierBreakIfEnabled(
          v4,
          0,
          0,
          0x400000,
          (__int64)"Controller save state operation failed",
          0LL,
          0LL);
      }
      LOBYTE(v15) = 1;
      Register_SetClearSSICPortUnused(*(_QWORD *)(v4 + 80), v15);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v16);
      Controller_ExecuteDSMForHSICDisconnectInU3(v4, 0LL);
      if ( (_mm_srli_si128(*(__m128i *)(v4 + 232), 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v4, 0LL);
    }
  }
  if ( (*(_QWORD *)(v4 + 232) & 0x80000000000LL) != 0 && v8 == 5 )
  {
    LOBYTE(v10) = 1;
    v17 = Register_ControllerReset(*(_QWORD *)(v4 + 80), v10);
    if ( v17 < 0 )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 64),
        v18,
        3,
        88,
        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
        v17);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 264));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 384));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqq(
      v11,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v12,
      *(_QWORD *)(v4 + 8),
      a2,
      v8,
      0);
  return 0LL;
}
