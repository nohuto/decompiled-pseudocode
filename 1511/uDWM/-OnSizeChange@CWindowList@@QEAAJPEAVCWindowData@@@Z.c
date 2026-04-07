/*
 * XREFs of ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800302A4
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 */

__int64 __fastcall CWindowList::OnSizeChange(CWindowList *this, struct tagPOINT *a2)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CWindowList::UpdateWindowScale(this, a2, 0);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xA6Au);
  return v3;
}
