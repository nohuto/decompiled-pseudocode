/*
 * XREFs of ?NotifyInvalidDisplaySet@CComposition@@QEAAXXZ @ 0x18009DAE4
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CComposition::NotifyInvalidDisplaySet(CComposition *this)
{
  __int64 i; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8 * i) + 152LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8 * i));
}
