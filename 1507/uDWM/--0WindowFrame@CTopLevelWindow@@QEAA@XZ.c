/*
 * XREFs of ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x1800459B0
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000882C (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ??0DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045A78 (--0DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 */

CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  CTopLevelWindow::WindowFrame::DPIImages *v1; // rdi
  int v3; // esi

  v1 = (CTopLevelWindow::WindowFrame *)((char *)this + 144);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v3 = 3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  do
  {
    CTopLevelWindow::WindowFrame::DPIImages::DPIImages(v1);
    v1 = (CTopLevelWindow::WindowFrame::DPIImages *)((char *)v1 + 160);
    --v3;
  }
  while ( v3 >= 0 );
  return this;
}
