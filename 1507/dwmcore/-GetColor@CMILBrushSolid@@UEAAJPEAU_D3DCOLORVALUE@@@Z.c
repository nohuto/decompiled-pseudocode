/*
 * XREFs of ?GetColor@CMILBrushSolid@@UEAAJPEAU_D3DCOLORVALUE@@@Z @ 0x18014BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushSolid::GetColor(CMILBrushSolid *this, struct _D3DCOLORVALUE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *(struct _D3DCOLORVALUE *)&a2->r = *(struct _D3DCOLORVALUE *)((char *)this + 8);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x62u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Au);
  }
  return v2;
}
