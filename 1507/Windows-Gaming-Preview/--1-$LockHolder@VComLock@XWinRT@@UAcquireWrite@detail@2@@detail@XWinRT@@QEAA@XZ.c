/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180007518
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_0_1_0___::SetAt_::_1_::dtor$2 @ 0x180027501 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_180027501.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_0_1_0___::Clear_::_1_::dtor$0 @ 0x180027513 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_180027513.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_0_1_0___::RemoveAtInternal_::_1_::dtor$1 @ 0x1800275A9 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_1800275A9.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
      *(_DWORD *)(v2 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v2 + 8));
    *a1 = 0LL;
  }
}
