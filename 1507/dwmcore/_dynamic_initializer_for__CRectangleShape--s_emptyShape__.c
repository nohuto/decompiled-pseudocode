/*
 * XREFs of _dynamic_initializer_for__CRectangleShape::s_emptyShape__ @ 0x1800013A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 */

int dynamic_initializer_for__CRectangleShape::s_emptyShape__()
{
  CRectangleShape::CRectangleShape((CRectangleShape *)&CRectangleShape::s_emptyShape, 0.0, 0.0, 0.0, 0.0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CRectangleShape::s_emptyShape__);
}
