/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C0011B24
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001D0A0 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0011FBC (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0012270 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0013270 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C0013394 (WPP_RECORDER_SF_qLLdd.c)
 *     WPP_RECORDER_SF_qxx @ 0x1C0013A3C (WPP_RECORDER_SF_qxx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C003272C (Etw_CommandCompleteError.c)
 *     Template_ppbqc @ 0x1C003315C (Template_ppbqc.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 **result; // rax
  KSPIN_LOCK *v6; // r12
  KIRQL v7; // al
  int v8; // r8d
  int v9; // r9d
  __int64 ****v10; // r14
  __int64 ****v11; // rdi
  KIRQL v12; // r13
  __int64 v13; // r15
  __int64 ***v14; // rdi
  int v15; // ecx
  __int64 **v16; // rcx
  __int64 ****v17; // rax
  __int64 ***v18; // rax
  __int64 **v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  __int64 *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, __int64 *); // rax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  int v29; // [rsp+20h] [rbp-40h]
  __int64 *v30; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v31; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v31 = &v30;
  v30 = (__int64 *)&v30;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  v6 = (KSPIN_LOCK *)(a1 + 128);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v10 = (__int64 ****)(a1 + 88);
  v11 = *(__int64 *****)(a1 + 88);
  v12 = v7;
  while ( v11 != v10 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 24LL) + 16LL * *((unsigned int *)v11 + 5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qxx(*(_QWORD *)(a1 + 16), 0, v8, v9, v29, (char)v11, v13, *(_QWORD *)a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 16), 5u, 6u, 0x2Bu, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
    if ( *(_QWORD *)a2 == v13 )
    {
      *((_DWORD *)v11 + 4) = 2;
      *((_BYTE *)v11 + 68) = *(_BYTE *)(a2 + 11);
      *((_DWORD *)v11 + 18) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
      if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
        *((_BYTE *)v11 + 69) = *(_BYTE *)(a2 + 15);
      if ( (*((_BYTE *)v11 + 70) & 2) != 0 )
        *(_OWORD *)(v11 + 3) = *(_OWORD *)a2;
      break;
    }
    v11 = (__int64 ****)*v11;
  }
  v14 = *v10;
  if ( *v10 != (__int64 ***)v10 )
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
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
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
      v18 = (__int64 ***)v31;
      *v14 = &v30;
      v14[1] = (__int64 **)v18;
      if ( *v18 != &v30 )
        __fastfail(3u);
      *v18 = (__int64 **)v14;
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
      v14 = *v10;
      if ( *v10 == (__int64 ***)v10 )
        goto LABEL_38;
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
LABEL_38:
  if ( *v10 == (__int64 ***)v10 )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 6u, 0x2Fu, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 6u, 0x2Eu, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
      (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  KeReleaseSpinLock(v6, v12);
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
        (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
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
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 0x20) != 0 )
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
