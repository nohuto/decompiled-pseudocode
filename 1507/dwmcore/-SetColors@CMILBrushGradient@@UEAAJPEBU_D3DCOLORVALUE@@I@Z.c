/*
 * XREFs of ?SetColors@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x18014BE50
 * Callers:
 *     ?SetColors@CMILBrushLinearGradient@@UEAAJPEAU_D3DCOLORVALUE@@I@Z @ 0x1800F9D90 (-SetColors@CMILBrushLinearGradient@@UEAAJPEAU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x18014C100 (-SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 */

__int64 __fastcall CMILBrushGradient::SetColors(
        CMILBrushGradient *this,
        const struct _D3DCOLORVALUE *a2,
        unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  if ( a2 && a3 >= 2 )
  {
    v4 = CGradientColorData::SetColors((CMILBrushGradient *)((char *)this + 160), a2, a3);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB6u);
    v6 = ++*((_DWORD *)this + 32);
    if ( !v6 )
      v6 = 1;
    *((_DWORD *)this + 32) = v6;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB1u);
  }
  return v5;
}
