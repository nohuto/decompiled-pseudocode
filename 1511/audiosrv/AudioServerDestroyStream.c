/*
 * XREFs of AudioServerDestroyStream @ 0x1800386C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180022060 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerDestroyStream(CVADServer *this, __int64 a2)
{
  __int64 (__fastcall *v4)(CVADServer *, __int64); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  HANDLE Timer; // [rsp+50h] [rbp+8h] BYREF

  Timer = 0LL;
  if ( g_AudioSrvWatchDogTimerInMs >= 0x3E8 )
    CreateTimerQueueTimer(
      &Timer,
      0LL,
      CWatchDogTimer::TimerCallback,
      L"AudioServerDestroyStream",
      g_AudioSrvWatchDogTimerInMs,
      0,
      0x20u);
  v4 = *(__int64 (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)this + 80LL);
  if ( v4 == CVADServer::DestroyStream )
    v5 = CVADServer::DestroyStream(this, a2);
  else
    v5 = v4(this, a2);
  v6 = v5;
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      85LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)v5);
  }
  if ( Timer )
    DeleteTimerQueueTimer(0LL, Timer, 0LL);
  return v6;
}
