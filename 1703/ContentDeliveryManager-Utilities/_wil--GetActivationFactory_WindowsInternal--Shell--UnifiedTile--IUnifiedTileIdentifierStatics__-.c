/*
 * XREFs of _wil::GetActivationFactory_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics__::_1_::dtor$0 @ 0x180073DCF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIPackageFamilyStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003FDA4 (--1-$com_ptr_t@UIPackageFamilyStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wi.c)
 */

__int64 __fastcall wil::GetActivationFactory_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::StateRepository::IPackageFamilyStatics,wil::err_exception_policy>(*(__int64 **)(a2 + 72));
  }
  return result;
}
