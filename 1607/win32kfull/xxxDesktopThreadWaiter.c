/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C007F06C
 * Callers:
 *     xxxDesktopThread @ 0x1C00DF620 (xxxDesktopThread.c)
 * Callees:
 *     xxxUpdateInputHangInfo @ 0x1C0082870 (xxxUpdateInputHangInfo.c)
 *     zzzWakeInputIdle @ 0x1C0083110 (zzzWakeInputIdle.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A8094 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     SleepInputIdle @ 0x1C010BCF0 (SleepInputIdle.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(unsigned int a1, PVOID *a2, __int64 a3, struct _KWAIT_BLOCK *a4)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 result; // rax

  v6 = a1;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 15615;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 648LL));
  a2[v6] = *(PVOID *)(gptiCurrent + 648LL);
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) & 0x1CFF) != 0 )
  {
    v8 = v6;
LABEL_7:
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 0;
    return v8;
  }
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x400) == 0
    || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0LL, 0LL, 0LL, 11LL);
    }
    xxxUpdateInputHangInfo(0LL, 0LL);
    zzzWakeInputIdle(gptiCurrent);
    if ( gdwInAtomicOperation )
    {
      v7 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation);
    v8 = KeWaitForMultipleObjects(v6 + 1, a2, WaitAny, WrUserRequest, 1, 0, 0LL, a4);
    EnterCrit(0LL, 1LL);
    xxxUpdateInputHangInfo(0LL, 1LL);
    if ( v8 == (_DWORD)v6 )
      SleepInputIdle(gptiCurrent);
    goto LABEL_7;
  }
  return result;
}
