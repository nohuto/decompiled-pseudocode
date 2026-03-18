/*
 * XREFs of ?GetPointInVisualSpaceFromCache@CHitTestContext@@AEAA_NPEAVCVisual@@PEAUD2D_POINT_2F@@PEA_N@Z @ 0x18000B7C0
 * Callers:
 *     ?GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F@@PEA_N_N@Z @ 0x18000B80C (-GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEBAPEBUInverseTransformStruct@CHitTestContext@@XZ @ 0x18000C188 (-GetTopByReference@-$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEBAPEB.c)
 */

char __fastcall CHitTestContext::GetPointInVisualSpaceFromCache(
        CHitTestContext *this,
        struct CVisual *a2,
        struct D2D_POINT_2F *a3,
        bool *a4)
{
  char v4; // r10
  __int64 TopByReference; // rax
  _BYTE *v8; // r9
  _QWORD *v9; // r11
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __int64 v13; // [rsp+30h] [rbp+8h]

  v4 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( *((_DWORD *)this + 38) )
  {
    TopByReference = CWatermarkStack<CHitTestContext::InverseTransformStruct,10,2,10>::GetTopByReference();
    if ( *(struct CVisual **)TopByReference == a2 )
    {
      if ( *(_BYTE *)(TopByReference + 32) != v4 )
      {
        v13 = *((_QWORD *)this + 12);
        v11 = (__m128)HIDWORD(v13);
        v12 = (__m128)HIDWORD(v13);
        v12.m128_f32[0] = *((float *)&v13 + 1) * *(float *)(TopByReference + 16);
        *v8 = 1;
        v12.m128_f32[0] = (float)(v12.m128_f32[0] + (float)(*(float *)&v13 * *(float *)(TopByReference + 8)))
                        + *(float *)(TopByReference + 24);
        v11.m128_f32[0] = (float)((float)(*((float *)&v13 + 1) * *(float *)(TopByReference + 20))
                                + (float)(*(float *)&v13 * *(float *)(TopByReference + 12)))
                        + *(float *)(TopByReference + 28);
        *v9 = _mm_unpacklo_ps(v12, v11).m128_u64[0];
      }
      return 1;
    }
  }
  return v4;
}
