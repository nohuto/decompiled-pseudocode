/*
 * XREFs of ?GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x1801201D8
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180120020 (-GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x1801202B4 (-RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x18014BEF0 (-SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z.c)
 *     ?CopyFrom@CGradientColorData@@QEAAJPEBV1@@Z @ 0x18014C064 (-CopyFrom@CGradientColorData@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::GetLinearGradientRealization(
        __int64 a1,
        __int64 a2,
        const struct CGradientColorData *a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // xmm1_8
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  CLinearGradientBrush::RealizeGradientPoints(a1, a2, &v15, &v13, &v14);
  v7 = CGradientColorData::CopyFrom((CGradientColorData *)(a4 + 160), a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v13;
    *(_QWORD *)(a4 + 132) = v15;
    *(_QWORD *)(a4 + 148) = v14;
    *(_QWORD *)(a4 + 140) = v9;
    v10 = CMILBrushGradient::SetWrapMode(a4 + 120);
    v8 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a4 + 228) = *(_DWORD *)(a1 + 104);
      v11 = *(_DWORD *)(a4 + 128) + 1;
      if ( *(_DWORD *)(a4 + 128) == -1 )
        v11 = 1;
      v8 = 0;
      *(_DWORD *)(a4 + 128) = v11;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA6u);
  }
  return v8;
}
