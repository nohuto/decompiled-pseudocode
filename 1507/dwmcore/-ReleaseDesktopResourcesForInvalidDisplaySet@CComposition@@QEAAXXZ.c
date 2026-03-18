/*
 * XREFs of ?ReleaseDesktopResourcesForInvalidDisplaySet@CComposition@@QEAAXXZ @ 0x18008DA2C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CComposition::ReleaseDesktopResourcesForInvalidDisplaySet(CComposition *this)
{
  __int64 i; // rsi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8 * i) + 152LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8 * i));
}
