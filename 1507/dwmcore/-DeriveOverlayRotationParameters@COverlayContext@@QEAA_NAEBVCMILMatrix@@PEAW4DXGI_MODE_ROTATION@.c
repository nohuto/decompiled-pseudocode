/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180006B44
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004720 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV-$CMa.c)
 * Callees:
 *     ?IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ @ 0x180003998 (-IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  enum DXGI_MODE_ROTATION v5; // ebx
  bool v7; // di
  __int128 *v9; // rdx
  float *v10; // rcx
  char v11; // r9
  __int16 v12; // r11
  unsigned int v13; // edx
  __int128 v15; // xmm1
  unsigned int v16; // xmm4_4
  unsigned int v17; // xmm5_4
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  float v20; // xmm4_4
  float v21; // xmm5_4
  __int128 v22; // [rsp+20h] [rbp-78h] BYREF
  __int128 v23; // [rsp+30h] [rbp-68h]
  __int128 v24; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+50h] [rbp-48h]

  v5 = DXGI_MODE_ROTATION_IDENTITY;
  v7 = 1;
  if ( CBaseMatrix::IsCloseToTranslateOrScale(a2) )
  {
    v13 = 0;
    v11 = 1;
    if ( *v10 < 0.0 )
      v13 = 2;
    if ( v10[5] < 0.0 )
      v13 |= 1u;
  }
  else
  {
    if ( (v12 & 0x8001) == 0 )
      return v11;
    v15 = v9[1];
    v16 = *((_DWORD *)v9 + 1);
    v17 = *((_DWORD *)v9 + 4);
    v22 = *v9;
    v18 = v9[2];
    v23 = v15;
    v19 = v9[3];
    v24 = v18;
    LODWORD(v18) = *(_DWORD *)v9;
    v25 = v19;
    *(_QWORD *)&v23 = __PAIR64__(v17, *((_DWORD *)v9 + 5));
    *(_QWORD *)&v22 = __PAIR64__(v18, v16);
    if ( !CBaseMatrix::IsCloseToTranslateOrScale((CBaseMatrix *)&v22) )
      return v11;
    v11 = 1;
    v5 = DXGI_MODE_ROTATION_ROTATE90;
    v13 = 0;
    v7 = (v12 & 1) != 0;
    if ( v21 > 0.0 )
      v13 = 2;
    if ( v20 < 0.0 )
      v13 |= 1u;
  }
  if ( (v12 & 4) == 0 && (v13 & 2) != 0 || (v12 & 2) == 0 && (v13 & 1) != 0 )
    return 0;
  *a3 = v5;
  *a4 = v13;
  *a5 = v7;
  return v11;
}
