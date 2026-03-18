/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x18000774C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ @ 0x1800140EC (-IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // edi
  enum DXGI_MODE_ROTATION v8; // ebx
  __int128 *v9; // rdx
  char v10; // r8
  char v11; // r9
  unsigned int v12; // r10d
  int v13; // r11d
  float v14; // xmm2_4
  __int128 v16; // xmm1
  unsigned int v17; // xmm5_4
  unsigned int v18; // xmm4_4
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  float v21; // xmm4_4
  float v22; // xmm5_4
  __int128 v23; // [rsp+20h] [rbp-78h] BYREF
  __int128 v24; // [rsp+30h] [rbp-68h]
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int128 v26; // [rsp+50h] [rbp-48h]

  v5 = *((_DWORD *)this + 26);
  v8 = DXGI_MODE_ROTATION_IDENTITY;
  if ( (unsigned int)CBaseMatrix::IsCloseToTranslateOrScale(a2) )
  {
    v14 = *(float *)v9;
    if ( *(float *)v9 >= 0.0 && *((float *)v9 + 5) >= 0.0 )
    {
      v11 = v13;
LABEL_5:
      *a3 = v8;
      *a4 = v12;
      *a5 = v13;
      return v11;
    }
    if ( (v5 & 6) == 6 )
    {
      v11 = v13;
      if ( v14 < 0.0 )
        v12 = 2;
      if ( *((float *)v9 + 5) < 0.0 )
        v12 |= v13;
      goto LABEL_5;
    }
    if ( v10 && v14 < 0.0 && *((float *)v9 + 5) < 0.0 )
    {
      v8 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_29:
      v11 = v13;
LABEL_30:
      LOBYTE(v13) = ((unsigned __int8)v13 & (unsigned __int8)v5) != 0 ? v13 : 0;
      goto LABEL_5;
    }
  }
  else if ( v10 )
  {
    v16 = v9[1];
    v17 = *((_DWORD *)v9 + 1);
    v18 = *((_DWORD *)v9 + 4);
    v23 = *v9;
    v19 = v9[2];
    v24 = v16;
    v20 = v9[3];
    v25 = v19;
    LODWORD(v19) = *(_DWORD *)v9;
    v26 = v20;
    *(_QWORD *)&v24 = __PAIR64__(v18, *((_DWORD *)v9 + 5));
    *(_QWORD *)&v23 = __PAIR64__(v19, v17);
    if ( (unsigned int)CBaseMatrix::IsCloseToTranslateOrScale((CBaseMatrix *)&v23) )
    {
      if ( (v5 & 6) == 6 )
      {
        v11 = v13;
        v8 = DXGI_MODE_ROTATION_ROTATE90;
        if ( v21 > 0.0 )
          v12 = 2;
        if ( v22 < 0.0 )
          v12 |= v13;
        goto LABEL_30;
      }
      if ( v21 > 0.0 && v22 < 0.0 )
      {
        v8 = DXGI_MODE_ROTATION_ROTATE270;
        goto LABEL_29;
      }
      if ( v21 < 0.0 && v22 > 0.0 )
      {
        v8 = DXGI_MODE_ROTATION_ROTATE90;
        goto LABEL_29;
      }
    }
  }
  return v11;
}
