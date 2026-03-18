/*
 * XREFs of ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x180018150
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180017E94 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18018C4E0 (-AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z @ 0x1800181AC (-AddMultipleAndSet@-$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800AD500 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CGradientColorData::AddColorWithPosition(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  float v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v4 = DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet(this, a2, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x77u);
    goto LABEL_6;
  }
  v6 = DynArray<float,0>::AddMultipleAndSet((char *)this + 32, &v8, 1LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x78u);
LABEL_6:
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 14) = 0;
  }
  return v5;
}
