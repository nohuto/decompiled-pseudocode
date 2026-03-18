/*
 * XREFs of ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x18003CA50
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18003CC34 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::UpdateAcceleration(CDirtyRegion *this, __int64 a2)
{
  __int64 v3; // r9
  float *v4; // r8
  float *v5; // rax
  float *v6; // rcx
  float v7; // xmm1_4
  char v8; // r10
  float v9; // xmm2_4
  __int64 v10; // r11
  __int64 v11; // rcx
  float *v12; // r9
  float *v13; // r8
  __int64 v14; // rdx
  float *v15; // rcx
  float v16; // xmm1_4
  char v17; // al
  float v18; // xmm2_4

  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)a2;
    v4 = (float *)((char *)this + 16 * (unsigned int)a2 + 864);
    v5 = (float *)((char *)this + 32 * (unsigned int)a2 + 576);
    v6 = (float *)((char *)this + 868);
    do
    {
      v7 = 0.0;
      v8 = *((_BYTE *)v4 + 12);
      if ( *((_BYTE *)v6 + 8) )
      {
        if ( !v8 )
          v7 = FLOAT_3_4028235e38;
      }
      else if ( !v8 )
      {
        v9 = (float)((float)(*v6 - v4[1]) * (float)(*v6 - v4[1]))
           + (float)((float)(*(v6 - 1) - *v4) * (float)(*(v6 - 1) - *v4));
        if ( v9 != 0.0 )
          v7 = (float)(v6[1] + v4[2]) / v9;
      }
      *v5 = v7;
      v6 += 4;
      ++v5;
      --a2;
    }
    while ( a2 );
  }
  v10 = (unsigned int)(v3 + 1);
  if ( (unsigned int)v10 < 8 )
  {
    v11 = v3;
    v12 = (float *)((char *)this + 16 * v3 + 864);
    v13 = (float *)((char *)this + 16 * (unsigned int)v10 + 868);
    v14 = (unsigned int)(8 - v10);
    v15 = (float *)((char *)this + 32 * v10 + 4 * v11 + 576);
    do
    {
      v16 = 0.0;
      v17 = *((_BYTE *)v12 + 12);
      if ( *((_BYTE *)v13 + 8) )
      {
        if ( !v17 )
          v16 = FLOAT_3_4028235e38;
      }
      else if ( !v17 )
      {
        v18 = (float)((float)(*v13 - v12[1]) * (float)(*v13 - v12[1]))
            + (float)((float)(*(v13 - 1) - *v12) * (float)(*(v13 - 1) - *v12));
        if ( v18 != 0.0 )
          v16 = (float)(v13[1] + v12[2]) / v18;
      }
      *v15 = v16;
      v13 += 4;
      v15 += 8;
      --v14;
    }
    while ( v14 );
  }
}
