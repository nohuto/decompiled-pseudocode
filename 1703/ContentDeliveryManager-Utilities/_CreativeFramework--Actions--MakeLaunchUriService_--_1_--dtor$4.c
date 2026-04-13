/*
 * XREFs of _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$4 @ 0x18007428C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIPackageFamilyStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003FDA4 (--1-$com_ptr_t@UIPackageFamilyStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wi.c)
 */

__int64 __fastcall CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~2u;
    return wil::com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>((__int64 *)(a2 + 72));
  }
  return result;
}
