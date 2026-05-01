/*
 * XREFs of ??1TagManager@SecureVersionTag@XWinRT@@QEAA@XZ @ 0x18001D38C
 * Callers:
 *     _Windows::Foundation::Collections::Internal::HashMap_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultHash_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable_____ptr64__Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__0_1_0___::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x180027D9F (_Windows--Foundation--Collections--Internal--HashMap_HSTRING_______ptr64_IInspectab_ea_180027D9F.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

void __fastcall XWinRT::SecureVersionTag::TagManager::~TagManager(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
      operator delete(v1);
  }
}
