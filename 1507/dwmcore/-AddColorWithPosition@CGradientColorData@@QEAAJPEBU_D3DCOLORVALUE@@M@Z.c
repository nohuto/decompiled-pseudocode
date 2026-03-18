/*
 * XREFs of ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18014BF08
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEAVCGradientColorData@@@Z @ 0x18011FE94 (--$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEA.c)
 *     ?AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18014BD90 (-AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGradientColorData::AddColorWithPosition(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v3 = *((unsigned int *)this + 6);
  v5 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x77u);
LABEL_17:
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 14) = 0;
    return v7;
  }
  if ( v5 > *((_DWORD *)this + 5) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, 1, a2);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    v7 = v6;
    if ( v6 < 0 )
      goto LABEL_10;
  }
  else
  {
    *(struct _D3DCOLORVALUE *)(*(_QWORD *)this + 16 * v3) = *(const struct _D3DCOLORVALUE *)&a2->r;
    *((_DWORD *)this + 6) = v5;
  }
  v8 = *((_DWORD *)this + 14);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x78u);
    goto LABEL_17;
  }
  v7 = 0;
  if ( v9 > *((_DWORD *)this + 13) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 4u, 1, &v14);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    v7 = v10;
    if ( v10 < 0 )
      goto LABEL_16;
  }
  else
  {
    *(float *)(*((_QWORD *)this + 4) + 4LL * *((unsigned int *)this + 14)) = v14;
    *((_DWORD *)this + 14) = v9;
  }
  return v7;
}
