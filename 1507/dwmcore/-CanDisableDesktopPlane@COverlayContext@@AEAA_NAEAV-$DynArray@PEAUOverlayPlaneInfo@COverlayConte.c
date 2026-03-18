/*
 * XREFs of ?CanDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F61CC
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_NPEA_N2@Z @ 0x1800F63E0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverla.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DE38 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::CanDisableDesktopPlane(__int64 a1, __int64 a2)
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
      && (v6[153] == v2 || v6[157] != v2) )
    {
      v7 = v2;
      if ( v6[155] != v2 )
        return 1;
      return v7;
    }
  }
  return v2;
}
