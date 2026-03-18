/*
 * XREFs of ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180128DDC
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129428 (-IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?IsSufficientIntervalForStats@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@_KPEAM@Z @ 0x1801294B0 (-IsSufficientIntervalForStats@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@_KPEAM@Z.c)
 *     ?IsSufficientPresentCountForEligibility@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@IM@Z @ 0x180129568 (-IsSufficientPresentCountForEligibility@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@IM@Z.c)
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180151F10 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 */

char __fastcall COverlayContext::IsEligibleForOverlays(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  char IsSufficientPresentCountForEligibility; // di
  unsigned __int64 v5; // rbp
  COverlayContext *v6; // rcx
  __int64 v7; // r11
  __int64 v8; // r11
  int v9; // r10d
  __int64 v10; // rax
  float v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = FLOAT_1_0;
  IsSufficientPresentCountForEligibility = 1;
  if ( COverlayContext::IsRevokable(this, a2) )
  {
    IsSufficientPresentCountForEligibility = *((_BYTE *)a2 + 184);
    v5 = *(_QWORD *)(*((_QWORD *)this + 138) + 472LL);
    if ( COverlayContext::IsSufficientIntervalForStats(this, a2, v5, &v12) )
    {
      if ( *((_BYTE *)a2 + 192) && !*((_BYTE *)a2 + 193) )
        CCompositionSurfaceInfo::ForceUpdateRenderingRealization(
          *((CCompositionSurfaceInfo **)a2 + 3),
          *((_QWORD *)a2 + 4));
      v7 = *((_QWORD *)a2 + 3);
      if ( *(_BYTE *)(v7 + 196) )
      {
        return 0;
      }
      else
      {
        IsSufficientPresentCountForEligibility = COverlayContext::IsSufficientPresentCountForEligibility(
                                                   v6,
                                                   a2,
                                                   *(_DWORD *)(v7 + 72),
                                                   v12);
        *(_QWORD *)(v8 + 184) = v5;
        *(_DWORD *)(v8 + 192) = v9;
      }
    }
  }
  else
  {
    v10 = *((_QWORD *)a2 + 3);
    *(_QWORD *)(v10 + 184) = 0LL;
    *(_DWORD *)(v10 + 192) = 0;
  }
  return IsSufficientPresentCountForEligibility;
}
