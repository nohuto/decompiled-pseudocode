/*
 * XREFs of ??1?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@XZ @ 0x180015AE4
 * Callers:
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable_____ptr64__1_::Make_::_1_::dtor$1 @ 0x18002ADB2 (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_______ptr64_ea_18002ADB2.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_______ptr64_IInspectable_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable_____ptr64__1_::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18002ADCA (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_______ptr64_ea_18002ADCA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::~AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
        HSTRING *a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a1);
  *a1 = 0LL;
  return result;
}
