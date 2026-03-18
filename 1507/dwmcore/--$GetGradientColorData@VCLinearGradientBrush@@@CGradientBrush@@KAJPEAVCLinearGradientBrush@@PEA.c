/*
 * XREFs of ??$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEAVCGradientColorData@@@Z @ 0x18011FE94
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180120020 (-GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ?GetOpacity@CBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z @ 0x180056648 (-GetOpacity@CBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18014BF08 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 */

__int64 __fastcall CGradientBrush::GetGradientColorData<CLinearGradientBrush>(__int64 a1, CGradientColorData *a2)
{
  __int64 v2; // rbp
  int Opacity; // eax
  unsigned int v6; // ebx
  unsigned __int128 v7; // rax
  int v8; // esi
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  float *v12; // rax
  float v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 120);
  *((_DWORD *)a2 + 6) = 0;
  *((_DWORD *)a2 + 14) = 0;
  Opacity = CBrush::GetOpacity(*(double *)(a1 + 72), *(_QWORD *)(a1 + 80), &v14);
  v6 = Opacity;
  if ( Opacity >= 0 )
  {
    v7 = *(unsigned int *)(a1 + 116) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v8 = 0;
    v9 = *((_QWORD *)&v7 + 1) >> 4;
    if ( (unsigned int)(*((_QWORD *)&v7 + 1) >> 4) )
    {
      while ( 1 )
      {
        v10 = CGradientColorData::AddColorWithPosition(a2, (const struct _D3DCOLORVALUE *)(v2 + 8), *(double *)v2);
        v6 = v10;
        if ( v10 < 0 )
          break;
        v2 += 24LL;
        if ( ++v8 >= (unsigned int)v9 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xD8u);
    }
    else
    {
LABEL_6:
      if ( *((_DWORD *)a2 + 6) )
      {
        v11 = *((unsigned int *)a2 + 6);
        v12 = (float *)(*(_QWORD *)a2 + 12LL);
        do
        {
          *v12 = v14 * *v12;
          v12 += 4;
          --v11;
        }
        while ( v11 );
      }
      return 0;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0xC9u);
  }
  return v6;
}
