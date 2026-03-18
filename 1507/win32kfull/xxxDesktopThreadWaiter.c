/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C00679D0
 * Callers:
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00465E4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     zzzWakeInputIdle @ 0x1C006B920 (zzzWakeInputIdle.c)
 *     SleepInputIdle @ 0x1C00E5D4C (SleepInputIdle.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = 15615;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 656LL));
  a2[v7] = *(PVOID *)(gptiCurrent + 656LL);
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 4LL) & 0x1CFF) != 0 )
  {
    v13 = v7;
LABEL_14:
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = 0;
    return v13;
  }
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x400) == 0
    || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0, 0LL, 0xBu);
    }
    xxxUpdateInputHangInfo(0LL, 0LL);
    zzzWakeInputIdle(gptiCurrent);
    UserSessionSwitchLeaveCrit(v10, v9);
    for ( i = KeWaitForMultipleObjects(v7 + 1, a2, WaitAny, WrUserRequest, 1, 0, 0LL, a4);
          ;
          i = KeWaitForMultipleObjects(v7 + 1, a2, WaitAny, WrUserRequest, 1, 0, 0LL, a4) )
    {
      v13 = i;
      EnterCrit(1LL);
      xxxUpdateInputHangInfo(0LL, 1LL);
      if ( v13 || !a3 )
        break;
      _guard_dispatch_icall_fptr();
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) = 15615;
      UserSessionSwitchLeaveCrit(15615LL, v12);
    }
    if ( v13 == (_DWORD)v7 )
      SleepInputIdle(gptiCurrent);
    goto LABEL_14;
  }
  return result;
}
