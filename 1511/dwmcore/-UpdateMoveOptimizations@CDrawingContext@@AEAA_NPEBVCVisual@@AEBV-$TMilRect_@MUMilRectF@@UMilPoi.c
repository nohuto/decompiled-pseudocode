/*
 * XREFs of ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B629C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180116BF0 (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 */

char __fastcall CDrawingContext::UpdateMoveOptimizations(__int64 a1, __int64 a2, float *a3)
{
  int v4; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdi
  float v8; // xmm4_4
  __int64 v9; // r15
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __m128i v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 5672) - 1;
  if ( v4 >= 0 )
  {
    v6 = (_QWORD *)(a1 + 5648);
    v7 = 8LL * v4;
    do
    {
      v8 = *a3;
      v9 = *(_QWORD *)(v7 + *v6);
      v16 = _mm_loadu_si128((const __m128i *)(v9 + 32));
      v10 = *(float *)v16.m128i_i32 + *(float *)(v9 + 24);
      v11 = *(float *)&v16.m128i_i32[1] + *(float *)(v9 + 28);
      v12 = *(float *)&v16.m128i_i32[2] + *(float *)(v9 + 24);
      v13 = *(float *)&v16.m128i_i32[3] + *(float *)(v9 + 28);
      v16.m128i_i64[0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
      v16.m128i_i64[1] = __PAIR64__(LODWORD(v13), LODWORD(v12));
      *((_QWORD *)&v17 + 1) = __PAIR64__(LODWORD(v13), LODWORD(v12));
      *(_QWORD *)&v17 = __PAIR64__(LODWORD(v11), LODWORD(v10));
      if ( v8 > v10 )
      {
        v10 = v8;
        *(float *)v16.m128i_i32 = v8;
      }
      if ( a3[1] > v11 )
      {
        v11 = a3[1];
        *(float *)&v16.m128i_i32[1] = v11;
      }
      if ( v12 > a3[2] )
      {
        v12 = a3[2];
        *(float *)&v16.m128i_i32[2] = v12;
      }
      if ( v13 > a3[3] )
      {
        v13 = a3[3];
        *(float *)&v16.m128i_i32[3] = v13;
      }
      if ( v12 > v10 && v13 > v11 )
      {
        CDwmMetaRegion::ClipRect(&v17, &v16);
        if ( IsRectEmptyOrInvalid((float *)&v17) )
        {
          CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*v6 + v7));
          DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v6, (unsigned int)v4);
        }
        else
        {
          LODWORD(v14) = *(_DWORD *)(v9 + 28) ^ _xmm;
          LODWORD(v15) = *(_DWORD *)(v9 + 24) ^ _xmm;
          *((float *)&v17 + 1) = *((float *)&v17 + 1) + v14;
          *(float *)&v17 = *(float *)&v17 + v15;
          *((float *)&v17 + 3) = *((float *)&v17 + 3) + v14;
          *((float *)&v17 + 2) = *((float *)&v17 + 2) + v15;
          *(_OWORD *)(v9 + 32) = v17;
        }
      }
      v7 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return 0;
}
