/*
 * XREFs of ?IsCloseToTranslateOrScale@CBaseMatrix@@QEBAHXZ @ 0x180003998
 * Callers:
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180006B44 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBaseMatrix::IsCloseToTranslateOrScale(CBaseMatrix *this)
{
  float v1; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
  if ( v1 >= 0.00012207031 )
    return 0LL;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
  if ( v3 >= 0.00012207031 )
    return 0LL;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
  if ( v4 >= 0.00012207031 )
    return 0LL;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 4)) & _xmm);
  if ( v5 >= 0.00012207031 )
    return 0LL;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm);
  if ( v6 >= 0.00012207031 )
    return 0LL;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm);
  if ( v7 >= 0.00012207031 )
    return 0LL;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v8 >= 0.00012207031 )
    return 0LL;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 9)) & _xmm);
  if ( v9 >= 0.00012207031 )
    return 0LL;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm);
  return v10 < 0.00012207031;
}
