/*
 * XREFs of ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x18006318C
 * Callers:
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x180064108 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800018E4 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z @ 0x18005D4F0 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18006265C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::RevokeSessions(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  CAudioSession *v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  LPCRITICAL_SECTION v14; // [rsp+38h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-28h]
  __int64 StartPosition; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v14, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)(a1 + 64));
  while ( StartPosition )
  {
    v10 = *(CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                               a1 + 64,
                               &StartPosition);
    if ( v10 )
    {
      if ( CAudioSession::MatchesParameters(v10, v9, a2, a3, a4) )
      {
        LOBYTE(v11) = 1;
        v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*((_QWORD *)v10 + 2) + 32LL))(
                (_QWORD *)v10 + 2,
                0LL,
                v11);
        if ( v12 < 0 && v8 >= 0 )
          v8 = v12;
      }
    }
  }
  if ( v15 )
    ATL::CCritSecLock::Unlock(&v14);
  return (unsigned int)v8;
}
