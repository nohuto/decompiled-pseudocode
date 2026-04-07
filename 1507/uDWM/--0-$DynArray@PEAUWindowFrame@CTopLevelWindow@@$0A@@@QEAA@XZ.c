/*
 * XREFs of ??0?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAA@XZ @ 0x180045ADC
 * Callers:
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180001090 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 * Callees:
 *     <none>
 */

__int128 *DynArray<CTopLevelWindow::WindowFrame *,0>::DynArray<CTopLevelWindow::WindowFrame *,0>()
{
  __int128 *result; // rax

  unk_1800BC680 = 0LL;
  dword_1800BC688 = 0;
  result = &CTopLevelWindow::s_rgpwfWindowFrames;
  CTopLevelWindow::s_rgpwfWindowFrames = 0LL;
  return result;
}
