/*
 * XREFs of ?ClearCache@CExpression@@IEAAXXZ @ 0x180147C50
 * Callers:
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180149440 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

void __fastcall CExpression::ClearCache(void **this)
{
  if ( this[40] )
    memset_0(this[40], 0, *((unsigned int *)this + 82));
}
