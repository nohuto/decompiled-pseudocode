/*
 * XREFs of ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180073960
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800DC308 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004E010 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180073730 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x180073A60 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CScopedClipStack::IsCpuClippedInScope(CScopedClipStack *a1, const struct MilRectF *a2, CBaseMatrix *a3)
{
  char v5; // bl
  CScopedClipStack *v6; // rcx
  int TopCpuClipInScope; // eax
  CRectangleShape *v8; // rdi
  __int64 (__fastcall *v9)(CRectangleShape *); // rsi
  int TightBounds; // eax
  CShape *v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  if ( CScopedClipStack::HasCpuClipsInScope(a1) )
  {
    v12[0] = 0LL;
    TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v6, v12);
    if ( TopCpuClipInScope < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, 0x167u);
    }
    else
    {
      v8 = v12[0];
      if ( !CShape::IsAxisAlignedRectangle(v12[0]) )
        return 1;
      v9 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)v8 + 24LL);
      if ( v9 == CRectangleShape::GetTightBounds )
        TightBounds = CRectangleShape::GetTightBounds(v8);
      else
        TightBounds = ((__int64 (__fastcall *)(CRectangleShape *, CShape **, _QWORD))v9)(v8, v12, 0LL);
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x16Du);
        return v5;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v12) )
        return 1;
      *(__m128 *)v12 = _mm_add_ps(*(__m128 *)v12, (__m128)_xmm);
      if ( a3 )
        CBaseMatrix::Transform2DBounds(a3, a2, (struct MilRectF *)&v13);
      else
        v13 = *(_OWORD *)a2;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v12, (__int64)&v13) )
        return 1;
    }
  }
  return v5;
}
