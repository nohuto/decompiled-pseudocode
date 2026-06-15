/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007FED0
 * Callers:
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18002B6B0 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B598 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BC48 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007FB88 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v9 = a2;
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
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
      if ( v6 && *(_DWORD *)(v6 + 692) == a2 )
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
