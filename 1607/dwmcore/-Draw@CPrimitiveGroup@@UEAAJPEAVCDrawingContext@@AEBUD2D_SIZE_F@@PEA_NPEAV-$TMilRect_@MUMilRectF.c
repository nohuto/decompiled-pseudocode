/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x18001D788 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18004C5D8 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800939E0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AD870 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     Template_ppffffcb @ 0x1801252D8 (Template_ppffffcb.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180144A84 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180144DC8 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     Template_ppffff @ 0x180144ED4 (Template_ppffff.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        CPrimitiveGroup *this,
        const struct _D3DCOLORVALUE *a2,
        __int64 a3,
        bool *a4,
        float *a5)
{
  unsigned __int64 v5; // rbp
  CDrawingContext *v6; // rsi
  bool v8; // cl
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  int v13; // r14d
  __int64 v14; // rcx
  struct CVisual *v15; // r15
  __int64 (__fastcall *v16)(CPrimitiveGroup *, __int64); // rax
  int v17; // eax
  __int64 v18; // rcx
  char v20; // al
  char v21; // r8
  int v22; // eax
  unsigned int i; // r15d
  __int64 v24; // rbx
  int v25; // eax
  unsigned int CurrentVisual; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  _BYTE v30[64]; // [rsp+90h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = (CDrawingContext *)a2;
  if ( a4 )
  {
    v8 = 0;
    if ( *((_QWORD *)this + 54) && a5 )
    {
      v9 = *((float *)this + 121);
      *a5 = v9;
      v10 = *((float *)this + 122);
      a5[1] = v10;
      v11 = *((float *)this + 123);
      a5[2] = v11;
      v12 = *((float *)this + 124);
      a5[3] = v12;
      v8 = v11 > v9 && v12 > v10;
    }
    *a4 = v8;
  }
  v13 = 0;
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    for ( i = 0; i < *((_DWORD *)this + 62); ++i )
    {
      if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 28) + 8LL * i) + 120LL),
                  (struct IBitmapRealization **)(v5 + 80)) >= 0 )
      {
        v24 = *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 136LL))(v24);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( *((_QWORD *)this + 54) )
  {
    v14 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v14 + 1112) )
    {
      v25 = *(_DWORD *)(v14 + 1112);
      a2 = 0LL;
      if ( v25 )
        a2 = (const struct _D3DCOLORVALUE *)(*(_QWORD *)(v14 + 1128) + 16LL * (unsigned int)(v25 - 1));
      if ( !*((_BYTE *)this + 505) || !IsCloseColorF((const struct _D3DCOLORVALUE *)((char *)this + 584), a2) )
      {
        *((_BYTE *)this + 505) = 1;
        *(struct _D3DCOLORVALUE *)((char *)this + 584) = *(const struct _D3DCOLORVALUE *)&a2->r;
        CPrimitiveGroup::BuildHeatMap(this);
      }
    }
    else if ( *((_BYTE *)this + 505) )
    {
      *((_BYTE *)this + 505) = 0;
      CPrimitiveGroup::ReleaseHeatMap(this);
    }
    if ( *((_QWORD *)this + 54) )
    {
      v15 = 0LL;
      if ( *((_BYTE *)v6 + 6240) )
      {
        if ( *((_BYTE *)v6 + 6241) )
          v15 = *(struct CVisual **)(*((_QWORD *)v6 + 383) + 8LL);
        else
          v15 = *(struct CVisual **)(*((_QWORD *)v6 + 781) + 24LL);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
        LOBYTE(a2) = 1;
        CScopedClipStack::GetTopGpuClipInScope((char *)v6 + 912, a2, v5 + 80);
        CBaseMatrixStack::Top(
          (CDrawingContext *)((char *)v6 + 536),
          (struct CMILMatrix *)((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)v6 + 128));
          Template_ppffffcb(
            v27,
            (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
            (_DWORD)v6,
            CurrentVisual,
            *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
            *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54),
            *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
            *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C),
            68,
            (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            Template_ppffff(
              v29,
              v28,
              (_DWORD)v15,
              (_DWORD)this,
              *((_DWORD *)this + 37),
              *((_DWORD *)this + 38),
              *((_DWORD *)this + 39),
              *((_DWORD *)this + 40));
        }
      }
      *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = -1;
      if ( *((_QWORD *)v6 + 397) )
        goto LABEL_61;
      v16 = *(__int64 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 48LL);
      if ( (char *)v16 == (char *)&CPrimitiveGroup::IsOfType
        || ((char *)v16 != (char *)CPrimitiveGroupLayerClip::IsOfType
          ? (v20 = v16(this, 98LL))
          : (v20 = CPrimitiveGroupLayerClip::IsOfType(this, 98LL)),
            !v20) )
      {
        v13 = 1;
      }
      if ( CCommonRegistryData::m_drawListRenderPathMode == 2
        || CCommonRegistryData::m_drawListRenderPathMode != 1
        && (!*((_BYTE *)v6 + 6537)
         || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP
         || CLightStack::HasLighting((CDrawingContext *)((char *)v6 + 728)))
        && v13 == 1 )
      {
        if ( !*((_BYTE *)this + 505) )
        {
          v17 = CDrawingContext::DrawPrimitiveGroup(v6, this, v15, 1, (unsigned int *)(v5 + 80));
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x81u);
LABEL_28:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xd(
              v18,
              &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
              this,
              *(unsigned int *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
          return 0LL;
        }
      }
      else
      {
LABEL_61:
        if ( !*((_BYTE *)this + 505) )
        {
          v21 = 1;
          goto LABEL_38;
        }
      }
      v21 = 0;
LABEL_38:
      v22 = CDrawingContext::DrawClippedPrimitiveGroup((struct ID2DContext **)v6, this, v21, (unsigned int *)(v5 + 80));
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x7Au);
      goto LABEL_28;
    }
  }
  return 0LL;
}
