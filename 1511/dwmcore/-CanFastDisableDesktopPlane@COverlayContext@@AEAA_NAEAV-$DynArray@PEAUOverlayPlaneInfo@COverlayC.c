/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x18010FE70
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036B84 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::CanFastDisableDesktopPlane(__int64 a1, __int64 a2)
{
  char v2; // r10
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _BYTE *v6; // r11
  char v7; // al
  float v9[4]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+64h] [rbp+1Ch]

  v2 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = *(_QWORD **)a2;
    v4 = 0LL;
    v5 = *v3 - (_QWORD)v9;
    do
    {
      v9[v4] = (float)*(int *)((char *)&v10 + 4 * v4 + v5);
      ++v4;
    }
    while ( v4 < 4 );
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v9, (float *)(a1 + 40))
      && (v6[161] == v2 || v6[165] != v2) )
    {
      v7 = v2;
      if ( v6[163] != v2 )
        return 1;
      return v7;
    }
  }
  return v2;
}
