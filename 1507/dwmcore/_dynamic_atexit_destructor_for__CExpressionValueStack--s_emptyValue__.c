/*
 * XREFs of _dynamic_atexit_destructor_for__CExpressionValueStack::s_emptyValue__ @ 0x18009C690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CExpressionValueStack::s_emptyValue__()
{
  CExpressionValue::Reset((CExpressionValue *)&CExpressionValueStack::s_emptyValue, 0);
}
