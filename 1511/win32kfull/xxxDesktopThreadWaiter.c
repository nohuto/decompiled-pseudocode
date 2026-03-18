/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C0057424
 * Callers:
 *     xxxDesktopThread @ 0x1C00CFAE0 (xxxDesktopThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxUpdateInputHangInfo @ 0x1C005ADE0 (xxxUpdateInputHangInfo.c)
 *     zzzWakeInputIdle @ 0x1C005BC10 (zzzWakeInputIdle.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00815B4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     SleepInputIdle @ 0x1C00ECC2C (SleepInputIdle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(unsigned int a1, PVOID *a2, __int64 a3, struct _KWAIT_BLOCK *a4)
{
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS i; // eax
  __int64 v12; // rdx
  unsigned int v13; // esi

  v7 = a1;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 15615;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
  a2[v7] = *(PVOID *)(gptiCurrent + 648LL);
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) & 0x1CFF) != 0 )
  {
    v13 = v7;
LABEL_14:
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 0;
    return v13;
  }
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x400) == 0
    || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0LL, 0LL, 0LL);
    }
    xxxUpdateInputHangInfo(0LL, 0LL);
    zzzWakeInputIdle(gptiCurrent);
    UserSessionSwitchLeaveCrit(v10, v9);
    for ( i = KeWaitForMultipleObjects(v7 + 1, a2, WaitAny, WrUserRequest, 1, 0, 0LL, a4);
          ;
          i = KeWaitForMultipleObjects(v7 + 1, a2, WaitAny, WrUserRequest, 1, 0, 0LL, a4) )
    {
      v13 = i;
      EnterCrit(0LL, 1LL);
      xxxUpdateInputHangInfo(0LL, 1LL);
      if ( v13 || !a3 )
        break;
      _guard_dispatch_icall_fptr();
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 15615;
      UserSessionSwitchLeaveCrit(15615LL, v12);
    }
    if ( v13 == (_DWORD)v7 )
      SleepInputIdle(gptiCurrent);
    goto LABEL_14;
  }
  return result;
}
