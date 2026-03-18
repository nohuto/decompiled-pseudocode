/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C000F3C0
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C001B9B4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C001BC70 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001CC74 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C001CD98 (WPP_RECORDER_SF_qLLdd.c)
 *     WPP_RECORDER_SF_qxx @ 0x1C001D440 (WPP_RECORDER_SF_qxx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0033BFC (Etw_CommandCompleteError.c)
 *     Template_ppbqc @ 0x1C003464C (Template_ppbqc.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 **result; // rax
  KIRQL v6; // al
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 *v10; // rdi
  __int64 *v11; // r14
  KIRQL v12; // r12
  __int64 v13; // rsi
  __int64 ***v14; // rdi
  int v15; // ecx
  __int64 **v16; // rcx
  __int64 ****v17; // rax
  _QWORD *v18; // rax
  __int64 **v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  __int64 *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, __int64 *); // rax
  __int64 v27; // rcx
  unsigned int v28; // esi
  int v29; // [rsp+20h] [rbp-68h]
  __int64 *v30; // [rsp+50h] [rbp-38h] BYREF
  __int64 **v31; // [rsp+58h] [rbp-30h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v31 = &v30;
  v30 = (__int64 *)&v30;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v10 = *(__int64 **)(a1 + 88);
  v11 = (__int64 *)(a1 + 88);
  v12 = v6;
  if ( v10 != (__int64 *)(a1 + 88) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL) + 16LL * *((unsigned int *)v10 + 5);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qxx(*(_QWORD *)(a1 + 16), v7, v8, v9, v29, (char)v10, v13, *(_QWORD *)a2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1 + 16),
          5u,
          6u,
          0x2Bu,
          (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
      if ( *(_QWORD *)a2 == v13 )
        break;
      v10 = (__int64 *)*v10;
      if ( v10 == v11 )
        goto LABEL_15;
    }
    *((_DWORD *)v10 + 4) = 2;
    *((_BYTE *)v10 + 68) = *(_BYTE *)(a2 + 11);
    *((_DWORD *)v10 + 18) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
    if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
      *((_BYTE *)v10 + 69) = *(_BYTE *)(a2 + 15);
    if ( (*((_BYTE *)v10 + 70) & 2) != 0 )
      *(_OWORD *)(v10 + 3) = *(_OWORD *)a2;
  }
LABEL_15:
  v14 = (__int64 ***)*v11;
  if ( (__int64 *)*v11 != v11 )
  {
    while ( *((_DWORD *)v14 + 4) == 2 )
    {
      v15 = ++*(_DWORD *)(a1 + 72);
      if ( v15 == *(_DWORD *)(a1 + 64) )
        v15 = 0;
      *(_DWORD *)(a1 + 72) = v15;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1 + 16),
          5u,
          6u,
          0x2Cu,
          (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
      WPP_RECORDER_SF_qLLdd(
        *(_QWORD *)(a1 + 16),
        *(unsigned __int8 *)(a2 + 15),
        *(_DWORD *)(a2 + 12) & 1,
        v9,
        v29,
        (char)v14,
        (unsigned __int16)*((_DWORD *)v14 + 9) >> 10,
        *(_BYTE *)(a2 + 11),
        *(_BYTE *)(a2 + 12) & 1,
        *(_BYTE *)(a2 + 15));
      v16 = *v14;
      v17 = (__int64 ****)v14[1];
      if ( (*v14)[1] != (__int64 *)v14 || *v17 != v14 )
        __fastfail(3u);
      *v17 = (__int64 ***)v16;
      v16[1] = (__int64 *)v17;
      v18 = v31;
      if ( *v31 != (__int64 *)&v30 )
        __fastfail(3u);
      v14[1] = v31;
      *v14 = &v30;
      *v18 = v14;
      v19 = (__int64 **)(a1 + 104);
      v31 = (__int64 **)v14;
      if ( *v19 != (__int64 *)v19 )
      {
        v20 = **v19;
        if ( (__int64 **)(*v19)[1] != v19 || *(__int64 **)(v20 + 8) != *v19 )
          __fastfail(3u);
        *v19 = (__int64 *)v20;
        *(_QWORD *)(v20 + 8) = v19;
        Command_InternalSendCommand(a1);
      }
      v14 = (__int64 ***)*v11;
      if ( (__int64 *)*v11 == v11 )
        goto LABEL_36;
    }
    if ( v30 == (__int64 *)&v30 && !*(_BYTE *)(a1 + 136) )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(a1 + 8),
        0,
        0,
        0x10000,
        (__int64)"Controller completed a command out of order",
        *(_QWORD *)(a1 + 80) + 16LL * *(unsigned int *)(a1 + 72),
        a2);
      Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL);
      *(_BYTE *)(a1 + 136) = 1;
    }
  }
LABEL_36:
  if ( (__int64 *)*v11 == v11 )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 6u, 0x2Fu, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 6u, 0x2Eu, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v12);
  while ( 1 )
  {
    v23 = v30;
    result = &v30;
    if ( v30 == (__int64 *)&v30 )
      break;
    v24 = (__int64 *)*v30;
    if ( (__int64 **)v30[1] != &v30 || (__int64 *)v24[1] != v30 )
      __fastfail(3u);
    v30 = (__int64 *)*v30;
    v24[1] = (__int64)&v30;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
    if ( v25 )
    {
      v26 = *(void (__fastcall **)(__int64, __int64 *))(v25 + 24);
      if ( v26 )
        v26(v25, v23);
    }
    v27 = (unsigned int)*((unsigned __int8 *)v23 + 68) - 1;
    if ( *((_BYTE *)v23 + 68) == 1 )
    {
      v28 = 0;
    }
    else if ( *((_BYTE *)v23 + 68) == 25 )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v21,
        6,
        48,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
        (char)v23,
        (unsigned __int8)HIBYTE(*((_WORD *)v23 + 18)) >> 2);
      v28 = 2;
    }
    else
    {
      v28 = 1;
    }
    if ( *((_BYTE *)v23 + 68) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
        Template_ppbqc(
          v27,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v22,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v23,
          (__int64)(v23 + 3),
          v28,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v27, a1, v23, v28);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23[6])(v23, v28, a2);
  }
  return result;
}
