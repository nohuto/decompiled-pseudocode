/*
 * XREFs of ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180071044
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718D0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x1800724E4 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 */

void __fastcall CDirtyRegion::UpdateAcceleration(CDirtyRegion *this, unsigned int a2)
{
  __int64 v2; // r9
  CDirtyRegion *v3; // r10
  const struct CDirtyRegion::DirtyRegionCachedData *v4; // r8
  const struct CDirtyRegion::DirtyRegionCachedData *v5; // rdx
  CDirtyRegion *v6; // rcx
  float v7; // xmm0_4
  __int64 v8; // rdx
  float *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  float *v14; // r9
  __int64 v15; // rdx
  float *v16; // rcx
  float v17; // xmm1_4
  char v18; // al
  float v19; // xmm2_4

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    v4 = (CDirtyRegion *)((char *)this + 16 * a2 + 2576);
    v5 = (CDirtyRegion *)((char *)this + 2576);
    v6 = (CDirtyRegion *)(unsigned int)v2;
    do
    {
      v7 = CDirtyRegion::CalcAcceleration(v6, v5, v4);
      v5 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v8 + 16);
      *v9 = v7;
      v6 = (CDirtyRegion *)(v10 - 1);
    }
    while ( v6 );
  }
  v11 = (unsigned int)(v2 + 1);
  if ( (unsigned int)v11 < 8 )
  {
    v12 = v2;
    v13 = (__int64)v3 + 16 * (unsigned int)v11 + 2580;
    v14 = (float *)((char *)v3 + 16 * v2 + 2576);
    v15 = (unsigned int)(8 - v11);
    v16 = (float *)((char *)v3 + 32 * v11 + 4 * v12 + 2288);
    do
    {
      v17 = 0.0;
      v18 = *((_BYTE *)v14 + 12);
      if ( *(_BYTE *)(v13 + 8) )
      {
        if ( !v18 )
          v17 = FLOAT_3_4028235e38;
      }
      else if ( !v18 )
      {
        v19 = (float)((float)(*(float *)v13 - v14[1]) * (float)(*(float *)v13 - v14[1]))
            + (float)((float)(*(float *)(v13 - 4) - *v14) * (float)(*(float *)(v13 - 4) - *v14));
        if ( v19 != 0.0 )
          v17 = (float)(*(float *)(v13 + 4) + v14[2]) / v19;
      }
      *v16 = v17;
      v13 += 16LL;
      v16 += 8;
      --v15;
    }
    while ( v15 );
  }
}
