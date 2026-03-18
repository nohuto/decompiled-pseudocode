/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z @ 0x180075CB8 (-NotifyClientsOfDirty@CVisualTree@@IEAAXPEBVCDirtyRegion@@@Z.c)
 *     ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x180075DF0 (-CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Create@CDirtyRegion@@KAJPEAPEAV1@@Z @ 0x180076BC0 (-Create@CDirtyRegion@@KAJPEAPEAV1@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180079630 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180079700 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rsi
  _OWORD *v4; // r14
  int v5; // eax
  struct CDirtyRegion *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(CDirtyRegion *__hidden); // rsi
  __int64 v11; // rsi
  int v12; // eax
  struct CDirtyRegion *v13[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  *((_BYTE *)this + 214) = 0;
  if ( !*((_DWORD *)this + 8) )
    return (unsigned int)v1;
  if ( *(int *)(*((_QWORD *)this - 8) + 1000LL) >= 2 )
  {
    v11 = 0LL;
    if ( *((_DWORD *)this + 32) )
    {
      while ( 1 )
      {
        v12 = CVisualTree::PreCompute(*(CVisualTree **)(*((_QWORD *)this + 13) + 8 * v11));
        v1 = v12;
        if ( v12 < 0 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *((_DWORD *)this + 32) )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x723u);
      goto LABEL_29;
    }
  }
LABEL_3:
  v3 = *((_QWORD *)this - 3);
  if ( !v3 )
  {
LABEL_29:
    if ( v1 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v1, 0x5B9u);
    return (unsigned int)v1;
  }
  v13[0] = 0LL;
  v4 = (_OWORD *)((char *)this + 168);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    Template_x(this, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, v3);
  v5 = CDirtyRegion::Create(v13);
  v6 = v13[0];
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x95u);
  }
  else
  {
    if ( v4 )
      *(_OWORD *)v13 = *v4;
    else
      *(_OWORD *)v13 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CDirtyRegion::Initialize(v6, *(_QWORD *)(*(_QWORD *)(v3 + 16) + 352LL), v13, 0LL);
    if ( *(_BYTE *)(v3 + 32) )
      CVisualTree::CollectInvalidClientRects((CVisualTree *)v3, v6);
    v7 = CVisualTree::PreComputeWorker((CVisualTree *)v3, v6);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB2u);
    }
    else
    {
      CVisualTree::NotifyClientsOfDirty((CVisualTree *)v3, v6);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v8, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, v3);
    }
  }
  if ( v6 )
  {
    v9 = *(unsigned int (__fastcall **)(CDirtyRegion *__hidden))(*(_QWORD *)v6 + 8LL);
    if ( v9 == CDirtyRegion::Release )
      CDirtyRegion::Release(v6);
    else
      v9(v6);
  }
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x732u);
    goto LABEL_29;
  }
  return (unsigned int)v1;
}
