/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0003AC0 (CommonBuffer_FlushWorkItems.c)
 *     Interrupter_D0ExitStopped @ 0x1C0003B2C (Interrupter_D0ExitStopped.c)
 *     Controller_D0Exit @ 0x1C0003DDC (Controller_D0Exit.c)
 *     RootHub_D0Exit @ 0x1C00043E0 (RootHub_D0Exit.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004CC0 (WPP_RECORDER_SF_qLL.c)
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006CC8 (Register_SetClearSSICPortUnused.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_D0ExitSaveState @ 0x1C001E514 (Controller_D0ExitSaveState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Template_pqqh @ 0x1C0020404 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0020490 (Template_pqqq.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0026C8C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004A01C (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
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
    (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
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
    Controller_D0Exit((_QWORD *)v4, a2, v10);
    Interrupter_D0ExitStopped(*(_QWORD *)(v4 + 96), a2);
    if ( (*(_QWORD *)(v4 + 232) & 2) != 0 || *(_BYTE *)(v4 + 292) || a2 == 5 || *(_DWORD *)(v4 + 308) == 5 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 64), 4u, 3u, 0x56u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    }
    else
    {
      v15 = Controller_D0ExitSaveState(v4);
      if ( v15 < 0 )
      {
        *(_BYTE *)(v4 + 292) = 1;
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 64),
          v16,
          3,
          87,
          (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
          v15);
        Controller_HwVerifierBreakIfEnabled(
          v4,
          0,
          0,
          0x400000,
          (__int64)"Controller save state operation failed",
          0LL,
          0LL);
      }
      LOBYTE(v16) = 1;
      Register_SetClearSSICPortUnused(*(_QWORD *)(v4 + 80), v16);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v17);
      Controller_ExecuteDSMForHSICDisconnectInU3(v4, 0LL);
    }
  }
  if ( (*(_QWORD *)(v4 + 232) & 0x80000000000LL) != 0 && v8 == 5 )
  {
    LOBYTE(v11) = 1;
    v18 = Register_ControllerReset(*(_QWORD *)(v4 + 80), v11);
    if ( v18 < 0 )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 64),
        v19,
        3,
        88,
        (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
        v18);
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
      v12,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE,
      v13,
      *(_QWORD *)(v4 + 8),
      a2,
      v8,
      0);
  return 0LL;
}
