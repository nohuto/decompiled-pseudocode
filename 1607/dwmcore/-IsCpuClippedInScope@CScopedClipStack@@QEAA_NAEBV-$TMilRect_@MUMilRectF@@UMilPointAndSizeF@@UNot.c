/*
 * XREFs of ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180111FC8
 * Callers:
 *     ?IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z @ 0x1801075A8 (-IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B848 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18009842C (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScopedClipStack::IsCpuClippedInScope(CScopedClipStack *a1, __int128 *a2, __int64 a3)
{
  char v5; // bl
  CScopedClipStack *v6; // rcx
  int TopCpuClipInScope; // eax
  CShape *v8; // rdi
  int v9; // eax
  CShape *v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  if ( CScopedClipStack::HasCpuClipsInScope(a1) )
  {
    v11[0] = 0LL;
    TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v6, v11);
    if ( TopCpuClipInScope < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, 0x179u);
      return v5;
    }
    v8 = v11[0];
    if ( !CShape::IsAxisAlignedRectangle(v11[0]) )
      return 1;
    v9 = (*(__int64 (__fastcall **)(CShape *, CShape **, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v11, 0LL);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x17Fu);
      return v5;
    }
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v11) )
      return 1;
    *(__m128 *)v11 = _mm_add_ps(*(__m128 *)v11, (__m128)_xmm);
    if ( a3 )
      CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)a2, (float *)&v12);
    else
      v12 = *a2;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v11, (float *)&v12) )
      return 1;
  }
  return v5;
}
