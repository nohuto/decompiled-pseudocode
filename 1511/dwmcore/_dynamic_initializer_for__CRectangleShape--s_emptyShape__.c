/*
 * XREFs of _dynamic_initializer_for__CRectangleShape::s_emptyShape__ @ 0x180001370
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 */

int dynamic_initializer_for__CRectangleShape::s_emptyShape__()
{
  CRectangleShape::CRectangleShape((CRectangleShape *)&CRectangleShape::s_emptyShape, 0.0, 0.0, 0.0, 0.0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CRectangleShape::s_emptyShape__);
}
