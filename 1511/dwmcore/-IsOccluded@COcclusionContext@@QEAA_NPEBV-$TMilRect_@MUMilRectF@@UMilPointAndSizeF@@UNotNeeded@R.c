/*
 * XREFs of ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005505C
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18003EC30 (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F38F0 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180036A10 (-IsFullyCovered@CArrayBasedCoverageSet@@UEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180055C30 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::IsOccluded(__int64 a1, float *a2, __int64 a3, unsigned int a4)
{
  __int128 *v6; // rdx
  char v7; // r8
  __int64 v8; // rbx
  char (__fastcall *v9)(__int64, __int64); // rdi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF

  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 1;
  if ( v7 )
    COcclusionContext::DeviceRectToPageInPixelsRect(a1, v6, &v11);
  else
    v11 = *v6;
  v8 = *(_QWORD *)(a1 + 96);
  v9 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 40LL);
  if ( v9 == CArrayBasedCoverageSet::IsFullyCovered )
    return CArrayBasedCoverageSet::IsFullyCovered(v8, (__int64)&v11);
  else
    return ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))v9)(v8, &v11, a4);
}
