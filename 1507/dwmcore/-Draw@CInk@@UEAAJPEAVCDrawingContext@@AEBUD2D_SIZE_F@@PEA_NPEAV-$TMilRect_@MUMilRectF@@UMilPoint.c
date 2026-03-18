/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180114360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1800F20B0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18011478C (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::Draw(__int64 a1, struct ID2DContext **a2)
{
  int D2DInk; // eax
  struct ID2D1Ink *v5; // r14
  unsigned int v6; // edi
  struct ID2D1InkStyle *v7; // rsi
  int v8; // eax
  struct ID2D1InkStyle *v10; // [rsp+30h] [rbp-28h] BYREF
  struct ID2D1Ink *v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  D2DInk = CInk::GetD2DInk((CInk *)a1, a2[47], &v11, &v10);
  v5 = v11;
  v6 = D2DInk;
  v7 = v10;
  if ( D2DInk >= 0 )
  {
    v8 = CDrawingContext::DrawInk((CDrawingContext *)a2, v11, (const struct _D3DCOLORVALUE *)(a1 + 120), v10);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x100u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DInk, 0xFEu);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
