/*
 * XREFs of _dynamic_initializer_for__CExpressionValueStack::s_emptyValue__ @ 0x180001020
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

int dynamic_initializer_for__CExpressionValueStack::s_emptyValue__()
{
  memset_0(&CExpressionValueStack::s_emptyValue, 0, 0x40uLL);
  LODWORD(qword_1801ED430) = 18;
  BYTE4(qword_1801ED430) = 0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CExpressionValueStack::s_emptyValue__);
}
