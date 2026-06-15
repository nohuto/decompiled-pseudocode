/*
 * XREFs of ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x180080774
 * Callers:
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x180081638 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B598 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z @ 0x180079D2C (-MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007FB88 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

__int64 __fastcall CAudioSessionManager::RevokeSessions(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v9; // esi
  __int64 v10; // rdx
  CAudioSession *v11; // rdi
  __int64 v12; // r8
  int v13; // eax
  __int64 StartPosition; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)(a1 + 64));
  while ( StartPosition )
  {
    v11 = *(CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                               a1 + 64,
                               &StartPosition);
    if ( v11 )
    {
      if ( CAudioSession::MatchesParameters(v11, v10, a2, a3, a4) )
      {
        LOBYTE(v12) = 1;
        v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*((_QWORD *)v11 + 2) + 32LL))(
                (_QWORD *)v11 + 2,
                0LL,
                v12);
        if ( v13 < 0 && v9 >= 0 )
          v9 = v13;
      }
    }
  }
  LeaveCriticalSection(v4);
  return (unsigned int)v9;
}
