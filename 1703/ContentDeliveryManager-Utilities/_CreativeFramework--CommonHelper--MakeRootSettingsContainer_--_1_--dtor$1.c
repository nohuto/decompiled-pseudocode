/*
 * XREFs of _CreativeFramework::CommonHelper::MakeRootSettingsContainer_::_1_::dtor$1 @ 0x18007504C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::CommonHelper::MakeRootSettingsContainer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
