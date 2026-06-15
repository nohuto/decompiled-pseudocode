/*
 * XREFs of AudioServerInitialize @ 0x18000CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18000D670 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180012110 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017008 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017180 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017320 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x18005FD0C (WPP_SF_dS.c)
 */

__int64 __fastcall AudioServerInitialize(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  DWORD DueTime; // ebx
  CAudioDGProcess *v15; // rcx
  CAudioDGProcess *v16; // rcx
  int v17; // ebx
  DWORD v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  CAudioDGProcess *v22; // rcx
  CAudioDGProcess *v23; // rcx
  CAudioDGProcess *v25; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+68h] [rbp-40h] BYREF
  void *phNewTimer[2]; // [rsp+70h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+80h] [rbp-28h]
  const wchar_t *v29; // [rsp+88h] [rbp-20h]

  DueTime = g_AudioSrvWatchDogTimerInMs;
  phNewTimer[1] = &dword_1800CA040;
  phNewTimer[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v29 = L"AudioServerInitialize";
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
  v25 = 0LL;
  v26 = 0LL;
  *a10 = 0LL;
  CAudioDGProcess::LockADGProcess(v15);
  v17 = CAudioDGProcess::CheckADGStatus(v16);
  if ( v17 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, CAudioDGProcess **))(*(_QWORD *)g_PolicyManager
                                                                                               + 32LL))(
            g_PolicyManager,
            a1,
            &v25);
    if ( v17 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v25 + 40LL))(v25);
      if ( (unsigned int)IsProcessAllowed(v18, a2) )
      {
        v20 = ATL::CComObject<CVADServer>::CreateInstance(&v26);
        v21 = v26;
        v17 = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
          v17 = (*(__int64 (__fastcall **)(__int64, CAudioDGProcess *, const unsigned __int16 *, _QWORD, int, __int64, __int64, int, __int64, __int64))(*(_QWORD *)v21 + 40LL))(
                  v21,
                  v25,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
          if ( v17 >= 0 )
          {
            CAudioDGProcess::LockADGProcess(v22);
            *a10 = v21;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
            v17 = 0;
          }
        }
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v19 = (*(__int64 (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v25 + 40LL))(v25);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            54,
            (unsigned int)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
            v19,
            (__int64)a2);
        }
        v17 = -2147024891;
      }
    }
  }
  v23 = v25;
  if ( v25 )
  {
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
  CAudioDGProcess::UnlockADGProcess(v23);
  if ( v17 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize", 0xB08u, v17);
  if ( phNewTimer[0] )
    DeleteTimerQueueTimer(0LL, phNewTimer[0], (HANDLE)0xFFFFFFFFFFFFFFFFLL);
  return (unsigned int)v17;
}
