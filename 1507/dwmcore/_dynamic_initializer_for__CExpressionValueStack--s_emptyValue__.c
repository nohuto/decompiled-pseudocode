/*
 * XREFs of _dynamic_initializer_for__CExpressionValueStack::s_emptyValue__ @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

int dynamic_initializer_for__CExpressionValueStack::s_emptyValue__()
{
  CExpressionValue::Reset((CExpressionValue *)&CExpressionValueStack::s_emptyValue, 1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CExpressionValueStack::s_emptyValue__);
}
