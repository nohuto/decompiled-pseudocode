/*
 * XREFs of AudioServerDestroyStream @ 0x180006100
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x1800097B0 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerDestroyStream(CVADServer *this, unsigned __int64 a2)
{
  DWORD DueTime; // edi
  __int64 (__fastcall *v5)(CVADServer *__hidden, unsigned __int64); // rax
  int v6; // eax
  unsigned int v7; // ebx
  void *phNewTimer[2]; // [rsp+40h] [rbp-28h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-18h]
  const wchar_t *v11; // [rsp+58h] [rbp-10h]

  DueTime = g_AudioSrvWatchDogTimerInMs;
  phNewTimer[0] = 0LL;
  phNewTimer[1] = &dword_1800CA040;
  CurrentThreadId = GetCurrentThreadId();
  v11 = L"AudioServerDestroyStream";
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
  v5 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned __int64))(*(_QWORD *)this + 80LL);
  if ( v5 == CVADServer::DestroyStream )
    v6 = CVADServer::DestroyStream(this, a2);
  else
    v6 = v5(this, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerDestroyStream", 0xC91u, v6);
  if ( phNewTimer[0] )
    DeleteTimerQueueTimer(0LL, phNewTimer[0], (HANDLE)0xFFFFFFFFFFFFFFFFLL);
  return v7;
}
