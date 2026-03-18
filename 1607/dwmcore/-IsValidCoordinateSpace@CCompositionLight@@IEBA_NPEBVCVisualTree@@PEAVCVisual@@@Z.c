/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18015015C
 * Callers:
 *     ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@@Z @ 0x1801511F0 (-IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1800C0AFC (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180162380 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

char __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  unsigned int v8; // r8d
  __int64 v9; // rdx
  struct CVisual *i; // rcx
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-18h]

  if ( !a3 )
    return 0;
  v12 = 0;
  if ( (int)CVisual::GetWorldTransform(a3, a2, 3, (__int64)v11, 0LL, 0LL) < 0 )
    return 0;
  v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v11, v6);
  if ( !CMILMatrix::IsInvertibleDeterminant(v7) )
    return 0;
  v8 = *((_DWORD *)this + 40);
  v9 = 0LL;
  if ( v8 )
  {
LABEL_6:
    for ( i = *(struct CVisual **)(*((_QWORD *)this + 17) + 8 * v9); i; i = (struct CVisual *)*((_QWORD *)i + 18) )
    {
      if ( i == a3 )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 < v8 )
          goto LABEL_6;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}
