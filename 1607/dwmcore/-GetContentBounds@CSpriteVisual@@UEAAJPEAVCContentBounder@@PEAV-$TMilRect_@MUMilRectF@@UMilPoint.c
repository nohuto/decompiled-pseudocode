/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180138EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051A10 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?AdjustBounds@CDropShadow@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014EEB4 (-AdjustBounds@CDropShadow@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(__int64 a1, struct IDrawingContext **a2, __int64 a3)
{
  int ContentBounds; // eax
  unsigned int v6; // esi

  ContentBounds = CVisual::GetContentBounds(a1, a2, a3);
  v6 = ContentBounds;
  if ( ContentBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ContentBounds, 0xA2u);
  }
  else if ( *(_QWORD *)(a1 + 552) )
  {
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a3) )
    {
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 196);
    }
    CDropShadow::AdjustBounds(*(_QWORD *)(a1 + 552), a3);
  }
  return v6;
}
