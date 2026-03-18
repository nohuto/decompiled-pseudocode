/*
 * XREFs of ?UnregisterSources@CExpression@@MEAAXXZ @ 0x18010A740
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z @ 0x18008B520 (-UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

void __fastcall CExpression::UnregisterSources(CExpression *this)
{
  CExpression::UnregisterSourcesForAnimation(this, this);
  *((_BYTE *)this + 276) = 0;
}
