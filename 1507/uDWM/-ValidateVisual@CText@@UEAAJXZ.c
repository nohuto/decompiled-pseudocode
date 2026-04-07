/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x1800166F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016150 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x164u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x162u);
  }
  return v3;
}
