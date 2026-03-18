/*
 * XREFs of ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004E930 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004EA30 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18004EA40 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800516E0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18005C900 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18005C990 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005CA10 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18005CC70 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005CD90 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18005CDE0 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18005CF00 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x180069150 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180069410 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006B140 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18006B6F0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006BA60 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x18006E990 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800AE6A0 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE804 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180137B64 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180137C90 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderData::Draw(CRenderData *this, struct IDrawingContext *a2, __int64 Flink_high)
{
  struct _LIST_ENTRY *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // r9
  int v10; // r13d
  struct _LIST_ENTRY **p_Blink; // r14
  CDrawingContext *v12; // r15
  struct _LIST_ENTRY *v13; // rdx
  int v14; // ebx
  __int64 (__fastcall *v16)(CDrawingContext *__hidden); // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 (__fastcall *v19)(CDrawingContext *, struct MilRectF *); // rax
  int v20; // eax
  unsigned int *(__fastcall *Blink)(CDataStreamBlock *); // rax
  unsigned int *v22; // rbx
  char *(__fastcall *v23)(CDataStreamBlock *); // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 Flink_low; // rax
  struct CImageSource *v26; // r8
  struct CAtlasedRects *v27; // rdx
  __int64 (__fastcall *v28)(CDrawingContext *__hidden, struct CAtlasedRects *, struct CImageSource *); // rax
  int v29; // eax
  unsigned __int64 v30; // rax
  struct CGeometry *v31; // r8
  struct CLegacyMilBrush *v32; // rdx
  int (*v33)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *); // rax
  int v34; // eax
  __int64 (__fastcall *v35)(CDrawingContext *, __int128 *, _QWORD); // rax
  int v36; // eax
  void *v37; // rax
  struct CTransform *v38; // rdx
  int (*v39)(COcclusionContext *__hidden, struct CTransform *); // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 (__fastcall *v42)(CDrawingContext *__hidden); // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 (__fastcall *v46)(CDrawingContext *); // rax
  int v47; // eax
  struct CResource *v48; // rdx
  __int64 (__fastcall *v49)(CDrawingContext *__hidden, struct CResource *); // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 (__fastcall *v52)(CDrawingContext *); // rax
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  struct _LIST_ENTRY **v56; // rcx
  struct _LIST_ENTRY *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  int v60; // eax
  int v61; // eax
  int NextItemSafe; // eax
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  unsigned int v64[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v65; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C0h]
  void *v67; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v68; // [rsp+50h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v69; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *v70; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY **v71; // [rsp+68h] [rbp-98h]
  struct _LIST_ENTRY *v72; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v73; // [rsp+78h] [rbp-88h]
  unsigned int v74; // [rsp+80h] [rbp-80h]
  struct IDrawingContext *v75; // [rsp+88h] [rbp-78h] BYREF
  struct CRenderDataDrawFrame *v76; // [rsp+90h] [rbp-70h] BYREF
  __int128 v77; // [rsp+98h] [rbp-68h] BYREF
  __int128 v78; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v79[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v80; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v81; // [rsp+D8h] [rbp-28h] BYREF

  v3 = (struct _LIST_ENTRY *)((char *)this + 112);
  v66 = *((_QWORD *)this + 20);
  v5 = *((_QWORD *)this + 16);
  v6 = 0LL;
  if ( v5 )
  {
    v56 = (struct _LIST_ENTRY **)*((_QWORD *)this + 15);
    v57 = (struct _LIST_ENTRY *)(v5 + 8);
    if ( *v56 != v3 )
      __fastfail(3u);
    v57->Flink = v3;
    v57->Blink = (struct _LIST_ENTRY *)v56;
    *v56 = v57;
    v3->Blink = v57;
    v3[1].Flink = 0LL;
  }
  Flink = v3->Flink;
  v9 = 2147500037LL;
  v10 = 0;
  p_Blink = 0LL;
  v12 = a2;
  v70 = v3;
  v71 = 0LL;
  v75 = a2;
  v76 = 0LL;
  v65 = 0;
  if ( v3 == Flink )
  {
    v13 = v72;
    v14 = 1;
    v69 = v72;
    *(_QWORD *)v64 = v67;
  }
  else
  {
    if ( Flink )
    {
      p_Blink = &Flink[-1].Blink;
      v71 = &Flink[-1].Blink;
    }
    else
    {
      v71 = 0LL;
    }
    Blink = (unsigned int *(__fastcall *)(CDataStreamBlock *))(*p_Blink)->Blink;
    if ( Blink == CDataStreamBlock::GetWrittenSize )
    {
      v22 = (unsigned int *)p_Blink + 7;
    }
    else
    {
      v22 = (unsigned int *)((__int64 (__fastcall *)(struct _LIST_ENTRY **, _QWORD, __int64, __int64))Blink)(
                              p_Blink,
                              0LL,
                              Flink_high,
                              2147500037LL);
      v9 = 2147500037LL;
    }
    v23 = (char *(__fastcall *)(CDataStreamBlock *))(*p_Blink)[1].Flink;
    if ( v23 == CDataStreamBlock::GetData )
    {
      v13 = (struct _LIST_ENTRY *)(p_Blink + 4);
      v69 = (struct _LIST_ENTRY *)(p_Blink + 4);
    }
    else
    {
      v13 = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY **, __int64, __int64, __int64))v23)(
                                    p_Blink,
                                    v6,
                                    Flink_high,
                                    2147500037LL);
      v69 = v13;
      v9 = 2147500037LL;
    }
    v24 = *v22;
    v14 = -2147467259;
    v72 = v13;
    Flink_high = (unsigned int)v24;
    v74 = v24;
    v73 = (unsigned int *)v13;
    if ( (_DWORD)v24 )
    {
      if ( v24 < 8
        || (Flink_low = LODWORD(v13->Flink), (unsigned int)Flink_low < 8)
        || (Flink_low & 3) != 0
        || Flink_low > (unsigned int)v24 )
      {
        *(_QWORD *)v64 = v67;
      }
      else
      {
        Flink_high = HIDWORD(v13->Flink);
        *(_QWORD *)v64 = (char *)&v13->Flink + 4;
        v14 = 0;
        v67 = (char *)&v13->Flink + 4;
        v73 = (unsigned int *)((char *)v13 + (unsigned int)Flink_low);
        v68 = Flink_high;
      }
    }
    else
    {
      *(_QWORD *)v64 = 0LL;
      v67 = 0LL;
      v14 = 1;
      if ( p_Blink[1] != v3 )
        v14 = -2147467259;
    }
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1CEu);
  }
  else
  {
    if ( v14 )
    {
LABEL_6:
      if ( v14 == 1 )
LABEL_7:
        v14 = 0;
    }
    else
    {
      while ( 1 )
      {
        v16 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v12 + 120LL);
        v17 = v16 == CDrawingContext::ApplyRenderState
            ? CDrawingContext::ApplyRenderState(v12)
            : ((__int64 (__fastcall *)(CDrawingContext *, struct _LIST_ENTRY *, __int64, __int64))v16)(
                v12,
                v13,
                Flink_high,
                v9);
        v14 = v17;
        if ( v17 < 0 )
          break;
        switch ( v68 )
        {
          case 0x130u:
            v26 = *(struct CImageSource **)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 8LL));
            if ( v26 )
              v26 = (struct CImageSource *)((char *)v26 - 16);
            v27 = *(struct CAtlasedRects **)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL));
            v28 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CAtlasedRects *, struct CImageSource *))(*(_QWORD *)v12 + 80LL);
            if ( v28 == CDrawingContext::DrawAtlasedRects )
              v29 = CDrawingContext::DrawAtlasedRects(v12, v27, v26);
            else
              v29 = v28(v12, v27, v26);
            v14 = v29;
            if ( v29 < 0 )
            {
              v63 = 608;
              goto LABEL_131;
            }
            break;
          case 0x136u:
            v31 = *(struct CGeometry **)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 8LL));
            v32 = *(struct CLegacyMilBrush **)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL));
            v33 = *(int (**)(COcclusionContext *__hidden, struct CLegacyMilBrush *, struct CGeometry *))(*(_QWORD *)v12 + 24LL);
            if ( v33 == COcclusionContext::DrawGeometry )
            {
              v34 = COcclusionContext::DrawGeometry(v12, v32, v31);
            }
            else if ( (char *)v33 == (char *)CDrawingContext::DrawGeometry )
            {
              v34 = CDrawingContext::DrawGeometry(v12, v32, v31);
            }
            else
            {
              v34 = ((__int64 (__fastcall *)(CDrawingContext *, struct CLegacyMilBrush *, struct CGeometry *))v33)(
                      v12,
                      v32,
                      v31);
            }
            v14 = v34;
            if ( v34 < 0 )
            {
              v63 = 537;
              goto LABEL_131;
            }
            break;
          case 0x131u:
            v80 = *(_OWORD *)(*(_QWORD *)v64 + 4LL);
            v35 = *(__int64 (__fastcall **)(CDrawingContext *, __int128 *, _QWORD))(*(_QWORD *)v12 + 96LL);
            if ( (char *)v35 == (char *)COcclusionContext::DrawOcclusionRectangle )
              v36 = COcclusionContext::DrawOcclusionRectangle(v12, &v80, 0LL);
            else
              v36 = v35(v12, &v80, 0LL);
            v14 = v36;
            if ( v36 < 0 )
            {
              v63 = 620;
              goto LABEL_131;
            }
            break;
          default:
            v13 = (struct _LIST_ENTRY *)(v68 - 301);
            switch ( v68 )
            {
              case 0x12Du:
                v48 = *(struct CResource **)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL));
                v49 = *(__int64 (__fastcall **)(CDrawingContext *__hidden, struct CResource *))(*(_QWORD *)v12 + 48LL);
                if ( v49 == CDrawingContext::DrawBitmap )
                  v50 = CDrawingContext::DrawBitmap(v12, v48);
                else
                  v50 = v49(v12, v48);
                v14 = v50;
                if ( v50 >= 0 )
                  goto LABEL_40;
                v63 = 580;
                goto LABEL_131;
              case 0x12Fu:
                v58 = *(_QWORD *)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 8LL));
                if ( v58 )
                  v59 = v58 - 16;
                else
                  v59 = 0LL;
                v60 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int64))(*(_QWORD *)v12 + 72LL))(
                        v12,
                        *(_QWORD *)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL)),
                        v59);
                v14 = v60;
                if ( v60 >= 0 )
                  goto LABEL_40;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x252u);
                goto LABEL_8;
              case 0x132u:
                (*(void (__fastcall **)(CDrawingContext *, _QWORD))(*(_QWORD *)v12 + 88LL))(
                  v12,
                  *(_QWORD *)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL)));
                goto LABEL_40;
              case 0x133u:
                v18 = *(_QWORD *)v64 + 20LL;
                v78 = *(_OWORD *)(*(_QWORD *)v64 + 4LL);
                v19 = *(__int64 (__fastcall **)(CDrawingContext *, struct MilRectF *))(*(_QWORD *)v12 + 16LL);
                if ( (char *)v19 == (char *)COcclusionContext::DrawSolidRectangle )
                {
                  v20 = COcclusionContext::DrawSolidRectangle(v12, &v78, v18);
                }
                else if ( v19 == CDrawingContext::DrawSolidRectangle )
                {
                  v20 = CDrawingContext::DrawSolidRectangle(v12, (struct MilRectF *)&v78);
                }
                else
                {
                  v20 = ((__int64 (__fastcall *)(CDrawingContext *, __int128 *, __int64))v19)(v12, &v78, v18);
                }
                v14 = v20;
                if ( v20 >= 0 )
                  goto LABEL_40;
                v63 = 523;
                goto LABEL_131;
              case 0x134u:
                v54 = *(unsigned int *)(*(_QWORD *)v64 + 4LL);
                v81 = *(_OWORD *)(*(_QWORD *)v64 + 8LL);
                v55 = (*(__int64 (__fastcall **)(CDrawingContext *, _QWORD, __int128 *, __int64, _DWORD))(*(_QWORD *)v12 + 40LL))(
                        v12,
                        *(_QWORD *)(v66 + 8 * v54),
                        &v81,
                        *(_QWORD *)v64 + 28LL,
                        *(_DWORD *)(*(_QWORD *)v64 + 24LL));
                v14 = v55;
                if ( v55 >= 0 )
                  goto LABEL_40;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x238u);
                goto LABEL_8;
              case 0x135u:
                v44 = *(unsigned int *)(*(_QWORD *)v64 + 4LL);
                v77 = *(_OWORD *)(*(_QWORD *)v64 + 8LL);
                v45 = *(_QWORD *)(v66 + 8 * v44);
                v46 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v12 + 8LL);
                if ( (char *)v46 == (char *)COcclusionContext::DrawRectangle )
                {
                  v47 = COcclusionContext::DrawRectangle(v12, &v77, v45, 0LL);
                }
                else if ( v46 == CDrawingContext::DrawRectangle )
                {
                  v47 = CDrawingContext::DrawRectangle(v12);
                }
                else
                {
                  v47 = ((__int64 (__fastcall *)(CDrawingContext *, __int128 *, __int64, _QWORD))v46)(
                          v12,
                          &v77,
                          v45,
                          0LL);
                }
                v14 = v47;
                if ( v47 >= 0 )
                  goto LABEL_40;
                v63 = 510;
                goto LABEL_131;
              case 0x137u:
                v79[0] = *(_DWORD *)(*(_QWORD *)v64 + 8LL);
                v79[1] = *(_DWORD *)(*(_QWORD *)v64 + 12LL);
                v79[2] = *(_DWORD *)(*(_QWORD *)v64 + 16LL);
                v79[3] = *(_DWORD *)(*(_QWORD *)v64 + 20LL);
                v51 = *(_QWORD *)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL));
                v52 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v12 + 32LL);
                if ( (char *)v52 == (char *)COcclusionContext::DrawImage )
                {
                  v53 = COcclusionContext::DrawImage(v12, v51, v79, 0LL);
                }
                else if ( v52 == CDrawingContext::DrawImage )
                {
                  v53 = CDrawingContext::DrawImage(v12);
                }
                else
                {
                  v53 = ((__int64 (__fastcall *)(CDrawingContext *, __int64, _DWORD *, _QWORD))v52)(v12, v51, v79, 0LL);
                }
                v14 = v53;
                if ( v53 >= 0 )
                  goto LABEL_40;
                v63 = 553;
                goto LABEL_131;
              case 0x138u:
                v38 = *(struct CTransform **)(v66 + 8LL * *(unsigned int *)(*(_QWORD *)v64 + 4LL));
                v39 = *(int (**)(COcclusionContext *__hidden, struct CTransform *))(*(_QWORD *)v12 + 112LL);
                if ( (char *)v39 == (char *)CDrawingContext::PushTransform )
                {
                  v40 = CDrawingContext::PushTransform(v12, v38);
                }
                else if ( v39 == COcclusionContext::PushTransform )
                {
                  v40 = COcclusionContext::PushTransform(v12, v38);
                }
                else
                {
                  v40 = ((__int64 (__fastcall *)(CDrawingContext *, struct CTransform *))v39)(v12, v38);
                }
                v14 = v40;
                if ( v40 < 0 )
                {
                  v63 = 648;
                  goto LABEL_131;
                }
                v65 = ++v10;
                goto LABEL_40;
              case 0x139u:
                if ( v10 <= 0 )
                {
                  v61 = CRenderData::EndBoundingFrame(this, &v65, &v76, &v75, a2);
                  v14 = v61;
                  if ( v61 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x2A4u);
                    goto LABEL_8;
                  }
                  v12 = v75;
                  v10 = v65;
                }
                else
                {
                  v41 = *(_QWORD *)v12;
                  v65 = --v10;
                  v42 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(v41 + 104);
                  if ( v42 == CDrawingContext::Pop )
                  {
                    v43 = CDrawingContext::Pop(v12);
                  }
                  else if ( v42 == COcclusionContext::Pop )
                  {
                    v43 = COcclusionContext::Pop(v12);
                  }
                  else
                  {
                    v43 = v42(v12);
                  }
                  v14 = v43;
                  if ( v43 < 0 )
                  {
                    v63 = 668;
                    goto LABEL_131;
                  }
                }
                break;
              default:
                goto LABEL_41;
            }
            break;
        }
LABEL_40:
        if ( v14 == 1 )
          goto LABEL_7;
LABEL_41:
        v14 = -2147467259;
        v30 = (unsigned __int64)v69 + v74 - (_QWORD)v73;
        if ( v30 )
        {
          if ( v30 >= 8 )
          {
            v13 = (struct _LIST_ENTRY *)*v73;
            if ( (unsigned int)v13 >= 8 && ((unsigned __int8)v13 & 3) == 0 && (unsigned __int64)v13 <= v30 )
            {
              Flink_high = v73[1];
              v37 = v73 + 1;
              v68 = v73[1];
              v73 = (unsigned int *)((char *)v73 + (_QWORD)v13);
              v14 = 0;
              *(_QWORD *)v64 = v37;
              v67 = v37;
            }
          }
        }
        else
        {
          *(_QWORD *)v64 = 0LL;
          v14 = 1;
          v67 = 0LL;
          v13 = p_Blink[1];
          if ( v13 != v3 )
          {
            CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v70, v13);
            NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v72, &v68, &v67, v64);
            v3 = v70;
            v14 = NextItemSafe;
            p_Blink = v71;
            if ( NextItemSafe == 1 && v71[1] != v70 )
              v14 = -2147467259;
            v69 = v72;
            *(_QWORD *)v64 = v67;
          }
        }
        if ( v14 < 0 )
        {
          v63 = 702;
          goto LABEL_131;
        }
        if ( v14 )
          goto LABEL_6;
      }
      v63 = 477;
LABEL_131:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v63);
    }
LABEL_8:
    if ( v76 )
      CRenderDataDrawFrame::Release(v76);
  }
  return (unsigned int)v14;
}
