/*
 * XREFs of ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048FE0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800492D0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009EB00 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009EC10 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18009EC20 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18003E5F0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003EBA0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180042970 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180042F10 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800433A0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180046820 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x180055D20 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x180055D90 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180055E30 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x180056120 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180056230 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180056280 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800563C0 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800A1618 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A17AC (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x18011FD18 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x18011FE50 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderData::Draw(CRenderData *this, struct IDrawingContext *Blink)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *v3; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct IDrawingContext *v7; // r13
  struct _LIST_ENTRY *Flink; // rcx
  int v9; // r12d
  CDrawingContext *v10; // r15
  int NextItemSafe; // esi
  __int64 (__fastcall *v13)(CDrawingContext *); // rdi
  int v14; // eax
  __int64 (__fastcall *v15)(CDrawingContext *, __int128 *, __int64); // rdi
  int v16; // eax
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned int *(__fastcall *v18)(CDataStreamBlock *__hidden); // rsi
  void *v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  const void *(__fastcall *v21)(CDataStreamBlock *__hidden); // rsi
  __int64 v22; // rax
  struct CGeometry *v23; // rsi
  struct CLegacyMilBrush *v24; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(COcclusionContext *, struct CLegacyMilBrush *, struct CGeometry *); // rdi
  int v27; // eax
  unsigned __int64 v28; // rax
  struct _LIST_ENTRY *v29; // rdx
  __int64 (__fastcall *v30)(__int64, float *); // rdi
  int v31; // eax
  struct CImageSource *v32; // rcx
  __int64 v33; // rax
  struct CAtlasedRects *v34; // rsi
  __int64 (__fastcall *v35)(struct ID2DContext **, struct CAtlasedRects *, struct CImageSource *); // rdi
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rax
  CSolidColorLegacyMilBrush *v40; // rsi
  __int64 (__fastcall *v41)(CDrawingContext *, __m128i *, CSolidColorLegacyMilBrush *, _QWORD); // rdi
  int v42; // eax
  __int64 (__fastcall *v43)(COcclusionContext *, struct CTransform *); // rdi
  int v44; // eax
  __int64 v45; // rax
  __int64 (__fastcall *v46)(COcclusionContext *); // rdi
  int v47; // eax
  int (__fastcall ***v48)(_QWORD, GUID *, CGdiSpriteBitmap **); // rdi
  __int64 (__fastcall *v49)(_QWORD, _QWORD, _QWORD, _QWORD); // rsi
  int v50; // eax
  __int64 (__fastcall *v51)(CDrawingContext *, struct CResource *); // rdi
  int v52; // eax
  __int64 v53; // rdi
  int v54; // eax
  struct _LIST_ENTRY *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rsi
  int v58; // eax
  int v59; // eax
  unsigned int v60; // [rsp+20h] [rbp-E0h]
  unsigned int v61[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v62; // [rsp+38h] [rbp-C8h] BYREF
  void *v63; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h]
  struct CImageSource *v66; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *v67; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY **v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v70; // [rsp+78h] [rbp-88h]
  unsigned int v71; // [rsp+80h] [rbp-80h]
  struct CRenderDataDrawFrame *v72; // [rsp+88h] [rbp-78h] BYREF
  struct IDrawingContext *v73; // [rsp+90h] [rbp-70h] BYREF
  __int128 v74; // [rsp+98h] [rbp-68h] BYREF
  __m128i v75; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v76; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v78; // [rsp+D8h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 11);
  v3 = (struct _LIST_ENTRY *)((char *)this + 40);
  v65 = v2;
  v5 = *((_QWORD *)this + 7);
  v6 = 0LL;
  v7 = Blink;
  if ( v5 )
  {
    Blink = (struct IDrawingContext *)v3->Blink;
    v55 = (struct _LIST_ENTRY *)(v5 + 8);
    v55->Flink = v3;
    v55->Blink = (struct _LIST_ENTRY *)Blink;
    if ( *(struct _LIST_ENTRY **)Blink != v3 )
      __fastfail(3u);
    *(_QWORD *)Blink = v55;
    v3->Blink = v55;
    v3[1].Flink = 0LL;
  }
  Flink = v3->Flink;
  v9 = 0;
  v10 = v7;
  v67 = v3;
  v68 = 0LL;
  v73 = v7;
  v72 = 0LL;
  v62 = 0;
  if ( v3 == Flink )
  {
    NextItemSafe = 1;
  }
  else
  {
    if ( Flink )
    {
      p_Blink = &Flink[-1].Blink;
      v68 = &Flink[-1].Blink;
    }
    else
    {
      p_Blink = 0LL;
      v68 = 0LL;
    }
    v18 = (unsigned int *(__fastcall *)(CDataStreamBlock *__hidden))(*p_Blink)->Blink;
    if ( v18 == CDataStreamBlock::GetWrittenSize )
      v19 = (char *)p_Blink + 28;
    else
      v19 = (void *)((__int64 (__fastcall *)(struct _LIST_ENTRY **, struct IDrawingContext *, _QWORD))v18)(
                      p_Blink,
                      Blink,
                      0LL);
    v20 = *p_Blink;
    v63 = v19;
    v21 = (const void *(__fastcall *)(CDataStreamBlock *__hidden))v20[1].Flink;
    if ( v21 == CDataStreamBlock::GetData )
      v22 = (__int64)(p_Blink + 4);
    else
      v22 = ((__int64 (__fastcall *)(struct _LIST_ENTRY **, struct IDrawingContext *, __int64))v21)(p_Blink, Blink, v6);
    v69 = v22;
    v70 = (unsigned int *)v22;
    v71 = *(_DWORD *)v63;
    NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v69, &v64, &v63, v61);
    if ( NextItemSafe == 1 && v68[1] != v67 )
      NextItemSafe = -2147467259;
  }
  if ( NextItemSafe < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NextItemSafe, 0x1D1u);
    return (unsigned int)NextItemSafe;
  }
  if ( NextItemSafe )
  {
LABEL_6:
    if ( NextItemSafe == 1 )
LABEL_7:
      NextItemSafe = 0;
    goto LABEL_8;
  }
  *(_QWORD *)v61 = v63;
  while ( 1 )
  {
    v13 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v10 + 120LL);
    if ( v13 == CDrawingContext::ApplyRenderState )
      v14 = CDrawingContext::ApplyRenderState(v10);
    else
      v14 = ((__int64 (__fastcall *)(CDrawingContext *, __int64 (__fastcall *)(CDrawingContext *), _QWORD))v13)(
              v10,
              CDrawingContext::ApplyRenderState,
              0LL);
    NextItemSafe = v14;
    if ( v14 < 0 )
    {
      v60 = 480;
      goto LABEL_129;
    }
    if ( v64 == 216 )
      break;
    if ( v64 == 211 )
    {
      v77 = *(_OWORD *)(*(_QWORD *)v61 + 4LL);
      v30 = *(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v10 + 96LL);
      if ( v30 == COcclusionContext::DrawOcclusionRectangle )
        v31 = COcclusionContext::DrawOcclusionRectangle((__int64)v10, (float *)&v77);
      else
        v31 = ((__int64 (__fastcall *)(CDrawingContext *, __int128 *, _QWORD))v30)(v10, &v77, 0LL);
      NextItemSafe = v31;
      if ( v31 < 0 )
      {
        v60 = 623;
        goto LABEL_129;
      }
    }
    else if ( v64 == 210 )
    {
      v32 = *(struct CImageSource **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 8LL));
      if ( v32 )
        v32 = (struct CImageSource *)((char *)v32 - 16);
      v33 = *(unsigned int *)(*(_QWORD *)v61 + 4LL);
      v66 = v32;
      v34 = *(struct CAtlasedRects **)(v2 + 8 * v33);
      v35 = *(__int64 (__fastcall **)(struct ID2DContext **, struct CAtlasedRects *, struct CImageSource *))(*(_QWORD *)v10 + 80LL);
      if ( v35 == CDrawingContext::DrawAtlasedRects )
        v36 = CDrawingContext::DrawAtlasedRects((struct ID2DContext **)v10, v34, v32);
      else
        v36 = v35((struct ID2DContext **)v10, v34, v66);
      NextItemSafe = v36;
      if ( v36 < 0 )
      {
        v60 = 611;
        goto LABEL_129;
      }
    }
    else
    {
      switch ( v64 )
      {
        case 0xCFu:
          v51 = *(__int64 (__fastcall **)(CDrawingContext *, struct CResource *))(*(_QWORD *)v10 + 48LL);
          if ( v51 == CDrawingContext::DrawBitmap )
            v52 = CDrawingContext::DrawBitmap(
                    v10,
                    *(struct CResource **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)));
          else
            v52 = v51(v10, *(struct CResource **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)));
          NextItemSafe = v52;
          if ( v52 >= 0 )
            break;
          v60 = 583;
          goto LABEL_129;
        case 0xD1u:
          v56 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 8LL));
          if ( v56 )
            v57 = v56 - 16;
          else
            v57 = 0LL;
          v58 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64))(*(_QWORD *)v10 + 72LL))(
                  v10,
                  *(_QWORD *)(v65 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)),
                  v57);
          NextItemSafe = v58;
          if ( v58 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x255u);
            goto LABEL_8;
          }
          v2 = v65;
          break;
        case 0xD4u:
          (*(void (__fastcall **)(CDrawingContext *, _QWORD))(*(_QWORD *)v10 + 88LL))(
            v10,
            *(_QWORD *)(v65 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)));
          v2 = v65;
          break;
        case 0xD5u:
          v74 = *(_OWORD *)(*(_QWORD *)v61 + 4LL);
          v15 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, __int64))(*(_QWORD *)v10 + 16LL);
          if ( (char *)v15 == (char *)COcclusionContext::DrawSolidRectangle )
          {
            v16 = COcclusionContext::DrawSolidRectangle((__int64)v10, (float *)&v74, *(_QWORD *)v61 + 20LL);
          }
          else if ( (char *)v15 == (char *)CDrawingContext::DrawSolidRectangle )
          {
            v16 = CDrawingContext::DrawSolidRectangle(
                    (CRegionShape **)v10,
                    &v74,
                    (const struct _D3DCOLORVALUE *)(*(_QWORD *)v61 + 20LL));
          }
          else
          {
            v16 = v15(v10, &v74, *(_QWORD *)v61 + 20LL);
          }
          NextItemSafe = v16;
          if ( v16 >= 0 )
            break;
          v60 = 526;
          goto LABEL_129;
        case 0xD6u:
          v53 = *(unsigned int *)(*(_QWORD *)v61 + 4LL);
          v78 = *(_OWORD *)(*(_QWORD *)v61 + 8LL);
          v2 = v65;
          v54 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD))(*(_QWORD *)v10 + 40LL))(
                  v10,
                  *(_QWORD *)(v65 + 8 * v53),
                  &v78,
                  *(_QWORD *)v61 + 28LL,
                  *(_DWORD *)(*(_QWORD *)v61 + 24LL));
          NextItemSafe = v54;
          if ( v54 >= 0 )
            break;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x23Bu);
          goto LABEL_8;
        case 0xD7u:
          v39 = *(unsigned int *)(*(_QWORD *)v61 + 20LL);
          v75 = *(__m128i *)(*(_QWORD *)v61 + 4LL);
          v40 = *(CSolidColorLegacyMilBrush **)(v2 + 8 * v39);
          v41 = *(__int64 (__fastcall **)(CDrawingContext *, __m128i *, CSolidColorLegacyMilBrush *, _QWORD))(*(_QWORD *)v10 + 8LL);
          if ( (char *)v41 == (char *)COcclusionContext::DrawRectangle )
          {
            v42 = COcclusionContext::DrawRectangle((__int64)v10, (float *)v75.m128i_i32, v40, 0LL);
          }
          else if ( (char *)v41 == (char *)CDrawingContext::DrawRectangle )
          {
            v42 = CDrawingContext::DrawRectangle(v10, &v75, v40, 0LL);
          }
          else
          {
            v42 = v41(v10, &v75, v40, 0LL);
          }
          NextItemSafe = v42;
          if ( v42 >= 0 )
            break;
          v60 = 513;
          goto LABEL_129;
        case 0xD9u:
          v76 = *(_OWORD *)(*(_QWORD *)v61 + 4LL);
          v48 = *(int (__fastcall ****)(_QWORD, GUID *, CGdiSpriteBitmap **))(v2
                                                                            + 8LL
                                                                            * *(unsigned int *)(*(_QWORD *)v61 + 20LL));
          v49 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL);
          if ( (char *)v49 == (char *)COcclusionContext::DrawImage )
          {
            v50 = COcclusionContext::DrawImage((__int64)v10, v48, (float *)&v76, 0LL);
          }
          else if ( (char *)v49 == (char *)CDrawingContext::DrawImage )
          {
            v50 = CDrawingContext::DrawImage(v10, (__int64)v48, &v76, 0LL);
          }
          else
          {
            v50 = v49(v10, *(_QWORD *)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 20LL)), &v76, 0LL);
          }
          NextItemSafe = v50;
          if ( v50 >= 0 )
            break;
          v60 = 556;
          goto LABEL_129;
        case 0xDAu:
          v43 = *(__int64 (__fastcall **)(COcclusionContext *, struct CTransform *))(*(_QWORD *)v10 + 112LL);
          if ( v43 == CDrawingContext::PushTransform )
          {
            v44 = CDrawingContext::PushTransform(
                    v10,
                    *(struct CTransform **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)));
          }
          else if ( v43 == COcclusionContext::PushTransform )
          {
            v44 = COcclusionContext::PushTransform(
                    v10,
                    *(struct CTransform **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)));
          }
          else
          {
            v44 = v43(v10, *(struct CTransform **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL)));
          }
          NextItemSafe = v44;
          if ( v44 < 0 )
          {
            v60 = 651;
            goto LABEL_129;
          }
          v62 = ++v9;
          break;
        case 0xDBu:
          if ( v9 <= 0 )
          {
            v59 = CRenderData::EndBoundingFrame(this, &v62, &v72, &v73, v7);
            NextItemSafe = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x2A7u);
              goto LABEL_8;
            }
            v10 = v73;
            v9 = v62;
          }
          else
          {
            v45 = *(_QWORD *)v10;
            v62 = --v9;
            v46 = *(__int64 (__fastcall **)(COcclusionContext *))(v45 + 104);
            if ( v46 == CDrawingContext::Pop )
            {
              v47 = CDrawingContext::Pop(v10);
            }
            else if ( v46 == COcclusionContext::Pop )
            {
              v47 = COcclusionContext::Pop(v10);
            }
            else
            {
              v47 = v46(v10);
            }
            NextItemSafe = v47;
            if ( v47 < 0 )
            {
              v60 = 671;
              goto LABEL_129;
            }
          }
          break;
        default:
          goto LABEL_35;
      }
    }
LABEL_34:
    if ( NextItemSafe == 1 )
      goto LABEL_7;
LABEL_35:
    NextItemSafe = -2147467259;
    v28 = v69 + v71 - (_QWORD)v70;
    if ( v28 )
    {
      if ( v28 >= 8 )
      {
        v37 = *v70;
        if ( (unsigned int)v37 >= 8 && (v37 & 3) == 0 && v37 <= v28 )
        {
          v38 = v70[1];
          *(_QWORD *)v61 = v70 + 1;
          v70 = (unsigned int *)((char *)v70 + (unsigned int)v37);
          NextItemSafe = 0;
          v64 = v38;
          v63 = *(void **)v61;
        }
      }
    }
    else
    {
      NextItemSafe = 1;
      *(_QWORD *)v61 = 0LL;
      v63 = 0LL;
      v29 = v68[1];
      if ( v29 != v67 )
      {
        CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v67, v29);
        NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v69, &v64, &v63, v61);
        if ( NextItemSafe == 1 && v68[1] != v67 )
          NextItemSafe = -2147467259;
        *(_QWORD *)v61 = v63;
      }
    }
    if ( NextItemSafe < 0 )
    {
      v60 = 705;
      goto LABEL_129;
    }
    if ( NextItemSafe )
      goto LABEL_6;
  }
  v23 = *(struct CGeometry **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 8LL));
  v24 = *(struct CLegacyMilBrush **)(v2 + 8LL * *(unsigned int *)(*(_QWORD *)v61 + 4LL));
  v25 = *(_QWORD *)v10;
  v66 = v24;
  v26 = *(__int64 (__fastcall **)(COcclusionContext *, struct CLegacyMilBrush *, struct CGeometry *))(v25 + 24);
  if ( v26 == COcclusionContext::DrawGeometry )
  {
    v27 = COcclusionContext::DrawGeometry(v10, v24, v23);
  }
  else if ( v26 == CDrawingContext::DrawGeometry )
  {
    v27 = CDrawingContext::DrawGeometry(v10, v24, v23);
  }
  else
  {
    v27 = v26(v10, v66, v23);
  }
  NextItemSafe = v27;
  if ( v27 >= 0 )
    goto LABEL_34;
  v60 = 540;
LABEL_129:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, NextItemSafe, v60);
LABEL_8:
  if ( v72 )
    CRenderDataDrawFrame::Release(v72);
  return (unsigned int)NextItemSafe;
}
