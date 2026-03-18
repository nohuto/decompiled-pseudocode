/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@PEAM@Z @ 0x18005D948
 * Callers:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1800136B0 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ??$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPEBVCLinearGradientLegacyMilBrush@@@Z @ 0x180014BA8 (--$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPE.c)
 *     ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180058A70 (-GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVC.c)
 *     ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18005CBB4 (-GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBru.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@@Z @ 0x1800AD8F8 (--$GetTypeSpecificResource@V-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CN@@@@@YAJPEAVCResource@.c)
 */

__int64 __fastcall CLegacyMilBrush::GetOpacity(double a1, __int64 a2, float *a3)
{
  int TypeSpecific; // eax
  int v6; // ebx
  double v7; // xmm0_8
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,45>>(a2, a2, &v9);
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
