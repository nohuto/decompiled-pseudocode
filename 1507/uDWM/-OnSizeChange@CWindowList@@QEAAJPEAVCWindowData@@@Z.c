/*
 * XREFs of ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18002D238
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002CFC0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 */

__int64 __fastcall CWindowList::OnSizeChange(CWindowList *this, struct tagPOINT *a2)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CWindowList::UpdateWindowScale(this, a2, 0);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xA76u);
  return v3;
}
