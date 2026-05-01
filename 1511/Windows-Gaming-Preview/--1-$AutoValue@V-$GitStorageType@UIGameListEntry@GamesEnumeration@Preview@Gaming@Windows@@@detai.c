/*
 * XREFs of ??1?$AutoValue@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@XZ @ 0x1800046D4
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_0_1_0___::SetAt_::_1_::dtor$0 @ 0x18002732B (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_18002732B.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_0_1_0___::SetAt_::_1_::dtor$1 @ 0x180027337 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_180027337.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_0_1_0___::RemoveAtInternal_::_1_::dtor$0 @ 0x1800273DF (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_1800273DF.c)
 * Callees:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005ED8 (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::~AutoValue<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release((void *)*a1);
  }
  else if ( *a1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  }
  *a1 = 0LL;
  *((_BYTE *)a1 + 8) = 0;
  return result;
}
