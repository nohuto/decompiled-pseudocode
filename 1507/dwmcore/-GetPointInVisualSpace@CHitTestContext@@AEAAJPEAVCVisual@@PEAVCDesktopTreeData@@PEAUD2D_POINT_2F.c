/*
 * XREFs of ?GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F@@PEA_N_N@Z @ 0x18000B80C
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000A900 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z @ 0x18000A898 (-GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z.c)
 *     ?GetPointInVisualSpaceFromCache@CHitTestContext@@AEAA_NPEAVCVisual@@PEAUD2D_POINT_2F@@PEA_N@Z @ 0x18000B7C0 (-GetPointInVisualSpaceFromCache@CHitTestContext@@AEAA_NPEAVCVisual@@PEAUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEAAJAEBUInverseTransformStruct@CHitTestContext@@@Z @ 0x18000C1A8 (-Push@-$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEAAJAEBUInverseTran.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CHitTestContext::GetPointInVisualSpace(
        CHitTestContext *this,
        struct CVisual *a2,
        struct CDesktopTreeData *a3,
        struct D2D_POINT_2F *a4,
        bool *a5,
        bool a6)
{
  unsigned int v10; // ebx
  bool InverseTransform; // al
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm1
  struct D2D_POINT_2F v15; // xmm0_8
  __m128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-50h]
  struct CVisual *v21; // [rsp+38h] [rbp-48h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h]
  unsigned __int64 v23; // [rsp+50h] [rbp-30h]
  _BOOL8 v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-10h]

  v10 = 0;
  if ( !CHitTestContext::GetPointInVisualSpaceFromCache(this, a2, a4, a5) )
  {
    v21 = 0LL;
    InverseTransform = CHitTestContext::GetInverseTransform(this, (struct D2D1::Matrix3x2F *)&v25);
    v24 = InverseTransform;
    if ( InverseTransform )
    {
      v12 = (__m128)HIDWORD(v26);
      v13 = (__m128)DWORD2(v25);
      v14 = (__m128)HIDWORD(v25);
      v20 = *((_QWORD *)this + 12);
      v21 = a2;
      v13.m128_f32[0] = (float)((float)(*((float *)&v25 + 2) * *((float *)&v20 + 1))
                              + (float)(*(float *)&v25 * *(float *)&v20))
                      + *(float *)&v26;
      v14.m128_f32[0] = (float)((float)(*((float *)&v25 + 3) * *((float *)&v20 + 1))
                              + (float)(*((float *)&v25 + 1) * *(float *)&v20))
                      + *((float *)&v26 + 1);
      v15 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v13, v14).m128_u64[0];
      v16 = (__m128)(unsigned int)v26;
      *a4 = v15;
      v17 = v25;
      *a5 = 1;
      v22 = v17;
      v26 = _mm_unpacklo_ps(v16, v12).m128_u64[0];
      v23 = v26;
    }
    else
    {
      a4->x = 0.0;
      a4->y = 0.0;
      *a5 = 0;
    }
    if ( a6 )
    {
      v18 = CWatermarkStack<CHitTestContext::InverseTransformStruct,10,2,10>::Push((char *)this + 152, &v21);
      v10 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x22Du);
      else
        *((_BYTE *)a3 + 264) |= 0x10u;
    }
  }
  return v10;
}
