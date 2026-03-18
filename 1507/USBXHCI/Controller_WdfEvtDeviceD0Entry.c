/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0004300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0001410 (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C0001460 (DeviceSlot_D0EntryCleanupState.c)
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00026A0 (Interrupter_InterrupterRegisterIntialize.c)
 *     RootHub_D0Entry @ 0x1C0002980 (RootHub_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Register_BiosHandoff @ 0x1C0003A68 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0003D74 (Register_SetClearSSICPortUnused.c)
 *     DeviceSlot_Initialize @ 0x1C00041A8 (DeviceSlot_Initialize.c)
 *     Command_Initialize @ 0x1C000420C (Command_Initialize.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0004990 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004E50 (WPP_RECORDER_SF_qLL.c)
 *     Register_D0Entry @ 0x1C0004F38 (Register_D0Entry.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0013270 (WPP_RECORDER_SF_qL.c)
 *     Controller_D0EntryRestoreState @ 0x1C0014854 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 *     Template_pqqh @ 0x1C00168D4 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0016960 (Template_pqqq.c)
 *     Interrupter_D0Entry @ 0x1C001CE50 (Interrupter_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001E0AC (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0047000 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004E4AC (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // si
  __int64 v5; // rdi
  char v6; // al
  int v7; // edx
  int v8; // r8d
  char v9; // bp
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // r9
  unsigned int v18; // r13d
  void *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  int v24; // edx
  unsigned __int16 v25; // r9
  __int64 v26; // r15
  unsigned int i; // r14d
  __int64 v28; // rbp
  __int64 *v29; // rsi
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rbx
  int v34; // edx
  int v35; // eax
  char v36; // si
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  __int64 v41; // [rsp+28h] [rbp-60h]
  char v42; // [rsp+40h] [rbp-48h]
  char v43; // [rsp+44h] [rbp-44h]
  int v44; // [rsp+48h] [rbp-40h] BYREF
  __int64 v45; // [rsp+4Ch] [rbp-3Ch]

  v42 = 0;
  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3104))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v9 = v6;
  v43 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v5 + 348),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v8,
      *(_QWORD *)(v5 + 8),
      a2,
      v6,
      *(_BYTE *)(v5 + 348));
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v5 + 64),
    v7,
    3,
    60,
    (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v5 + 300));
  if ( **(_DWORD **)(*(_QWORD *)(v5 + 80) + 24LL) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 64), 2u, 3u, 0x3Du, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    v4 = 1;
    v11 = -1073741823;
LABEL_5:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v5 + 104));
    v13 = v5;
    if ( v4 )
    {
      LOBYTE(v12) = 1;
    }
    else
    {
      Controller_ReportFatalError(v5, 0, 4124, 0, 0LL, 0LL);
      v12 = 0LL;
      v13 = v5;
    }
    Controller_SetControllerGone(v13, v12);
    goto LABEL_63;
  }
  if ( *(_DWORD *)(v5 + 300) == 2 )
  {
    v14 = *(_QWORD *)(v5 + 304);
    if ( v14 && *(_DWORD *)(v14 + 576) == 4 )
    {
      v15 = Register_ControllerStop(*(_QWORD *)(v5 + 80));
      if ( v15 < 0 )
      {
        LODWORD(v41) = v15;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 64),
          2u,
          3u,
          0x3Eu,
          (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
          v41);
      }
    }
    else
    {
      v16 = Register_BiosHandoff(*(_QWORD **)(v5 + 80));
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 63;
        goto LABEL_16;
      }
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 104), a2);
    v16 = Register_ControllerReset(*(_QWORD *)(v5 + 80), 0);
    v11 = v16;
    if ( v16 < 0 )
    {
      v17 = 64;
LABEL_16:
      LODWORD(v41) = v16;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 64),
        2u,
        3u,
        v17,
        (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
        v41);
      goto LABEL_57;
    }
    v42 = 1;
  }
  if ( !*(_BYTE *)(v5 + 320) )
  {
    *(_DWORD *)(v5 + 324) = KeQueryTimeIncrement();
    v10 = _InterlockedExchange64(
            (volatile __int64 *)(v5 + 312),
            ((unsigned __int64)(((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 80) + 40LL) + 1) >> 3) & 0x7FF) >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 324) / 10000LL - (((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 80) + 40LL) + 1) >> 3) & 0x7FF)) << 21));
    *(_BYTE *)(v5 + 320) = 1;
  }
  LOBYTE(v10) = 1;
  Controller_ExecuteDSMForHSICDisconnectInU3(v5, v10);
  v18 = 1;
  while ( 1 )
  {
    v19 = &WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids;
    if ( v18 == 2 || (*(_QWORD *)(v5 + 232) & 2) != 0 || *(_BYTE *)(v5 + 284) || a2 == 5 || *(_DWORD *)(v5 + 300) == 2 )
    {
      v26 = *(_QWORD *)(v5 + 96);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v19) = 5;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(*(_QWORD *)(v26 + 8) + 64LL),
          (_DWORD)v19,
          8,
          25,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          v26,
          a2);
      }
      if ( Controller_IsControllerAccessible(*(_QWORD *)(v26 + 8)) )
      {
        for ( i = 0; i < *(_DWORD *)(v26 + 24); *(_DWORD *)(v28 + 136) = 0 )
        {
          v28 = *(_QWORD *)(*(_QWORD *)(v26 + 32) + 8LL * i);
          v29 = (__int64 *)(v28 + 168);
          v30 = *(__int64 **)(v28 + 168);
          if ( v30 != (__int64 *)(v28 + 168) )
          {
            do
            {
              memset((void *)v30[2], 0, *((unsigned int *)v30 + 10));
              v30 = (__int64 *)*v30;
            }
            while ( v30 != v29 );
          }
          v31 = *v29;
          *(_QWORD *)(v28 + 152) = *v29;
          ++i;
          *(_QWORD *)(v28 + 144) = *(_QWORD *)(v31 + 16);
          *(_QWORD *)(v28 + 128) = 1LL;
        }
        Interrupter_InterrupterRegisterIntialize(v26);
      }
    }
    else
    {
      Register_SetClearSSICPortUnused(*(_QWORD *)(v5 + 80), 0);
      LOBYTE(v20) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v21, v20);
      LOBYTE(v22) = 1;
      v23 = Interrupter_D0Entry(*(_QWORD *)(v5 + 96), a2, v22);
      v11 = v23;
      if ( v23 < 0 )
      {
        v25 = 65;
LABEL_28:
        LODWORD(v41) = v23;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 64),
          2u,
          3u,
          v25,
          (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
          v41);
        goto LABEL_56;
      }
    }
    v32 = *(_QWORD *)(v5 + 104);
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v32 + 8) + 64LL),
      v24,
      9,
      17,
      (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
      v32,
      a2);
    DeviceSlot_Initialize(v32);
    v33 = *(_QWORD *)(v5 + 112);
    LOBYTE(v34) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v33 + 16),
      v34,
      6,
      17,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v33,
      a2);
    Command_Initialize(v33);
    if ( v18 == 2 || a2 == 5 || *(_DWORD *)(v5 + 300) == 2 )
      break;
    if ( (*(_QWORD *)(v5 + 232) & 2) != 0 || *(_BYTE *)(v5 + 284) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 64), 4u, 3u, 0x45u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    }
    else
    {
      v35 = Controller_D0EntryRestoreState(v5);
      if ( v35 >= 0 )
        break;
      LODWORD(v41) = v35;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 64),
        4u,
        3u,
        0x44u,
        (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
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
    v23 = Register_ControllerReset(*(_QWORD *)(v5 + 80), 0);
    v11 = v23;
    if ( v23 < 0 )
    {
      v25 = 70;
      goto LABEL_28;
    }
    ++v18;
    v36 = 1;
    v42 = 1;
    if ( v18 > 2 )
      goto LABEL_50;
  }
  v36 = v42;
LABEL_50:
  v23 = Register_D0Entry(*(_QWORD *)(v5 + 80));
  v11 = v23;
  if ( v23 < 0 )
  {
    v25 = 71;
    goto LABEL_28;
  }
  v23 = RootHub_D0Entry(*(_QWORD *)(v5 + 120));
  v11 = v23;
  if ( v23 < 0 )
  {
    v25 = 72;
    goto LABEL_28;
  }
  *(_DWORD *)(v5 + 280) = 1;
  if ( v36 == 1 )
  {
    v37 = *(_QWORD *)(v5 + 8);
    v45 = 0LL;
    v44 = 12;
    ((void (__fastcall *)(__int64, __int64, int *))qword_1C0041518)(UcxGlobals, v37, &v44);
  }
LABEL_56:
  v9 = v43;
  v4 = 0;
LABEL_57:
  if ( v11 < 0 )
    goto LABEL_5;
  if ( *(_DWORD *)(v5 + 300) <= 2u )
    *(_DWORD *)(v5 + 300) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
LABEL_63:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqq(
      v38,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE,
      v39,
      *(_QWORD *)(v5 + 8),
      a2,
      v9,
      v11);
  return (unsigned int)v11;
}
