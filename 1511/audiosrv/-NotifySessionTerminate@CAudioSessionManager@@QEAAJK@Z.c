/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x18007B214
 * Callers:
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x18007C948 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800025A8 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180014D68 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x18007A5B4 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007ADA8 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::NotifySessionTerminate(CAudioSessionManager *this, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  const struct _GUID *v6; // r8
  int AudioSession; // edi
  struct CAudioSession *v8; // r14
  int v10; // [rsp+20h] [rbp-98h]
  _BYTE v11[80]; // [rsp+40h] [rbp-78h] BYREF
  struct CAudioSession *v12; // [rsp+C0h] [rbp+8h] BYREF
  __int64 StartPosition; // [rsp+D0h] [rbp+18h] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v11);
  v12 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = a2;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x45u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      this,
      v10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    v4 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                      (__int64)this + 64,
                      &StartPosition);
    v12 = (struct CAudioSession *)v4;
    if ( v4 && *(_DWORD *)(v4 + 844) == a2 )
    {
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v4 + 16) + 32LL))(v4 + 16, 0LL, v5);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v6, &v12);
  v8 = v12;
  if ( AudioSession >= 0 )
    AudioSession = (*(__int64 (__fastcall **)(CAudioSessionManager *, struct CAudioSession *, _QWORD, __int64))(*(_QWORD *)this + 56LL))(
                     this,
                     v12,
                     0LL,
                     2LL);
  if ( v8 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( AudioSession < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x46u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      AudioSession);
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v11);
  return (unsigned int)AudioSession;
}
