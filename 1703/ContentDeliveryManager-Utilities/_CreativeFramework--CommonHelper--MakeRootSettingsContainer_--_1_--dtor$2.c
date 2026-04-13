/*
 * XREFs of _CreativeFramework::CommonHelper::MakeRootSettingsContainer_::_1_::dtor$2 @ 0x180075058
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::CommonHelper::MakeRootSettingsContainer_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
