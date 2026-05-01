/*
 * XREFs of ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180012880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012280 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001CAE4 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_DisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 136, &lpCriticalSection);
  if ( *((_QWORD *)this + 25)
    || (*a2 = 0LL,
        v4 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo((struct ITileInfo **)this),
        v5 = v4,
        v4 >= 0) )
  {
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v7 = *((_QWORD *)this + 25);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 25));
    *a2 = (struct Windows::ApplicationModel::IAppDisplayInfo *)*((_QWORD *)this + 25);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      298LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v4);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v5;
  }
}
