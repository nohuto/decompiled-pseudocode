/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180062938
 * Callers:
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18000DD14 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800018E4 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180050280 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18006265C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::NotifySessionAudioProtocol(CAudioSessionManager *this, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-88h]
  LPCRITICAL_SECTION v10; // [rsp+38h] [rbp-70h] BYREF
  char v11; // [rsp+40h] [rbp-68h]
  _BYTE v12[80]; // [rsp+50h] [rbp-58h] BYREF
  __int64 StartPosition; // [rsp+B0h] [rbp+8h] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      this,
      v9);
  }
  if ( *((_DWORD *)this + 62) != a3 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
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
    if ( v11 )
      ATL::CCritSecLock::Unlock(&v10);
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
  return 0LL;
}
