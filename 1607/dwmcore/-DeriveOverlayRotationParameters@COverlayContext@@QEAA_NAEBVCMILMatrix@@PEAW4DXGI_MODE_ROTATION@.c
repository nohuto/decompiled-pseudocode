/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801282A4
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001569C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z @ 0x180129354 (-IsQualcommRotationWorkaroundNeeded@COverlayContext@@AEAA_NPEBVCMILMatrix@@@Z.c)
 */

char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // r14d
  enum DXGI_MODE_ROTATION v8; // esi
  char v9; // di
  unsigned int v10; // r10d
  int v11; // r11d
  float v12; // xmm2_4
  int v13; // xmm1_4
  float v14; // xmm6_4
  int v15; // xmm5_4
  __int128 v16; // xmm0
  int v17; // xmm1_4
  __int128 v18; // xmm0
  int v19; // xmm1_4
  float v20; // xmm5_4
  _DWORD v22[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v23; // [rsp+38h] [rbp-48h]
  __int128 v24; // [rsp+48h] [rbp-38h]
  int v25; // [rsp+58h] [rbp-28h]
  int v26; // [rsp+5Ch] [rbp-24h]
  unsigned int v27; // [rsp+60h] [rbp-20h]

  v5 = *((_DWORD *)this + 35);
  v8 = DXGI_MODE_ROTATION_IDENTITY;
  v9 = 0;
  if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
  {
    v12 = *(float *)a2;
    if ( *(float *)a2 >= 0.0 && *((float *)a2 + 5) >= 0.0 )
    {
      v9 = v11;
LABEL_31:
      *a3 = v8;
      *a5 = v11;
      *a4 = v10;
      return v9;
    }
    if ( (v5 & 6) == 6 )
    {
      v9 = v11;
      if ( v12 < 0.0 )
        v10 = 2;
      if ( *((float *)a2 + 5) < 0.0 )
        v10 |= v11;
      goto LABEL_31;
    }
    if ( (v5 & 0x8001) != 0
      && v12 < 0.0
      && *((float *)a2 + 5) < 0.0
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, a2) )
    {
      v8 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_29:
      v9 = v11;
LABEL_30:
      LOBYTE(v11) = ((unsigned __int8)v11 & (unsigned __int8)v5) != 0 ? v11 : 0;
      goto LABEL_31;
    }
  }
  else if ( (v5 & 0x8001) != 0 )
  {
    v13 = *((_DWORD *)a2 + 2);
    v14 = *((float *)a2 + 1);
    v15 = *((_DWORD *)a2 + 4);
    v22[1] = *(_DWORD *)a2;
    v22[3] = *((_DWORD *)a2 + 3);
    v16 = *(_OWORD *)((char *)a2 + 24);
    v27 = v10;
    v22[2] = v13;
    v17 = *((_DWORD *)a2 + 5);
    v23 = v16;
    v18 = *(_OWORD *)((char *)a2 + 40);
    v22[4] = v17;
    v19 = *((_DWORD *)a2 + 15);
    v24 = v18;
    v25 = *((_DWORD *)a2 + 14);
    *(float *)v22 = v14;
    v22[5] = v15;
    v26 = v19;
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)v22)
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v22) )
    {
      if ( (v5 & 6) == 6 )
      {
        v9 = v11;
        v8 = DXGI_MODE_ROTATION_ROTATE90;
        if ( v20 > 0.0 )
          v10 = 2;
        if ( v14 < 0.0 )
          v10 |= v11;
        goto LABEL_30;
      }
      if ( v20 > 0.0 && v14 < 0.0 )
      {
        v8 = DXGI_MODE_ROTATION_ROTATE270;
        goto LABEL_29;
      }
      if ( v20 < 0.0 && v14 > 0.0 )
      {
        v8 = DXGI_MODE_ROTATION_ROTATE90;
        goto LABEL_29;
      }
    }
  }
  return v9;
}
