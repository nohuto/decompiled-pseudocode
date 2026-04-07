/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x180018790
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001821C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CText::ValidateVisual(CText *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax

  if ( (*((_BYTE *)this + 80) & 2) != 0 || (v5 = CText::ValidateResources(this), v3 = v5, v5 >= 0) )
  {
    v2 = CVisual::ValidateVisual(this);
    v3 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xF6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF4u);
  }
  return v3;
}
