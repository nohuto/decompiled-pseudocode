/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x180061F50
 * Callers:
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x180062A64 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800018E4 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x180062104 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        int a2,
        const struct _GUID *a3,
        struct CAudioSession **a4)
{
  struct CAudioSession *v7; // rdi
  __int64 i; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  LPCRITICAL_SECTION v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  for ( i = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
        ;
        i = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
              (char *)this + 64,
              v10) )
  {
    v10 = i;
    if ( !i )
      break;
    v7 = *(struct CAudioSession **)(i + 80);
    if ( v7 && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 108) + 48LL))(*((_QWORD *)v7 + 108)) == a2 )
    {
      v9 = *((_QWORD *)v7 + 101) - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
      if ( !v9 )
        v9 = *((_QWORD *)v7 + 102) - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
      if ( !v9 )
      {
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
        break;
      }
    }
    v7 = 0LL;
  }
  *a4 = v7;
  if ( v13 )
    ATL::CCritSecLock::Unlock(&v12);
  return v7 == 0LL ? 0x80070002 : 0;
}
