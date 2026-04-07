/*
 * XREFs of ??1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045A38
 * Callers:
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045838 (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::DPIImages::~DPIImages(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 16);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 12);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
