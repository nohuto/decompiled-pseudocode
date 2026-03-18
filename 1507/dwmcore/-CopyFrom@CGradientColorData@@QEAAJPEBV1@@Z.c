/*
 * XREFs of ?CopyFrom@CGradientColorData@@QEAAJPEBV1@@Z @ 0x18014C064
 * Callers:
 *     ?GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x1801201D8 (-GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGradientColorData::CopyFrom(CGradientColorData *this, const struct CGradientColorData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, *((_DWORD *)a2 + 6), *(_QWORD *)a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Fu);
LABEL_5:
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 14) = 0;
    return v5;
  }
  v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 4u, *((_DWORD *)a2 + 14), *((_QWORD *)a2 + 4));
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA0u);
    goto LABEL_5;
  }
  return v5;
}
