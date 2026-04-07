/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x180024B30
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18001B7E0 (-SetText@CText@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(void ***this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( this[67] )
  {
    v3 = CText::SetText(this[67], (const unsigned __int16 *)this[93][2]);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x13F7u);
  }
  return v1;
}
