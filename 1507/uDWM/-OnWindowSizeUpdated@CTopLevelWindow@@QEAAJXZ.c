/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800247F8
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A270 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180022B4C (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  struct tagSIZE v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 93);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v8.cx = v3;
  v4 = v1[15] - v1[13];
  if ( v4 < 0 )
    v4 = 0;
  v8.cy = v4;
  v5 = CVisual::SetSize((struct tagSIZE *)this, &v8);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x512u);
  else
    CTopLevelWindow::NotifyMouseLeave(this);
  return v6;
}
