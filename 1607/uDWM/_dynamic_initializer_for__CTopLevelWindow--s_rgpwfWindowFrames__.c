/*
 * XREFs of _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x1800010C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x1800472B8 (--0-$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ.c)
 */

int dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__()
{
  DynArray<CTopLevelWindow::WindowFrame *,0>::DynArray<CTopLevelWindow::WindowFrame *,0>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CTopLevelWindow::s_rgpwfWindowFrames__);
}
