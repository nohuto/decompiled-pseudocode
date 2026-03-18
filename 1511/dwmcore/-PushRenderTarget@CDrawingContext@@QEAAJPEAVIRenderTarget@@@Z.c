/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180114BE0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800095BC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180021CB0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180024B30 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180025130 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180037290 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180081C50 (-PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180081DC0 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800F38C0 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  char v2; // r12
  unsigned int v5; // r15d
  int v6; // ebx
  unsigned int v7; // r13d
  char *v8; // r14
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(CSwRenderTargetGetBounds *__hidden, struct ID2DContext **); // rdi
  int D2DContext; // eax
  int updated; // eax
  __int64 (__fastcall *v17)(struct ID2D1PrivateCompositorRenderer **, struct ID2DContextOwner *, struct IRenderTarget *); // rdi
  int v18; // eax
  __int64 (__fastcall *v20)(CD3DDeviceLevel1 *); // rsi
  CVisual *CurrentVisual; // rax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r13d
  unsigned int v25; // r13d
  int v26; // eax
  unsigned int v27; // [rsp+28h] [rbp-59h]
  CD3DDeviceLevel1 *v28[2]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v29; // [rsp+48h] [rbp-39h] BYREF
  __int128 v30; // [rsp+58h] [rbp-29h]
  __m256i v31; // [rsp+68h] [rbp-19h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  int v33; // [rsp+90h] [rbp+Fh]

  v2 = 0;
  v5 = 0;
  v28[0] = 0LL;
  v6 = 0;
  *(_WORD *)((char *)this + 5965) = 257;
  v7 = 0;
  if ( *((_DWORD *)this + 152) )
  {
    v8 = (char *)this + 584;
    while ( 1 )
    {
      v23 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v8 + 8LL * v7), this);
      v6 = v23;
      if ( v23 < 0 )
        break;
      ++v5;
      if ( ++v7 >= *((_DWORD *)this + 152) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x187Au);
  }
  else
  {
LABEL_2:
    v8 = (char *)this + 584;
    *((_DWORD *)this + 152) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 584, 8LL);
  }
  if ( v5 < *((_DWORD *)this + 152) && v5 )
  {
    v24 = *((_DWORD *)v8 + 6);
    if ( v5 > v24 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
    }
    else
    {
      v25 = v24 - v5;
      if ( v25 )
        memmove(*(void **)v8, (const void *)(*(_QWORD *)v8 + 8LL * v5), 8LL * v25);
      *((_DWORD *)v8 + 6) = v25;
    }
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13EEu);
    goto LABEL_9;
  }
  v9 = *((unsigned int *)this + 176);
  LOBYTE(v29) = 0;
  *(_QWORD *)((char *)&v29 + 4) = 0LL;
  v32 = 0LL;
  v10 = v9 + 1;
  v31.m256i_i64[3] = 0LL;
  *(_OWORD *)((char *)v31.m256i_i64 + 4) = 0uLL;
  v30 = 0uLL;
  v33 = 1065353216;
  v31.m256i_i32[5] = 1065353216;
  v31.m256i_i32[0] = 1065353216;
  HIDWORD(v29) = 1065353216;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_52;
  }
  v6 = 0;
  if ( v10 > *((_DWORD *)this + 175) )
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 680, 76LL, 1LL, &v29);
    v6 = v26;
    if ( v26 >= 0 )
      goto LABEL_53;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
LABEL_52:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Cu);
LABEL_53:
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13F7u);
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v11 = *((_QWORD *)this + 85) + 76 * v9;
  *(_OWORD *)v11 = v29;
  *(_OWORD *)(v11 + 16) = v30;
  *(__m256i *)(v11 + 32) = v31;
  *(_QWORD *)(v11 + 64) = v32;
  *(_DWORD *)(v11 + 72) = v33;
  *((_DWORD *)this + 176) = v10;
LABEL_8:
  v2 = 1;
LABEL_9:
  if ( v6 < 0 && v2 )
    --*((_DWORD *)this + 176);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23D7u);
    goto LABEL_27;
  }
  if ( !*((_BYTE *)this + 5553)
    || (CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56)),
        v22 = CVisual::UpdateCpuClippingData(CurrentVisual, *((const struct CVisualTree **)this + 695)),
        v6 = v22,
        v22 >= 0) )
  {
    v12 = *((_QWORD *)this + 44);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)this + 44));
    *((_QWORD *)this + 44) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v13 = *((_QWORD *)this + 45);
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*((_QWORD *)this + 45));
      *((_QWORD *)this + 45) = 0LL;
    }
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 44))(
      *((_QWORD *)this + 44),
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 360);
    v14 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct ID2DContext **))(**((_QWORD **)this + 44)
                                                                                              + 56LL);
    if ( v14 == CSwRenderTargetGetBounds::GetD2DContext )
      D2DContext = CSwRenderTargetGetBounds::GetD2DContext(*((CSwRenderTargetGetBounds **)this + 44), v28);
    else
      D2DContext = v14(*((CSwRenderTargetGetBounds **)this + 44), v28);
    v6 = D2DContext;
    if ( D2DContext < 0 )
    {
      v27 = 9204;
    }
    else
    {
      if ( !*((_QWORD *)this + 47) )
      {
        *((CD3DDeviceLevel1 **)this + 47) = v28[0];
        v28[0] = 0LL;
      }
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2405u);
        goto LABEL_62;
      }
      v17 = *(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, struct ID2DContextOwner *, struct IRenderTarget *))(**((_QWORD **)this + 47) + 24LL);
      if ( (char *)v17 == (char *)CSwRenderTargetGetBounds::PushTarget )
      {
        v18 = CSwRenderTargetGetBounds::PushTarget(
                *((CSwRenderTargetGetBounds **)this + 47),
                (CDrawingContext *)((char *)this + 56),
                *((struct IRenderTarget **)this + 44));
      }
      else if ( v17 == CD2DContext::PushTarget )
      {
        v18 = CD2DContext::PushTarget(
                *((struct ID2D1PrivateCompositorRenderer ***)this + 47),
                (CDrawingContext *)((char *)this + 56),
                *((struct IRenderTarget **)this + 44));
      }
      else
      {
        v18 = v17(
                *((struct ID2D1PrivateCompositorRenderer ***)this + 47),
                (CDrawingContext *)((char *)this + 56),
                *((struct IRenderTarget **)this + 44));
      }
      v6 = v18;
      if ( v18 >= 0 )
        goto LABEL_27;
      v27 = 9227;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v27);
    goto LABEL_62;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x23E3u);
LABEL_62:
  CDrawingContext::PopClippingScope(this, 0);
LABEL_27:
  if ( v28[0] )
  {
    v20 = *(__int64 (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)v28[0] + 16LL);
    if ( v20 == CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(v28[0]);
    else
      v20(v28[0]);
  }
  return (unsigned int)v6;
}
