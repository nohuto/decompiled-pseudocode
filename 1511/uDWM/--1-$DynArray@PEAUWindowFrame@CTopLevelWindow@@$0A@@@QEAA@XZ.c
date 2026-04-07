/*
 * XREFs of ??1?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x18004EB40
 * Callers:
 *     j_??1?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x1800513F0 (j_--1-$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void DynArray<CTopLevelWindow::WindowFrame *,0>::~DynArray<CTopLevelWindow::WindowFrame *,0>()
{
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&CTopLevelWindow::s_rgpwfWindowFrames);
}
