/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180048FE0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180091F38 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 *     Template_ppffffcb @ 0x18010EC90 (Template_ppffffcb.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180127408 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?IsCloseColorF@@YAHAEBU_D3DCOLORVALUE@@0@Z @ 0x1801277A0 (-IsCloseColorF@@YAHAEBU_D3DCOLORVALUE@@0@Z.c)
 *     Template_ppffff @ 0x1801278AC (Template_ppffff.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        struct CPrimitiveGroup *a1,
        CDrawingContext *this,
        __int64 a3,
        bool *a4,
        float *a5)
{
  unsigned int *v5; // rbp
  bool v8; // cl
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  __int64 v13; // rcx
  struct CVisual *v14; // r14
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  char v19; // r8
  int v20; // eax
  int v21; // eax
  const struct _D3DCOLORVALUE *v22; // rdx
  unsigned int CurrentVisual; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned int *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( a4 )
  {
    v8 = 0;
    if ( *((_QWORD *)a1 + 44) && a5 )
    {
      v9 = *((float *)a1 + 101);
      *a5 = v9;
      v10 = *((float *)a1 + 102);
      a5[1] = v10;
      v11 = *((float *)a1 + 103);
      a5[2] = v11;
      v12 = *((float *)a1 + 104);
      a5[3] = v12;
      v8 = v11 > v9 && v12 > v10;
    }
    *a4 = v8;
  }
  if ( *((_QWORD *)a1 + 44) )
  {
    v13 = *((_QWORD *)a1 + 2);
    v14 = 0LL;
    if ( *(_DWORD *)(v13 + 1008) )
    {
      v21 = *(_DWORD *)(v13 + 1008);
      v22 = 0LL;
      if ( v21 )
        v22 = (const struct _D3DCOLORVALUE *)(*(_QWORD *)(v13 + 1024) + 16LL * (unsigned int)(v21 - 1));
      if ( !*((_BYTE *)a1 + 425) || !(unsigned int)IsCloseColorF((const struct _D3DCOLORVALUE *)((char *)a1 + 504), v22) )
      {
        *((_BYTE *)a1 + 425) = 1;
        *(struct _D3DCOLORVALUE *)((char *)a1 + 504) = *(const struct _D3DCOLORVALUE *)&v22->r;
        CPrimitiveGroup::BuildHeatMap(a1);
      }
    }
    else if ( *((_BYTE *)a1 + 425) )
    {
      *((_BYTE *)a1 + 425) = 0;
      CPrimitiveGroup::ReleaseHeatMap(a1);
    }
    if ( *((_QWORD *)a1 + 44) )
    {
      if ( *((_BYTE *)this + 5552) )
      {
        if ( *((_BYTE *)this + 5553) )
          v14 = *(struct CVisual **)(*((_QWORD *)this + 329) + 8LL);
        else
          v14 = *(struct CVisual **)(*((_QWORD *)this + 695) + 24LL);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        CScopedClipStack::GetTopClipBoundsInScope((__int64 *)this + 85, (__int128 *)(v5 + 2));
        CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)(v5 + 8));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56));
          Template_ppffffcb(
            v24,
            (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
            (_DWORD)this,
            CurrentVisual,
            *(_DWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            *(_DWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
            *(_DWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            *(_DWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
            64,
            (__int64)(v5 + 8));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            Template_ppffff(
              v26,
              v25,
              (_DWORD)v14,
              (_DWORD)a1,
              *((_DWORD *)a1 + 17),
              *((_DWORD *)a1 + 18),
              *((_DWORD *)a1 + 19),
              *((_DWORD *)a1 + 20));
        }
      }
      v15 = *((_QWORD *)this + 342) == 0LL;
      *v5 = -1;
      if ( v15 && *((_DWORD *)this + 1490) == 1 )
      {
        if ( !*((_BYTE *)a1 + 425) )
        {
          v16 = CDrawingContext::DrawPrimitiveGroup(
                  this,
                  a1,
                  v14,
                  1,
                  (unsigned int *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x67u);
LABEL_22:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xd(v17, &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO, a1, *v5);
          return 0LL;
        }
      }
      else if ( !*((_BYTE *)a1 + 425) )
      {
        v19 = 1;
        goto LABEL_28;
      }
      v19 = 0;
LABEL_28:
      v20 = CDrawingContext::DrawClippedPrimitiveGroup(
              (struct ID2DContext **)this,
              a1,
              v19,
              (unsigned int *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x60u);
      goto LABEL_22;
    }
  }
  return 0LL;
}
