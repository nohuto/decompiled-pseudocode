/*
 * XREFs of sub_1800010A0 @ 0x1800010A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x180045EEC (--0-$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ.c)
 */

int sub_1800010A0()
{
  DynArray<CTopLevelWindow::WindowFrame *,0>::DynArray<CTopLevelWindow::WindowFrame *,0>();
  return atexit((void (__cdecl *)())DynArray<CTopLevelWindow::WindowFrame *,0>::~DynArray<CTopLevelWindow::WindowFrame *,0>);
}
