/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180149440
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801489EC (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 * Callees:
 *     ?ClearCache@CExpression@@IEAAXXZ @ 0x180147C50 (-ClearCache@CExpression@@IEAAXXZ.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  unsigned int v1; // esi

  v1 = 0;
  for ( *((_DWORD *)this + 85) = *((_DWORD *)this + 73); v1 < *((_DWORD *)this + 80); ++v1 )
  {
    CExpression::ClearCache(*(void ***)(*((_QWORD *)this + 37) + 16LL * v1));
    CExpression::ClearCache(*(void ***)(*((_QWORD *)this + 37) + 16LL * v1 + 8));
  }
}
