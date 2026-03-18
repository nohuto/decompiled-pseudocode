/*
 * XREFs of ?AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18018C4E0
 * Callers:
 *     ?AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18012BA70 (-AddColorWithPosition@CMILBrushLinearGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x180018150 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushGradient::AddColorWithPosition(
        CMILBrushGradient *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  bool v6; // zf
  int v7; // eax

  if ( a2 )
  {
    v5 = CGradientColorData::AddColorWithPosition((CMILBrushGradient *)((char *)this + 40), a2, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD4u);
    v6 = (*((_DWORD *)this + 2))++ == -1;
    v7 = *((_DWORD *)this + 2);
    if ( v6 )
      v7 = 1;
    *((_DWORD *)this + 2) = v7;
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD1u);
  }
  return v4;
}
