/*
 * XREFs of ?UpdateLayout@CText@@UEAAJXZ @ 0x1800181A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001821C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  int v4; // eax

  updated = CVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1B9u);
  }
  else
  {
    v4 = CText::ValidateResources(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1BAu);
  }
  return v3;
}
