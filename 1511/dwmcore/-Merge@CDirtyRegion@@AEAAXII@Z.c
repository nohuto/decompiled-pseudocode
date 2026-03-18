/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180079AAC
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800798C8 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18007A76C (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

void __fastcall CDirtyRegion::Merge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r11
  _DWORD *v10; // rdx
  float v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 16LL * a2;
  v5 = 16LL * a3;
  v6 = a2;
  v7 = a3;
  *(_OWORD *)v11 = *(_OWORD *)((char *)this + v4 + 24);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v11, (float *)((char *)this + v5 + 24));
  *(_OWORD *)((char *)this + v4 + 24) = *(_OWORD *)v11;
  CDirtyRegion::CalcDirtyRegionCachedData(v8, v11, (char *)this + 16 * v6 + 864);
  *(_DWORD *)((char *)this + v5 + 872) = 0;
  *(_DWORD *)((char *)this + v5 + 868) = 0;
  *((_BYTE *)this + v5 + 876) = 1;
  *((_DWORD *)this + 4 * v7 + 216) = 0;
  v9[9] = 0;
  v9[8] = 0;
  v9[7] = 0;
  v9[6] = 0;
  CDirtyRegion::UpdateAcceleration(this, (unsigned int)v6);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
    (float *)((char *)this + v4 + 152),
    (float *)((char *)this + v5 + 152));
  v10[3] = 0;
  v10[2] = 0;
  v10[1] = 0;
  *v10 = 0;
  CDirtyRegion::AppendDirtyRegionLists(this, v6, v7);
}
