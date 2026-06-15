/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007B0F0
 * Callers:
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x180013A70 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800025A8 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180014D68 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007ADA8 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::NotifySessionAudioProtocol(CAudioSessionManager *this, int a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-88h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 StartPosition; // [rsp+B0h] [rbp+8h] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v10);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x47u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      this,
      v9);
  }
  if ( *((_DWORD *)this + 62) != a3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
    while ( StartPosition )
    {
      v6 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                        (__int64)this + 64,
                        &StartPosition);
      if ( v6 && *(_DWORD *)(v6 + 844) == a2 )
      {
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v6 + 16) + 32LL))(v6 + 16, 4LL, v7);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v10);
  return 0LL;
}
