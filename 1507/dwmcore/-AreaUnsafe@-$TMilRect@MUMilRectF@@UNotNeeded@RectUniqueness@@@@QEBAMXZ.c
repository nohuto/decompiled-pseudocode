/*
 * XREFs of ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18004DEA8
 * Callers:
 *     ?Add@CMergedRect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051438 (-Add@CMergedRect@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(__int64 a1)
{
  float v1; // xmm1_4
  double result; // xmm0_8

  v1 = *(float *)(a1 + 8);
  if ( v1 <= *(float *)a1 )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(a1 + 12);
  if ( *(float *)&result <= *(float *)(a1 + 4) )
    return 0.0;
  *(float *)&result = (float)(*(float *)&result - *(float *)(a1 + 4)) * (float)(v1 - *(float *)a1);
  return result;
}
