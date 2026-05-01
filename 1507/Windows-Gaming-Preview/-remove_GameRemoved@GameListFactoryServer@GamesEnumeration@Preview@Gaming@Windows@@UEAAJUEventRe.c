/*
 * XREFs of ?remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800099B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000A4CC (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180011744 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::remove_GameRemoved(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        struct EventRegistrationToken a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  __int64 value; // [rsp+38h] [rbp+10h]

  value = a2.value;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((char *)this + 72, &SRWLock);
  v3 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         (char *)this + 104,
         value);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      144LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
