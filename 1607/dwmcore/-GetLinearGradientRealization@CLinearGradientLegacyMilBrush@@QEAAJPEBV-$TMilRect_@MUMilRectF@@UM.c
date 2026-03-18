/*
 * XREFs of ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x180017C9C
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800176B0 (-GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAP.c)
 * Callees:
 *     ?RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x180017AE4 (-RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x180017FE0 (-SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::GetLinearGradientRealization(
        __int64 a1,
        float *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // xmm1_8
  int v11; // eax
  int v12; // eax
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  CLinearGradientLegacyMilBrush::RealizeGradientPoints(a1, a2, (__int64)&v15, (__int64)&v16, (struct MilPoint2F *)v14);
  *(_DWORD *)(a4 + 184) = 0;
  *(_DWORD *)(a4 + 216) = 0;
  v7 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 160, 16LL, *(unsigned int *)(a3 + 24), *(_QWORD *)a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9Fu);
  }
  else
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 192, 4LL, *(unsigned int *)(a3 + 56), *(_QWORD *)(a3 + 32));
    v8 = v9;
    if ( v9 >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA0u);
  }
  *(_DWORD *)(a4 + 184) = 0;
  *(_DWORD *)(a4 + 216) = 0;
LABEL_3:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA6u);
  }
  else
  {
    v10 = v16;
    *(_QWORD *)(a4 + 132) = v15;
    *(_QWORD *)(a4 + 148) = v14[0];
    *(_QWORD *)(a4 + 140) = v10;
    v11 = CMILBrushGradient::SetWrapMode(a4 + 120, *(unsigned int *)(a1 + 184));
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB2u);
    }
    else
    {
      *(_DWORD *)(a4 + 228) = *(_DWORD *)(a1 + 176);
      v12 = *(_DWORD *)(a4 + 128) + 1;
      if ( *(_DWORD *)(a4 + 128) == -1 )
        v12 = 1;
      v8 = 0;
      *(_DWORD *)(a4 + 128) = v12;
    }
  }
  return (unsigned int)v8;
}
