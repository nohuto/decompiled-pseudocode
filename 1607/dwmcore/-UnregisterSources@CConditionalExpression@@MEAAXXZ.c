/*
 * XREFs of ?UnregisterSources@CConditionalExpression@@MEAAXXZ @ 0x1801494B0
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180148A50 (--1CConditionalExpression@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z @ 0x18008B520 (-UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CConditionalExpression::UnregisterSources(CConditionalExpression *this)
{
  unsigned int i; // esi

  for ( i = 0; i < *((_DWORD *)this + 80); ++i )
  {
    CExpression::UnregisterSourcesForAnimation(*(CExpression **)(*((_QWORD *)this + 37) + 16LL * i), this);
    CExpression::UnregisterSourcesForAnimation(*(CExpression **)(*((_QWORD *)this + 37) + 16LL * i + 8), this);
  }
  *((_BYTE *)this + 276) = 0;
}
