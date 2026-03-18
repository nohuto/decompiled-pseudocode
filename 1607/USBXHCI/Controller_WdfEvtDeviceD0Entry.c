/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C00041E0 (Register_ControllerStop.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000487C (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C00048D0 (DeviceSlot_DisableAllDeviceSlots.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004CC0 (WPP_RECORDER_SF_qLL.c)
 *     Interrupter_D0Entry @ 0x1C0004E40 (Interrupter_D0Entry.c)
 *     DeviceSlot_Initialize @ 0x1C0005654 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C00056C4 (Command_Initialize.c)
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0005A28 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     RootHub_D0Entry @ 0x1C0005C80 (RootHub_D0Entry.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006CC8 (Register_SetClearSSICPortUnused.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0007070 (WPP_RECORDER_SF_qd.c)
 *     Register_D0Entry @ 0x1C0007498 (Register_D0Entry.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_D0EntryRestoreState @ 0x1C001E304 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
 *     Template_pqqh @ 0x1C0020404 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0020490 (Template_pqqq.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0026C8C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C004A000 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004A01C (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, int a2)
{
  char v4; // r14
  char v5; // r12
  __int64 v6; // rbx
  char v7; // al
  int v8; // r8d
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ebp
  bool v16; // zf
  char v17; // r8
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v21; // edx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  unsigned __int16 v34; // r9
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  int v37; // [rsp+40h] [rbp-48h] BYREF
  __int64 v38; // [rsp+44h] [rbp-44h]

  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
                 + 8);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v9 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v6 + 356),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v8,
      *(_QWORD *)(v6 + 8),
      a2,
      v7,
      *(_BYTE *)(v6 + 356));
  LODWORD(v36) = a2;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v6 + 64),
    4u,
    3u,
    0x3Eu,
    (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
    a1,
    v36,
    *(_DWORD *)(v6 + 308));
  if ( **(_DWORD **)(*(_QWORD *)(v6 + 80) + 24LL) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 64), 2u, 3u, 0x3Fu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    v5 = 1;
    v13 = -1073741823;
LABEL_34:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v6 + 104));
    v29 = v6;
    if ( v5 )
    {
      LOBYTE(v28) = 1;
    }
    else
    {
      Controller_ReportFatalError(v6, 0, 4124, 0, 0LL, 0LL);
      v28 = 0LL;
      v29 = v6;
    }
    Controller_SetControllerGone(v29, v28);
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v6 + 308) == 2 )
  {
    v11 = *(_QWORD *)(v6 + 312);
    if ( v11 && *(_DWORD *)(v11 + 584) == 4 )
    {
      v30 = Register_ControllerStop(*(_QWORD *)(v6 + 80));
      if ( v30 < 0 )
      {
        LODWORD(v35) = v30;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 64),
          2u,
          3u,
          0x40u,
          (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
          v35);
      }
    }
    else
    {
      v12 = Register_BiosHandoff(*(_QWORD **)(v6 + 80));
      v13 = v12;
      if ( v12 < 0 )
      {
        LODWORD(v35) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 64),
          2u,
          3u,
          0x41u,
          (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
          v35);
        goto LABEL_26;
      }
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v6 + 104), a2);
    v14 = Register_ControllerReset(*(_QWORD *)(v6 + 80), 0);
    v13 = v14;
    if ( v14 < 0 )
    {
      LODWORD(v35) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        3u,
        0x42u,
        (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
        v35);
      goto LABEL_26;
    }
    v4 = 1;
  }
  if ( !*(_BYTE *)(v6 + 328) )
  {
    *(_DWORD *)(v6 + 332) = KeQueryTimeIncrement();
    v10 = _InterlockedExchange64(
            (volatile __int64 *)(v6 + 320),
            ((unsigned __int64)(((unsigned int)(**(_DWORD **)(*(_QWORD *)(v6 + 80) + 40LL) + 1) >> 3) & 0x7FF) >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v6 + 332) / 10000LL - (((unsigned int)(**(_DWORD **)(*(_QWORD *)(v6 + 80) + 40LL) + 1) >> 3) & 0x7FF)) << 21));
    *(_BYTE *)(v6 + 328) = 1;
  }
  LOBYTE(v10) = 1;
  Controller_ExecuteDSMForHSICDisconnectInU3(v6, v10);
  v15 = 1;
  v16 = 0;
  do
  {
    if ( v16 || (*(_QWORD *)(v6 + 232) & 2) != 0 || a2 == 5 || *(_BYTE *)(v6 + 292) || *(_DWORD *)(v6 + 308) == 2 )
    {
      v17 = 0;
    }
    else
    {
      Register_SetClearSSICPortUnused(*(_QWORD *)(v6 + 80), 0);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v31);
      v17 = 1;
    }
    v13 = Interrupter_D0Entry(*(_QWORD *)(v6 + 96), a2, v17);
    if ( v13 < 0 )
    {
      v34 = 67;
      LODWORD(v35) = v13;
      goto LABEL_54;
    }
    v19 = *(_QWORD *)(v6 + 104);
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v19 + 8) + 64LL),
      v18,
      9,
      17,
      (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
      v19,
      a2);
    DeviceSlot_Initialize(v19);
    v20 = *(_QWORD *)(v6 + 112);
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v20 + 16),
      v21,
      6,
      17,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v20,
      a2);
    Command_Initialize(v20);
    if ( a2 == 5 || v15 == 2 || *(_DWORD *)(v6 + 308) == 2 )
      break;
    if ( (*(_QWORD *)(v6 + 232) & 2) != 0 || *(_BYTE *)(v6 + 292) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 64), 4u, 3u, 0x47u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    }
    else
    {
      v32 = Controller_D0EntryRestoreState(v6);
      if ( v32 >= 0 )
        break;
      LODWORD(v35) = v32;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        4u,
        3u,
        0x46u,
        (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
        v35);
      Controller_HwVerifierBreakIfEnabled(
        v6,
        0,
        0,
        0x400000,
        (__int64)"Controller restore state operation failed",
        0LL,
        0LL);
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v6 + 104), a2);
    v33 = Register_ControllerReset(*(_QWORD *)(v6 + 80), 0);
    v13 = v33;
    if ( v33 < 0 )
    {
      LODWORD(v35) = v33;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        3u,
        0x48u,
        (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
        v35);
      goto LABEL_26;
    }
    ++v15;
    v4 = 1;
    v16 = v15 == 2;
  }
  while ( v15 <= 2 );
  v22 = Register_D0Entry(*(_QWORD *)(v6 + 80));
  v13 = v22;
  if ( v22 < 0 )
  {
    v34 = 73;
    LODWORD(v35) = v22;
LABEL_54:
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 64), 2u, 3u, v34, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v35);
    goto LABEL_26;
  }
  v23 = RootHub_D0Entry(*(_QWORD *)(v6 + 120));
  v13 = v23;
  if ( v23 < 0 )
  {
    v34 = 74;
    LODWORD(v35) = v23;
    goto LABEL_54;
  }
  *(_DWORD *)(v6 + 288) = 1;
  if ( v4 == 1 )
  {
    v24 = *(_QWORD *)(v6 + 8);
    v38 = 0LL;
    v37 = 12;
    ((void (__fastcall *)(void *, __int64, int *))qword_1C0044738)(WPP_MAIN_CB.Dpc.SystemArgument2, v24, &v37);
  }
LABEL_26:
  if ( v13 < 0 )
    goto LABEL_34;
  if ( *(_DWORD *)(v6 + 308) <= 2u )
    *(_DWORD *)(v6 + 308) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v6);
LABEL_30:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqq(
      v25,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v26,
      *(_QWORD *)(v6 + 8),
      a2,
      v9,
      v13);
  return (unsigned int)v13;
}
