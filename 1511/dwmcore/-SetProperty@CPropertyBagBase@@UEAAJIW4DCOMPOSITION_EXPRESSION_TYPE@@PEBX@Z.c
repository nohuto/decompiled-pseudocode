/*
 * XREFs of ?SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CPropertyBagBase::SetProperty(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(
           a1,
           1LL,
           a2,
           a3,
           a4);
}
