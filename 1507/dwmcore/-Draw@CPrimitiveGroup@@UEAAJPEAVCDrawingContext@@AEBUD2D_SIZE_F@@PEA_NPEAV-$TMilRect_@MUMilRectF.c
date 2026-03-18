/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800365B0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18002E1C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18006E528 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 *     Template_ppffffcb @ 0x1800F4FAC (Template_ppffffcb.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18010BE3C (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?IsCloseColorF@@YAHAEBU_D3DCOLORVALUE@@0@Z @ 0x18010C640 (-IsCloseColorF@@YAHAEBU_D3DCOLORVALUE@@0@Z.c)
 *     Template_ppffff @ 0x18010C94C (Template_ppffff.c)
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
  struct CVisual *v14; // rsi
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rcx
  char v20; // r8
  int v21; // eax
  int v22; // eax
  const struct _D3DCOLORVALUE *v23; // rdx
  unsigned int CurrentVisual; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned int *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL);
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
    if ( *(_DWORD *)(v13 + 1040) )
    {
      v22 = *(_DWORD *)(v13 + 1040);
      v23 = 0LL;
      if ( v22 )
        v23 = (const struct _D3DCOLORVALUE *)(*(_QWORD *)(v13 + 1056) + 16LL * (unsigned int)(v22 - 1));
      if ( !*((_BYTE *)a1 + 425) || !(unsigned int)IsCloseColorF((const struct _D3DCOLORVALUE *)((char *)a1 + 504), v23) )
      {
        *((_BYTE *)a1 + 425) = 1;
        *(struct _D3DCOLORVALUE *)((char *)a1 + 504) = *(const struct _D3DCOLORVALUE *)&v23->r;
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
      if ( *((_BYTE *)this + 5520) )
      {
        if ( *((_BYTE *)this + 5521) )
        {
          v15 = *(_QWORD *)(*((_QWORD *)this + 329) + 8LL);
          if ( v15 )
            v14 = (struct CVisual *)(v15 - 64);
        }
        else
        {
          v14 = *(struct CVisual **)(*((_QWORD *)this + 691) + 24LL);
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, v5 + 2);
        CBaseMatrixStack::Top((CDrawingContext *)((char *)this + 456), (struct CBaseMatrix *)(v5 + 8));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56));
          Template_ppffffcb(
            v25,
            (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
            (_DWORD)this,
            CurrentVisual,
            *(_DWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            *(_DWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
            *(_DWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            *(_DWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
            64,
            (__int64)(v5 + 8));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            Template_ppffff(
              v27,
              v26,
              (_DWORD)v14,
              (_DWORD)a1,
              *((_DWORD *)a1 + 17),
              *((_DWORD *)a1 + 18),
              *((_DWORD *)a1 + 19),
              *((_DWORD *)a1 + 20));
        }
      }
      v16 = *((_QWORD *)this + 338) == 0LL;
      *v5 = -1;
      if ( v16
        && (CCommonRegistryData::m_drawListRenderPathMode == 2
         || CCommonRegistryData::m_drawListRenderPathMode != 1
         && *((_DWORD *)v14 + 24) == 1
         && (!*((_BYTE *)this + 5941) || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP)) )
      {
        if ( !*((_BYTE *)a1 + 425) )
        {
          v17 = CDrawingContext::DrawPrimitiveGroup(
                  (const struct CVisualTree **)this,
                  a1,
                  v14,
                  1,
                  (unsigned int *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x69u);
LABEL_26:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xd(v18, &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO, a1, *v5);
          return 0LL;
        }
      }
      else if ( !*((_BYTE *)a1 + 425) )
      {
        v20 = 1;
        goto LABEL_32;
      }
      v20 = 0;
LABEL_32:
      v21 = CDrawingContext::DrawClippedPrimitiveGroup(
              (struct ID2DContext **)this,
              a1,
              v20,
              (unsigned int *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x62u);
      goto LABEL_26;
    }
  }
  return 0LL;
}
