/*
 * XREFs of ?UpdateLayout@CText@@UEAAJXZ @ 0x1800160D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016150 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001D1B0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x23Au);
  }
  else
  {
    v4 = CText::ValidateResources(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x23Bu);
  }
  return v3;
}
