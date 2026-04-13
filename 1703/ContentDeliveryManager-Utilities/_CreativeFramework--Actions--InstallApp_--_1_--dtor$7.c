/*
 * XREFs of _CreativeFramework::Actions::InstallApp_::_1_::dtor$7 @ 0x1800739FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::InstallApp_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
