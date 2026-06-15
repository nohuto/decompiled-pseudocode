/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x180062A64
 * Callers:
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180064070 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800018E4 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180050280 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x180061F50 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18006265C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::NotifySessionTerminate(CAudioSessionManager *this, int a2)
{
  const struct _GUID *v4; // r8
  __int64 v5; // rcx
  int AudioSession; // ebx
  struct CAudioSession *v7; // rdi
  int v9; // [rsp+28h] [rbp-39h]
  LPCRITICAL_SECTION v10; // [rsp+40h] [rbp-21h] BYREF
  char v11; // [rsp+48h] [rbp-19h]
  _BYTE v12[96]; // [rsp+58h] [rbp-9h] BYREF
  struct CAudioSession *v13; // [rsp+C8h] [rbp+67h] BYREF
  __int64 StartPosition; // [rsp+D8h] [rbp+77h] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
  v13 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      this,
      v9);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    v5 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                      (__int64)this + 64,
                      &StartPosition);
    v13 = (struct CAudioSession *)v5;
    if ( v5 && *(_DWORD *)(v5 + 844) == a2 )
    {
      LOBYTE(v4) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)(v5 + 16) + 32LL))(v5 + 16, 0LL, v4);
    }
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v4, &v13);
  v7 = v13;
  if ( AudioSession >= 0 )
    AudioSession = (*(__int64 (__fastcall **)(CAudioSessionManager *, struct CAudioSession *, _QWORD, __int64))(*(_QWORD *)this + 56LL))(
                     this,
                     v13,
                     0LL,
                     2LL);
  if ( v7 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::NotifySessionTerminate", 1716, AudioSession);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
  return (unsigned int)AudioSession;
}
