/*
 * XREFs of ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x180014E10
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1800136B0 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18015A480 (-AddColorWithPosition@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGradientColorData::AddColorWithPosition(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // eax
  int v12; // ebx
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v3 = *((unsigned int *)this + 6);
  v5 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v8 = -2147024362;
    goto LABEL_15;
  }
  if ( v5 <= *((_DWORD *)this + 5) )
  {
    *(struct _D3DCOLORVALUE *)(*(_QWORD *)this + 16 * v3) = *(const struct _D3DCOLORVALUE *)&a2->r;
    *((_DWORD *)this + 6) = v5;
    goto LABEL_6;
  }
  v6 = DynArrayImpl<0>::AddMultipleAndSet(this, 16LL, 1LL, a2);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
  v8 = v7;
  if ( v7 < 0 )
  {
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x77u);
LABEL_18:
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 14) = 0;
    return v8;
  }
LABEL_6:
  v9 = *((_DWORD *)this + 14);
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x78u);
    goto LABEL_18;
  }
  v8 = 0;
  if ( v10 <= *((_DWORD *)this + 13) )
  {
    *(float *)(*((_QWORD *)this + 4) + 4LL * *((unsigned int *)this + 14)) = v14;
    *((_DWORD *)this + 14) = v10;
    return v8;
  }
  v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 32, 4LL, 1LL, &v14);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  v8 = v12;
  if ( v12 < 0 )
    goto LABEL_17;
  return v8;
}
