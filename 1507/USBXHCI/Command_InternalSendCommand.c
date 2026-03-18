/*
 * XREFs of Command_InternalSendCommand @ 0x1C0012270
 * Callers:
 *     Command_ControllerResetPostResetSuccess @ 0x1C00118C8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0011B24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0011FBC (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C001278C (Command_SendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00128A0 (Command_WdfEvtTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C00135AC (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C0013698 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C00137A4 (WPP_RECORDER_SF_qdqddd.c)
 *     Etw_CommandWaitlisted @ 0x1C0032774 (Etw_CommandWaitlisted.c)
 *     Template_ppb @ 0x1C003303C (Template_ppb.c)
 */

_QWORD *__fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *result; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // r8d
  int v14; // r10d
  int v15; // edx
  _QWORD *v16; // rax
  bool v17; // bp
  __int64 v18; // rcx
  BOOL v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+38h] [rbp-30h]

  v5 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    Etw_CommandWaitlisted(v5, a1, a2, 4LL);
    result = *(_QWORD **)(a1 + 112);
    v8 = a1 + 104;
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = result;
    if ( *result != v8 )
      __fastfail(3u);
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 137) )
  {
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      49,
      v23,
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      *(_QWORD *)(a2 + 56));
    Etw_CommandWaitlisted(v6, a1, a2, 3LL);
    result = *(_QWORD **)(a1 + 112);
    v8 = a1 + 104;
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = result;
    if ( *result != v8 )
      __fastfail(3u);
LABEL_34:
    *result = a2;
    *(_QWORD *)(v8 + 8) = a2;
    return result;
  }
  if ( (_DWORD)v5 == 4 )
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 48))(a2, 3LL, 0LL);
  v9 = (_QWORD *)(a1 + 88);
  if ( (_QWORD *)*v9 != v9 && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x80000000LL) != 0 )
  {
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      50,
      v23,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
      *(_QWORD *)(a2 + 56));
    Etw_CommandWaitlisted(v10, a1, a2, 2LL);
    result = *(_QWORD **)(a1 + 112);
    v8 = a1 + 104;
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = result;
    if ( *result != v8 )
      __fastfail(3u);
    goto LABEL_34;
  }
  WPP_RECORDER_SF_qLq(
    *(_QWORD *)(a1 + 16),
    a2,
    a3,
    51,
    v23,
    a2,
    (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
    *(_QWORD *)(a2 + 56));
  *(_DWORD *)(a2 + 64) = 10;
  v13 = *(_DWORD *)(a1 + 68);
  v14 = *(_DWORD *)(a1 + 72);
  v15 = v13 + 1;
  if ( v13 + 1 == *(_DWORD *)(a1 + 64) )
    v15 = 0;
  if ( v15 == v14 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v15, v13, v12, v23, a2, v13, v14, v15);
    *(_DWORD *)(a2 + 16) = 0;
    Etw_CommandWaitlisted(v11, a1, a2, 1LL);
    result = *(_QWORD **)(a1 + 112);
    v8 = a1 + 104;
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = result;
    if ( *result != v8 )
      __fastfail(3u);
    goto LABEL_34;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v15,
      v13,
      v12,
      v23,
      a2,
      v13,
      *(_BYTE *)(a1 + 80) + 16 * v13,
      v14,
      *(_DWORD *)(a1 + 76),
      v15);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 0x20) != 0 )
    Template_ppb(v11, v15, v13, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) ^= (*(_DWORD *)(a2 + 36) ^ (*(_DWORD *)(a1 + 76) != 1)) & 1;
  *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * *(unsigned int *)(a1 + 68)) = *(_OWORD *)(a2 + 24);
  *(_BYTE *)(*(_QWORD *)(a1 + 80) + 16LL * *(unsigned int *)(a1 + 68) + 12) ^= 1u;
  _InterlockedOr(v22, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 68);
  v16 = *(_QWORD **)(a1 + 96);
  v17 = *v9 == (_QWORD)v9;
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 8) = v16;
  if ( (_QWORD *)*v16 != v9 )
    __fastfail(3u);
  *v16 = a2;
  *(_QWORD *)(a1 + 96) = a2;
  ++*(_DWORD *)(a1 + 68);
  v18 = *(unsigned int *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 68) == (_DWORD)v18 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 80) + 16 * v18 + 12) ^= 1u;
    _InterlockedOr(v22, 0);
    v19 = *(_DWORD *)(a1 + 76) != 1;
    *(_DWORD *)(a1 + 76) = v19;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v20 = *(_DWORD *)(a1 + 64);
      LODWORD(v26) = v19;
      v21 = *(_QWORD *)(a1 + 16);
      LODWORD(v25) = v20;
      LODWORD(v24) = *(_DWORD *)(a1 + 68);
      WPP_RECORDER_SF_ddd(v21, 5u, 6u, 0x36u, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids, v24, v25, v26);
    }
    *(_DWORD *)(a1 + 68) = 0;
  }
  result = *(_QWORD **)(a1 + 48);
  *(_DWORD *)result = 0;
  _InterlockedOr(v22, 0);
  if ( v17 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 6u, 0x37u, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
    return (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
                       WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                       *(_QWORD *)(a1 + 24),
                       -10000000LL);
  }
  return result;
}
