/*
 * XREFs of ?ClipRectAgainstBounds@CHwndRenderTarget@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18008E020 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::ClipRectAgainstBounds(__int64 a1)
{
  _DWORD *v1; // r10
  _DWORD *v3; // r8
  __int64 v4; // r9
  float *v5; // rdx
  __int64 v6; // r8
  int *v7; // r10
  __int64 v8; // r11
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4

  v1 = *(_DWORD **)(a1 + 80);
  if ( (v1[24] != v1[28] || v1[25] != v1[29] || v1[26] != v1[30] || v1[27] != v1[31])
    && (!TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v1 + 24)
     || !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v3))
    && (!(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v4)
     || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v6)) )
  {
    v9 = (float)v7[28];
    v10 = (float)v7[29];
    v11 = (float)v7[31];
    v12 = (float)v7[30];
    if ( v9 > *v5 )
      *v5 = v9;
    if ( v10 > v5[1] )
      v5[1] = v10;
    if ( v5[2] > v12 )
      v5[2] = v12;
    if ( v5[3] > v11 )
      v5[3] = v11;
    if ( v5[2] <= *v5 || v5[3] <= v5[1] )
    {
      *((_QWORD *)v5 + 1) = v8;
      *(_QWORD *)v5 = v8;
    }
  }
  return 0LL;
}
