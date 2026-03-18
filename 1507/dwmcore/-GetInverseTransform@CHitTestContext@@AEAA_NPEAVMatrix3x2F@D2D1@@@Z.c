/*
 * XREFs of ?GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z @ 0x18000A898
 * Callers:
 *     ?GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F@@PEA_N_N@Z @ 0x18000B80C (-GetPointInVisualSpace@CHitTestContext@@AEAAJPEAVCVisual@@PEAVCDesktopTreeData@@PEAUD2D_POINT_2F.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 */

bool __fastcall CHitTestContext::GetInverseTransform(CHitTestContext *this, struct D2D1::Matrix3x2F *a2)
{
  const struct CBaseMatrix *TopByReference; // rax
  unsigned __int64 v3; // xmm1_8
  D2D1::Matrix3x2F *v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h]

  TopByReference = CBaseMatrixStack::GetTopByReference((CHitTestContext *)((char *)this + 120));
  DWORD1(v6) = *((_DWORD *)TopByReference + 1);
  HIDWORD(v6) = *((_DWORD *)TopByReference + 5);
  LODWORD(v6) = *(_DWORD *)TopByReference;
  DWORD2(v6) = *((_DWORD *)TopByReference + 4);
  v3 = _mm_unpacklo_ps((__m128)*((unsigned int *)TopByReference + 12), (__m128)*((unsigned int *)TopByReference + 13)).m128_u64[0];
  *(_OWORD *)v4 = v6;
  *((_QWORD *)v4 + 2) = v3;
  return D2D1::Matrix3x2F::Invert(v4);
}
