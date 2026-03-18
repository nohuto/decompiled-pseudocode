/*
 * XREFs of ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012890
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800DF624 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1800F7408 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1800F77B8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::NotifyVisitedContent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  LONG v6; // xmm0_4
  LONG v7; // eax
  double v8; // xmm0_8
  int v9; // eax
  double v10; // xmm0_8
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v16; // edi
  __int64 v17; // r14
  __int64 v18; // rax
  COverlayContext::OverlayPlaneInfo *v19; // rcx
  struct tagRECT rcDst; // [rsp+30h] [rbp-48h] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  *(float *)&v6 = *(float *)a3 + 6291456.25;
  rcDst.left = v6;
  v7 = v6;
  v8 = *(float *)(a3 + 4);
  rcSrc1.left = v7 << 10 >> 11;
  *(float *)&v8 = v8 + 6291456.25;
  rcDst.left = LODWORD(v8);
  v9 = LODWORD(v8);
  v10 = *(float *)(a3 + 8);
  rcSrc1.top = v9 << 10 >> 11;
  *(float *)&v10 = v10 + 6291456.25;
  rcDst.left = LODWORD(v10);
  v11 = LODWORD(v10);
  LODWORD(v10) = *(_DWORD *)(a3 + 12);
  rcSrc1.right = v11 << 10 >> 11;
  *(float *)&rcDst.left = *(float *)&v10 + 6291456.25;
  for ( rcSrc1.bottom = rcDst.left << 10 >> 11; v3 < *(_DWORD *)(a1 + 160); ++v3 )
  {
    v17 = 240LL * v3;
    v18 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(v18 + v17) != a2
      && *(_BYTE *)(v18 + v17 + 153)
      && !*(_BYTE *)(v18 + v17 + 157)
      && IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v17 + v18 + 68)) )
    {
      v19 = (COverlayContext::OverlayPlaneInfo *)(v17 + *(_QWORD *)(a1 + 136));
      if ( *((_BYTE *)v19 + 155) )
      {
        *((_BYTE *)v19 + 156) = 0;
      }
      else
      {
        COverlayContext::OverlayPlaneInfo::Reset(v19);
        DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(a1 + 136, v3--);
      }
    }
  }
  v12 = a1 + 704;
  v13 = *(unsigned int *)(v12 + 24);
  v14 = v13 + 1;
  if ( (int)v13 + 1 < (unsigned int)v13 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x572u);
    return (unsigned int)v16;
  }
  if ( v14 <= *(_DWORD *)(v12 + 20) )
  {
    *(RECT *)(*(_QWORD *)v12 + 16 * v13) = rcSrc1;
    *(_DWORD *)(v12 + 24) = v14;
    return 0LL;
  }
  *(_QWORD *)&rcDst.left = &rcSrc1;
  v16 = DynArrayImpl<0>::Grow(v12, 16, 1, 0, (__int64)&rcDst);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    goto LABEL_19;
  }
  *(_OWORD *)(*(_QWORD *)v12 + (unsigned int)(16 * (*(_DWORD *)(v12 + 24))++)) = *(_OWORD *)*(_QWORD *)&rcDst.left;
  return (unsigned int)v16;
}
