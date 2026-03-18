/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0005290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0003CD0 (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C0003D1C (DeviceSlot_D0EntryCleanupState.c)
 *     Register_ControllerStop @ 0x1C0004194 (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C000505C (Register_D0Entry.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005110 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00057C0 (Interrupter_InterrupterRegisterIntialize.c)
 *     DeviceSlot_Initialize @ 0x1C0005F04 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C0005F78 (Command_Initialize.c)
 *     Register_BiosHandoff @ 0x1C0006044 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0006120 (Register_ControllerReset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     RootHub_D0Entry @ 0x1C0006460 (RootHub_D0Entry.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000804C (Register_SetClearSSICPortUnused.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0018F9C (WPP_RECORDER_SF_qL.c)
 *     Controller_D0EntryRestoreState @ 0x1C001A6AC (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 *     Template_pqqh @ 0x1C001C894 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C001C928 (Template_pqqq.c)
 *     Interrupter_D0Entry @ 0x1C0022B84 (Interrupter_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0023180 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004C008 (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C004C028 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C005325C (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // bp
  __int64 v5; // rdi
  char v6; // al
  int v7; // r8d
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ebp
  void *v16; // rdx
  __int64 v17; // r14
  int v18; // edx
  unsigned int v19; // r15d
  __int64 v20; // rbp
  __int64 *v21; // rsi
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  int v26; // edx
  char v27; // si
  int v28; // eax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // edx
  int v37; // r9d
  __int64 v38; // r9
  __int64 v39; // r8
  int v40; // r9d
  int v41; // eax
  int v42; // edx
  __int64 v43; // [rsp+30h] [rbp-68h]
  char v44; // [rsp+40h] [rbp-58h]
  char v45; // [rsp+44h] [rbp-54h]
  int v46; // [rsp+48h] [rbp-50h]
  int v47; // [rsp+50h] [rbp-48h] BYREF
  __int64 v48; // [rsp+54h] [rbp-44h]

  v44 = 0;
  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v8 = v6;
  v45 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v5 + 356),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v7,
      *(_QWORD *)(v5 + 8),
      a2,
      v6,
      *(_BYTE *)(v5 + 356));
  LODWORD(v43) = a2;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v5 + 64),
    4u,
    3u,
    0x3Eu,
    (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
    a1,
    v43,
    *(_DWORD *)(v5 + 308));
  if ( **(_DWORD **)(*(_QWORD *)(v5 + 80) + 24LL) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 64), 2u, 3u, 0x3Fu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    v4 = 1;
    v12 = -1073741823;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v5 + 308) != 2 )
    goto LABEL_9;
  v10 = *(_QWORD *)(v5 + 312);
  if ( v10 && *(_DWORD *)(v10 + 584) == 4 )
  {
    v35 = Register_ControllerStop(*(_QWORD *)(v5 + 80));
    if ( v35 < 0 )
    {
      LOBYTE(v36) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 64),
        v36,
        3,
        64,
        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
        v35);
    }
  }
  else
  {
    v11 = Register_BiosHandoff(*(_QWORD *)(v5 + 80));
    v12 = v11;
    if ( v11 < 0 )
    {
      v37 = 65;
LABEL_53:
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 64),
        v9,
        3,
        v37,
        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
        v11);
      goto LABEL_35;
    }
  }
  DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 104), a2);
  v11 = Register_ControllerReset(*(_QWORD *)(v5 + 80), 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v37 = 66;
    goto LABEL_53;
  }
  v44 = 1;
LABEL_9:
  if ( !*(_BYTE *)(v5 + 328) )
  {
    *(_DWORD *)(v5 + 332) = KeQueryTimeIncrement();
    v13 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 80) + 40LL) + 1) >> 3) & 0x7FF;
    v9 = _InterlockedExchange64(
           (volatile __int64 *)(v5 + 320),
           (v13 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 332) / 10000LL - v13) << 21));
    *(_BYTE *)(v5 + 328) = 1;
  }
  LOBYTE(v9) = 1;
  Controller_ExecuteDSMForHSICDisconnectInU3(v5, v9);
  if ( (_mm_srli_si128(*(__m128i *)(v5 + 232), 8).m128i_u8[0] & 1) != 0 )
  {
    LOBYTE(v14) = 1;
    Controller_ExecuteKBLPowerTransitionWorkaround(v5, v14);
  }
  v15 = 1;
  v46 = 1;
  while ( 1 )
  {
    v16 = &WPP_d9801d1a90713b0d37c531873c83c241_Traceguids;
    if ( v15 == 2 || (*(_QWORD *)(v5 + 232) & 2) != 0 || a2 == 5 || *(_BYTE *)(v5 + 292) || *(_DWORD *)(v5 + 308) == 2 )
    {
      v17 = *(_QWORD *)(v5 + 96);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v17 + 8) + 64LL),
          (_DWORD)v16,
          8,
          25,
          (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
          v17,
          a2);
      }
      if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(v17 + 8)) )
      {
        v19 = 0;
        if ( *(_DWORD *)(v17 + 24) )
        {
          do
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 8LL * v19);
            v21 = (__int64 *)(v20 + 160);
            v22 = *(__int64 **)(v20 + 160);
            if ( v22 != (__int64 *)(v20 + 160) )
            {
              do
              {
                memset((void *)v22[2], 0, *((unsigned int *)v22 + 10));
                v22 = (__int64 *)*v22;
              }
              while ( v22 != v21 );
            }
            v23 = *v21;
            ++v19;
            *(_QWORD *)(v20 + 144) = *v21;
            *(_QWORD *)(v20 + 136) = *(_QWORD *)(v23 + 16);
            *(_QWORD *)(v20 + 120) = 1LL;
            *(_DWORD *)(v20 + 128) = 0;
          }
          while ( v19 < *(_DWORD *)(v17 + 24) );
          v15 = v46;
        }
        Interrupter_InterrupterRegisterIntialize(v17);
      }
    }
    else
    {
      Register_SetClearSSICPortUnused(*(_QWORD *)(v5 + 80), 0LL);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v38);
      LOBYTE(v39) = 1;
      v28 = Interrupter_D0Entry(*(_QWORD *)(v5 + 96), a2, v39);
      v12 = v28;
      if ( v28 < 0 )
      {
        v40 = 67;
LABEL_65:
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 64),
          v18,
          3,
          v40,
          (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
          v28);
        goto LABEL_34;
      }
    }
    v24 = *(_QWORD *)(v5 + 104);
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v24 + 8) + 64LL),
      v18,
      9,
      17,
      (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
      v24,
      a2);
    DeviceSlot_Initialize(v24);
    v25 = *(_QWORD *)(v5 + 112);
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v25 + 16),
      v26,
      6,
      17,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v25,
      a2);
    Command_Initialize(v25);
    if ( a2 == 5 || v15 == 2 || *(_DWORD *)(v5 + 308) == 2 )
      break;
    if ( (*(_QWORD *)(v5 + 232) & 2) != 0 || *(_BYTE *)(v5 + 292) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 64), 4u, 3u, 0x47u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    }
    else
    {
      v41 = Controller_D0EntryRestoreState(v5);
      if ( v41 >= 0 )
        break;
      LOBYTE(v42) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 64),
        v42,
        3,
        70,
        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
        v41);
      Controller_HwVerifierBreakIfEnabled(
        v5,
        0,
        0,
        0x400000,
        (__int64)"Controller restore state operation failed",
        0LL,
        0LL);
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 104), a2);
    v28 = Register_ControllerReset(*(_QWORD *)(v5 + 80), 0LL);
    v12 = v28;
    if ( v28 < 0 )
    {
      v40 = 72;
      goto LABEL_65;
    }
    ++v15;
    v27 = 1;
    v44 = 1;
    v46 = v15;
    if ( v15 > 2 )
      goto LABEL_30;
  }
  v27 = v44;
LABEL_30:
  v28 = Register_D0Entry(*(_QWORD *)(v5 + 80));
  v12 = v28;
  if ( v28 < 0 )
  {
    v40 = 73;
    goto LABEL_65;
  }
  v28 = RootHub_D0Entry(*(_QWORD *)(v5 + 120));
  v12 = v28;
  if ( v28 < 0 )
  {
    v40 = 74;
    goto LABEL_65;
  }
  *(_DWORD *)(v5 + 288) = 1;
  if ( v27 == 1 )
  {
    v29 = *(_QWORD *)(v5 + 8);
    v48 = 0LL;
    v47 = 12;
    ((void (__fastcall *)(void *, __int64, int *))qword_1C0046738)(WPP_MAIN_CB.Dpc.SystemArgument2, v29, &v47);
  }
LABEL_34:
  v8 = v45;
  v4 = 0;
LABEL_35:
  if ( v12 < 0 )
  {
LABEL_46:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v5 + 104));
    v34 = v5;
    if ( v4 )
    {
      LOBYTE(v33) = 1;
    }
    else
    {
      Controller_ReportFatalError(v5, 0, 4124, 0, 0LL, 0LL);
      v33 = 0LL;
      v34 = v5;
    }
    Controller_SetControllerGone(v34, v33);
    goto LABEL_39;
  }
  if ( *(_DWORD *)(v5 + 308) <= 2u )
    *(_DWORD *)(v5 + 308) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
LABEL_39:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqq(
      v30,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v31,
      *(_QWORD *)(v5 + 8),
      a2,
      v8,
      v12);
  return (unsigned int)v12;
}
