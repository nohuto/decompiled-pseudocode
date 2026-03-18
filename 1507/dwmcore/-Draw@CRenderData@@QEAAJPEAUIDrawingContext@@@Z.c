/*
 * XREFs of ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800365B0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180036880 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004F2B0 (-GetBounds@CRenderData@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004F3B0 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18004F3C0 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18001FE90 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18001FF00 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18001FF90 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020310 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180020410 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x180020450 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020570 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x180029720 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180029FB0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x18002D600 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x18002DB20 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x18002DEE0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180030940 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800515EC (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180051768 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x1801032E4 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x18010341C (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderData::Draw(CRenderData *this, struct _LIST_ENTRY *a2)
{
  __int64 v2; // rsi
  struct IDrawingContext *v3; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct IDrawingContext *v7; // r13
  struct IDrawingContext *v8; // rcx
  int v9; // r12d
  CDrawingContext *v10; // r15
  int NextItemSafe; // ebx
  unsigned int *v13; // rdi
  __int64 (__fastcall *v14)(CDrawingContext *); // rbx
  int v15; // eax
  struct CGeometry *v16; // rcx
  __int64 v17; // rax
  struct CBrush *v18; // rdx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(COcclusionContext *, struct CBrush *, struct CGeometry *); // rbx
  int v21; // eax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  unsigned int *(__fastcall *v24)(CDataStreamBlock *__hidden); // rdi
  void *v25; // rax
  __int64 v26; // rcx
  const void *(__fastcall *v27)(CDataStreamBlock *__hidden); // rdi
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, __int64); // rbx
  int v30; // eax
  unsigned __int64 v31; // rax
  struct CImageSource *v32; // rcx
  __int64 v33; // rax
  struct CAtlasedRects *v34; // rdi
  __int64 (__fastcall *v35)(CDrawingContext *, struct CAtlasedRects *, struct CImageSource *); // rbx
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rax
  CSolidColorBrush *v40; // rbx
  __int64 (__fastcall *v41)(CDrawingContext *, const __m128i *, struct CBrush *, __int64); // rax
  int v42; // eax
  __int64 (__fastcall *v43)(CDrawingContext *, __int128 *, unsigned int *); // rbx
  int v44; // eax
  struct CTransform *v45; // rcx
  __int64 v46; // rax
  __int64 (__fastcall *v47)(COcclusionContext *, struct CTransform *); // rbx
  int v48; // eax
  __int64 v49; // rax
  __int64 (__fastcall *v50)(COcclusionContext *); // rbx
  int v51; // eax
  struct CResource *v52; // rcx
  __int64 v53; // rax
  __int64 (__fastcall *v54)(CDrawingContext *, struct CResource *, __int128 *, _QWORD); // rbx
  int v55; // eax
  struct CResource *v56; // rcx
  __int64 v57; // rax
  __int64 (__fastcall *v58)(CDrawingContext *, struct CResource *); // rbx
  int v59; // eax
  __int128 v60; // xmm0
  char *v61; // rbx
  __int64 v62; // rdi
  int v63; // eax
  int v64; // eax
  struct _LIST_ENTRY *v65; // rcx
  __int64 v66; // rcx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  unsigned int v70; // [rsp+20h] [rbp-E0h]
  unsigned int v71[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *v72; // [rsp+38h] [rbp-C8h] BYREF
  struct CImageSource *v73; // [rsp+40h] [rbp-C0h]
  int v74; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v75; // [rsp+4Ch] [rbp-B4h] BYREF
  struct CResource *v76; // [rsp+50h] [rbp-B0h]
  struct IDrawingContext *v77; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v80; // [rsp+70h] [rbp-90h]
  unsigned int v81; // [rsp+78h] [rbp-88h]
  struct CRenderDataDrawFrame *v82; // [rsp+80h] [rbp-80h] BYREF
  __int64 v83; // [rsp+88h] [rbp-78h]
  struct IDrawingContext *v84; // [rsp+90h] [rbp-70h] BYREF
  __int128 v85; // [rsp+98h] [rbp-68h] BYREF
  __int128 v86; // [rsp+A8h] [rbp-58h] BYREF
  __m128i v87; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v88; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v89; // [rsp+D8h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 11);
  v3 = (CRenderData *)((char *)this + 40);
  v83 = v2;
  v5 = *((_QWORD *)this + 7);
  v6 = 0LL;
  v7 = (struct IDrawingContext *)a2;
  if ( v5 )
  {
    a2 = (struct _LIST_ENTRY *)*((_QWORD *)v3 + 1);
    v65 = (struct _LIST_ENTRY *)(v5 + 8);
    v65->Flink = (struct _LIST_ENTRY *)v3;
    v65->Blink = a2;
    if ( (struct IDrawingContext *)a2->Flink != v3 )
      __fastfail(3u);
    a2->Flink = v65;
    *((_QWORD *)v3 + 1) = v65;
    *((_QWORD *)v3 + 2) = 0LL;
  }
  v8 = *(struct IDrawingContext **)v3;
  v9 = 0;
  v10 = v7;
  v77 = v3;
  v78 = 0LL;
  v84 = v7;
  v82 = 0LL;
  v74 = 0;
  if ( v3 == v8 )
  {
    NextItemSafe = 1;
  }
  else
  {
    if ( v8 )
      v22 = (_QWORD *)((char *)v8 - 8);
    else
      v22 = 0LL;
    v23 = *v22;
    v78 = v22;
    v24 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(v23 + 8);
    if ( v24 == CDataStreamBlock::GetWrittenSize )
      v25 = (char *)v22 + 28;
    else
      v25 = (void *)((__int64 (__fastcall *)(_QWORD *, struct _LIST_ENTRY *, _QWORD))v24)(v22, a2, 0LL);
    v26 = *v22;
    v72 = v25;
    v27 = *(const void *(__fastcall **)(CDataStreamBlock *__hidden))(v26 + 16);
    if ( v27 == CDataStreamBlock::GetData )
      v28 = (__int64)(v22 + 4);
    else
      v28 = ((__int64 (__fastcall *)(_QWORD *, struct _LIST_ENTRY *, __int64))v27)(v22, a2, v6);
    v79 = v28;
    v80 = (unsigned int *)v28;
    v81 = *(_DWORD *)v72;
    NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v79, &v75, &v72, v71);
    if ( NextItemSafe == 1 && (struct IDrawingContext *)v78[1] != v77 )
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
  v13 = (unsigned int *)v72;
  *(_QWORD *)v71 = v72;
  while ( 1 )
  {
    v14 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v10 + 120LL);
    if ( v14 == CDrawingContext::ApplyRenderState )
      v15 = CDrawingContext::ApplyRenderState(v10);
    else
      v15 = ((__int64 (__fastcall *)(CDrawingContext *, struct _LIST_ENTRY *, _QWORD))v14)(v10, a2, 0LL);
    NextItemSafe = v15;
    if ( v15 < 0 )
    {
      v70 = 480;
      goto LABEL_132;
    }
    if ( v75 == 204 )
      break;
    if ( v75 == 203 )
    {
      v32 = *(struct CImageSource **)(v2 + 8LL * v13[2]);
      if ( v32 )
        v32 = (struct CImageSource *)((char *)v32 - 16);
      v33 = v13[1];
      v73 = v32;
      v34 = *(struct CAtlasedRects **)(v2 + 8 * v33);
      v35 = *(__int64 (__fastcall **)(CDrawingContext *, struct CAtlasedRects *, struct CImageSource *))(*(_QWORD *)v10 + 80LL);
      if ( v35 == CDrawingContext::DrawAtlasedRects )
        v36 = CDrawingContext::DrawAtlasedRects(v10, v34, v32);
      else
        v36 = v35(v10, v34, v73);
      NextItemSafe = v36;
      if ( v36 < 0 )
      {
        v70 = 611;
        goto LABEL_132;
      }
      v13 = *(unsigned int **)v71;
    }
    else
    {
      switch ( v75 )
      {
        case 0xC8u:
          v56 = *(struct CResource **)(v2 + 8LL * v13[1]);
          v57 = *(_QWORD *)v10;
          v76 = v56;
          v58 = *(__int64 (__fastcall **)(CDrawingContext *, struct CResource *))(v57 + 48);
          if ( v58 == CDrawingContext::DrawBitmap )
            v59 = CDrawingContext::DrawBitmap(v10, v56);
          else
            v59 = v58(v10, v76);
          NextItemSafe = v59;
          if ( v59 >= 0 )
            break;
          v70 = 583;
          goto LABEL_132;
        case 0xCAu:
          v66 = *(_QWORD *)(v2 + 8LL * v13[2]);
          if ( v66 )
            v73 = (struct CImageSource *)(v66 - 16);
          else
            v73 = 0LL;
          v67 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, struct CImageSource *))(*(_QWORD *)v10 + 72LL))(
                  v10,
                  *(_QWORD *)(v2 + 8LL * v13[1]),
                  v73);
          NextItemSafe = v67;
          if ( v67 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x255u);
            goto LABEL_8;
          }
          v13 = *(unsigned int **)v71;
          break;
        case 0xCDu:
          v64 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD))(*(_QWORD *)v10 + 88LL))(
                  v10,
                  *(_QWORD *)(v2 + 8LL * v13[1]));
          NextItemSafe = v64;
          if ( v64 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x27Bu);
            goto LABEL_8;
          }
          v13 = *(unsigned int **)v71;
          break;
        case 0xCEu:
          v86 = *(_OWORD *)(v13 + 1);
          v43 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, unsigned int *))(*(_QWORD *)v10 + 16LL);
          if ( (char *)v43 == (char *)COcclusionContext::DrawSolidRectangle )
          {
            v44 = COcclusionContext::DrawSolidRectangle((__int64)v10, (__int64)&v86, (__int64)(v13 + 5));
          }
          else if ( (char *)v43 == (char *)CDrawingContext::DrawSolidRectangle )
          {
            v44 = CDrawingContext::DrawSolidRectangle(v10, &v86, (const struct _D3DCOLORVALUE *)(v13 + 5));
          }
          else
          {
            v44 = v43(v10, &v86, v13 + 5);
          }
          NextItemSafe = v44;
          if ( v44 >= 0 )
            break;
          v70 = 526;
          goto LABEL_132;
        case 0xCFu:
          v60 = *(_OWORD *)(v13 + 2);
          v61 = (char *)(v13 + 7);
          v62 = v13[1];
          v89 = v60;
          v63 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int128 *, char *, _DWORD))(*(_QWORD *)v10 + 40LL))(
                  v10,
                  *(_QWORD *)(v83 + 8 * v62),
                  &v89,
                  v61,
                  *(_DWORD *)(*(_QWORD *)v71 + 24LL));
          NextItemSafe = v63;
          if ( v63 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x23Bu);
            goto LABEL_8;
          }
          v2 = v83;
          v13 = *(unsigned int **)v71;
          break;
        case 0xD0u:
          v39 = v13[5];
          v87 = *(__m128i *)(v13 + 1);
          v40 = *(CSolidColorBrush **)(v2 + 8 * v39);
          v41 = *(__int64 (__fastcall **)(CDrawingContext *, const __m128i *, struct CBrush *, __int64))(*(_QWORD *)v10 + 8LL);
          v73 = (struct CImageSource *)v41;
          if ( (char *)v41 == (char *)COcclusionContext::DrawRectangle )
          {
            v42 = COcclusionContext::DrawRectangle((__int64)v10, (__int64)&v87, v40, 0LL);
          }
          else if ( v41 == CDrawingContext::DrawRectangle )
          {
            v42 = CDrawingContext::DrawRectangle(v10, &v87, v40, 0LL);
          }
          else
          {
            v42 = ((__int64 (__fastcall *)(CDrawingContext *, __m128i *, CSolidColorBrush *, _QWORD))v73)(
                    v10,
                    &v87,
                    v40,
                    0LL);
          }
          NextItemSafe = v42;
          if ( v42 >= 0 )
            break;
          v70 = 513;
          goto LABEL_132;
        case 0xD1u:
          v16 = *(struct CGeometry **)(v2 + 8LL * v13[2]);
          v17 = v13[1];
          v73 = v16;
          v18 = *(struct CBrush **)(v2 + 8 * v17);
          v19 = *(_QWORD *)v10;
          v76 = v18;
          v20 = *(__int64 (__fastcall **)(COcclusionContext *, struct CBrush *, struct CGeometry *))(v19 + 24);
          if ( v20 == COcclusionContext::DrawGeometry )
          {
            v21 = COcclusionContext::DrawGeometry(v10, v18, v16);
          }
          else if ( v20 == CDrawingContext::DrawGeometry )
          {
            v21 = CDrawingContext::DrawGeometry(v10, v18, v16);
          }
          else
          {
            v21 = v20(v10, v76, v73);
          }
          NextItemSafe = v21;
          if ( v21 >= 0 )
            break;
          v70 = 540;
          goto LABEL_132;
        case 0xD2u:
          v85 = *(_OWORD *)(v13 + 1);
          v52 = *(struct CResource **)(v2 + 8LL * v13[5]);
          v53 = *(_QWORD *)v10;
          v76 = v52;
          v54 = *(__int64 (__fastcall **)(CDrawingContext *, struct CResource *, __int128 *, _QWORD))(v53 + 32);
          if ( (char *)v54 == (char *)COcclusionContext::DrawImage )
          {
            v55 = COcclusionContext::DrawImage(
                    (__int64)v10,
                    (int (__fastcall ***)(_QWORD, GUID *, CGdiSpriteBitmap **))v52,
                    (__int64)&v85,
                    0LL);
          }
          else if ( (char *)v54 == (char *)CDrawingContext::DrawImage )
          {
            v55 = CDrawingContext::DrawImage(v10, (__int64)v52, &v85, 0LL);
          }
          else
          {
            v55 = v54(v10, v76, &v85, 0LL);
          }
          NextItemSafe = v55;
          if ( v55 >= 0 )
            break;
          v70 = 556;
          goto LABEL_132;
        case 0xD3u:
          v45 = *(struct CTransform **)(v2 + 8LL * v13[1]);
          v46 = *(_QWORD *)v10;
          v76 = v45;
          v47 = *(__int64 (__fastcall **)(COcclusionContext *, struct CTransform *))(v46 + 112);
          if ( v47 == CDrawingContext::PushTransform )
          {
            v48 = CDrawingContext::PushTransform(v10, v45);
          }
          else if ( v47 == COcclusionContext::PushTransform )
          {
            v48 = COcclusionContext::PushTransform(v10, v45);
          }
          else
          {
            v48 = v47(v10, v76);
          }
          NextItemSafe = v48;
          if ( v48 < 0 )
          {
            v70 = 647;
            goto LABEL_132;
          }
          v74 = ++v9;
          break;
        case 0xD4u:
          if ( v9 <= 0 )
          {
            v68 = CRenderData::EndBoundingFrame(this, &v74, &v82, &v84, v7);
            NextItemSafe = v68;
            if ( v68 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x2A3u);
              goto LABEL_8;
            }
            v10 = v84;
            v9 = v74;
          }
          else
          {
            v49 = *(_QWORD *)v10;
            v74 = --v9;
            v50 = *(__int64 (__fastcall **)(COcclusionContext *))(v49 + 104);
            if ( v50 == CDrawingContext::Pop )
            {
              v51 = CDrawingContext::Pop(v10);
            }
            else if ( v50 == COcclusionContext::Pop )
            {
              v51 = COcclusionContext::Pop(v10);
            }
            else
            {
              v51 = v50(v10);
            }
            NextItemSafe = v51;
            if ( v51 < 0 )
            {
              v70 = 667;
              goto LABEL_132;
            }
          }
          break;
        default:
          goto LABEL_34;
      }
    }
LABEL_33:
    if ( NextItemSafe == 1 )
      goto LABEL_7;
LABEL_34:
    NextItemSafe = -2147467259;
    v31 = v79 + v81 - (_QWORD)v80;
    if ( v31 )
    {
      if ( v31 >= 8 )
      {
        v37 = *v80;
        if ( (unsigned int)v37 >= 8 && (v37 & 3) == 0 && v37 <= v31 )
        {
          v38 = v80[1];
          v13 = v80 + 1;
          *(_QWORD *)v71 = v13;
          v80 = (unsigned int *)((char *)v80 + v37);
          NextItemSafe = 0;
          v75 = v38;
          v72 = v13;
        }
      }
    }
    else
    {
      NextItemSafe = 1;
      v13 = 0LL;
      *(_QWORD *)v71 = 0LL;
      v72 = 0LL;
      a2 = (struct _LIST_ENTRY *)v78[1];
      if ( a2 != (struct _LIST_ENTRY *)v77 )
      {
        CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v77, a2);
        v69 = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v79, &v75, &v72, v71);
        v13 = (unsigned int *)v72;
        NextItemSafe = v69;
        *(_QWORD *)v71 = v72;
        if ( v69 == 1 && (struct IDrawingContext *)v78[1] != v77 )
          NextItemSafe = -2147467259;
      }
    }
    if ( NextItemSafe < 0 )
    {
      v70 = 701;
      goto LABEL_132;
    }
    if ( NextItemSafe )
      goto LABEL_6;
  }
  v88 = *(_OWORD *)(v13 + 1);
  v29 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL);
  if ( v29 == COcclusionContext::DrawOcclusionRectangle )
    v30 = COcclusionContext::DrawOcclusionRectangle((__int64)v10, (__int64)&v88);
  else
    v30 = ((__int64 (__fastcall *)(CDrawingContext *, __int128 *, _QWORD))v29)(v10, &v88, 0LL);
  NextItemSafe = v30;
  if ( v30 >= 0 )
    goto LABEL_33;
  v70 = 623;
LABEL_132:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, NextItemSafe, v70);
LABEL_8:
  if ( v82 )
    CRenderDataDrawFrame::Release(v82);
  return (unsigned int)NextItemSafe;
}
