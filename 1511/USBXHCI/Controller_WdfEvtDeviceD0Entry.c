/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0007640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C0004D34 (Register_ControllerStop.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C00053A8 (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0005400 (DeviceSlot_DisableAllDeviceSlots.c)
 *     Interrupter_D0Entry @ 0x1C0005800 (Interrupter_D0Entry.c)
 *     RootHub_D0Entry @ 0x1C0005BD0 (RootHub_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     DeviceSlot_Initialize @ 0x1C0006FC4 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C0007028 (Command_Initialize.c)
 *     Register_BiosHandoff @ 0x1C00070E4 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00071C0 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0007620 (Register_SetClearSSICPortUnused.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00079B0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0007E70 (WPP_RECORDER_SF_qLL.c)
 *     Register_D0Entry @ 0x1C0007F58 (Register_D0Entry.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_D0EntryRestoreState @ 0x1C001DEA4 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 *     Template_pqqh @ 0x1C001FFA4 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0020030 (Template_pqqq.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C002668C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0048000 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004801C (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, int a2)
{
  char v4; // r14
  char v5; // r12
  __int64 v6; // rbx
  char v7; // al
  int v8; // edx
  int v9; // r8d
  char v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ebp
  bool v17; // zf
  char v18; // r8
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rdi
  int v22; // edx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r9
  int v33; // eax
  int v34; // eax
  unsigned __int16 v35; // r9
  __int64 v36; // [rsp+28h] [rbp-60h]
  int v37; // [rsp+40h] [rbp-48h] BYREF
  __int64 v38; // [rsp+44h] [rbp-44h]

  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v10 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v6 + 348),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v9,
      *(_QWORD *)(v6 + 8),
      a2,
      v7,
      *(_BYTE *)(v6 + 348));
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v6 + 64),
    v8,
    3,
    62,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v6 + 300));
  if ( **(_DWORD **)(*(_QWORD *)(v6 + 80) + 24LL) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 64), 2u, 3u, 0x3Fu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
    v5 = 1;
    v14 = -1073741823;
LABEL_34:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v6 + 104));
    v30 = v6;
    if ( v5 )
    {
      LOBYTE(v29) = 1;
    }
    else
    {
      Controller_ReportFatalError(v6, 0, 4124, 0, 0LL, 0LL);
      v29 = 0LL;
      v30 = v6;
    }
    Controller_SetControllerGone(v30, v29);
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v6 + 300) == 2 )
  {
    v12 = *(_QWORD *)(v6 + 304);
    if ( v12 && *(_DWORD *)(v12 + 576) == 4 )
    {
      v31 = Register_ControllerStop(*(_QWORD *)(v6 + 80));
      if ( v31 < 0 )
      {
        LODWORD(v36) = v31;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 64),
          2u,
          3u,
          0x40u,
          (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
          v36);
      }
    }
    else
    {
      v13 = Register_BiosHandoff(*(_QWORD **)(v6 + 80));
      v14 = v13;
      if ( v13 < 0 )
      {
        LODWORD(v36) = v13;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 64),
          2u,
          3u,
          0x41u,
          (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
          v36);
        goto LABEL_26;
      }
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v6 + 104), a2);
    v15 = Register_ControllerReset(*(_QWORD *)(v6 + 80), 0);
    v14 = v15;
    if ( v15 < 0 )
    {
      LODWORD(v36) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        3u,
        0x42u,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v36);
      goto LABEL_26;
    }
    v4 = 1;
  }
  if ( !*(_BYTE *)(v6 + 320) )
  {
    *(_DWORD *)(v6 + 324) = KeQueryTimeIncrement();
    v11 = _InterlockedExchange64(
            (volatile __int64 *)(v6 + 312),
            ((unsigned __int64)(((unsigned int)(**(_DWORD **)(*(_QWORD *)(v6 + 80) + 40LL) + 1) >> 3) & 0x7FF) >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v6 + 324) / 10000LL - (((unsigned int)(**(_DWORD **)(*(_QWORD *)(v6 + 80) + 40LL) + 1) >> 3) & 0x7FF)) << 21));
    *(_BYTE *)(v6 + 320) = 1;
  }
  LOBYTE(v11) = 1;
  Controller_ExecuteDSMForHSICDisconnectInU3(v6, v11);
  v16 = 1;
  v17 = 0;
  do
  {
    if ( v17 || (*(_QWORD *)(v6 + 232) & 2) != 0 || a2 == 5 || *(_BYTE *)(v6 + 284) || *(_DWORD *)(v6 + 300) == 2 )
    {
      v18 = 0;
    }
    else
    {
      Register_SetClearSSICPortUnused(*(_QWORD *)(v6 + 80), 0);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v32);
      v18 = 1;
    }
    v14 = Interrupter_D0Entry(*(_QWORD *)(v6 + 96), a2, v18);
    if ( v14 < 0 )
    {
      v35 = 67;
      LODWORD(v36) = v14;
      goto LABEL_54;
    }
    v20 = *(_QWORD *)(v6 + 104);
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v20 + 8) + 64LL),
      v19,
      9,
      17,
      (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
      v20,
      a2);
    DeviceSlot_Initialize(v20);
    v21 = *(_QWORD *)(v6 + 112);
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v21 + 16),
      v22,
      6,
      17,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v21,
      a2);
    Command_Initialize(v21);
    if ( a2 == 5 || v16 == 2 || *(_DWORD *)(v6 + 300) == 2 )
      break;
    if ( (*(_QWORD *)(v6 + 232) & 2) != 0 || *(_BYTE *)(v6 + 284) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 64), 4u, 3u, 0x47u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
    }
    else
    {
      v33 = Controller_D0EntryRestoreState(v6);
      if ( v33 >= 0 )
        break;
      LODWORD(v36) = v33;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        4u,
        3u,
        0x46u,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v36);
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
    v34 = Register_ControllerReset(*(_QWORD *)(v6 + 80), 0);
    v14 = v34;
    if ( v34 < 0 )
    {
      LODWORD(v36) = v34;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        3u,
        0x48u,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v36);
      goto LABEL_26;
    }
    ++v16;
    v4 = 1;
    v17 = v16 == 2;
  }
  while ( v16 <= 2 );
  v23 = Register_D0Entry(*(_QWORD *)(v6 + 80));
  v14 = v23;
  if ( v23 < 0 )
  {
    v35 = 73;
    LODWORD(v36) = v23;
LABEL_54:
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 64), 2u, 3u, v35, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v36);
    goto LABEL_26;
  }
  v24 = RootHub_D0Entry(*(_QWORD *)(v6 + 120));
  v14 = v24;
  if ( v24 < 0 )
  {
    v35 = 74;
    LODWORD(v36) = v24;
    goto LABEL_54;
  }
  *(_DWORD *)(v6 + 280) = 1;
  if ( v4 == 1 )
  {
    v25 = *(_QWORD *)(v6 + 8);
    v38 = 0LL;
    v37 = 12;
    ((void (__fastcall *)(void *, __int64, int *))qword_1C0042758)(WPP_MAIN_CB.Dpc.DpcData, v25, &v37);
  }
LABEL_26:
  if ( v14 < 0 )
    goto LABEL_34;
  if ( *(_DWORD *)(v6 + 300) <= 2u )
    *(_DWORD *)(v6 + 300) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v6);
LABEL_30:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqq(
      v26,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v27,
      *(_QWORD *)(v6 + 8),
      a2,
      v10,
      v14);
  return (unsigned int)v14;
}
