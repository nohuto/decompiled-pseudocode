/*
 * XREFs of ?GetOpacity@CBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@PEAM@Z @ 0x180056648
 * Callers:
 *     ?GetBrushRealizationInternal@CSolidColorBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180083D10 (-GetBrushRealizationInternal@CSolidColorBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ?GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x180085C44 (-GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMapping.c)
 *     ??$IsConstantOpaqueInternal@$$CBVCLinearGradientBrush@@@CGradientBrush@@KA_NPEBVCLinearGradientBrush@@@Z @ 0x1800F8450 (--$IsConstantOpaqueInternal@$$CBVCLinearGradientBrush@@@CGradientBrush@@KA_NPEBVCLinearGradientB.c)
 *     ??$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEAVCGradientColorData@@@Z @ 0x18011FE94 (--$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEA.c)
 * Callees:
 *     ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@@Z @ 0x18005F4D4 (--$GetTypeSpecificResource@V-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CJ@@@@@YAJPEAVCResource@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrush::GetOpacity(double a1, __int64 a2, float *a3)
{
  int TypeSpecific; // eax
  int v6; // ebx
  double v7; // xmm0_8
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,41>>(a2, a2, &v9);
  v6 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TypeSpecific, 0x68u);
  }
  else if ( v9 )
  {
    a1 = *(double *)(v9 + 40);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xABu);
  }
  else
  {
    v7 = DOUBLE_1_0;
    if ( a1 <= 1.0 )
    {
      v7 = 0.0;
      if ( a1 >= 0.0 )
        v7 = a1;
    }
    *a3 = v7;
  }
  return (unsigned int)v6;
}
