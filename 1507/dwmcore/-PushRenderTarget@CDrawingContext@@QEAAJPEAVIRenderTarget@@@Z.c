/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001DAC (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FAE10 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180022F20 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18002E1C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z @ 0x180034E5C (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180043D80 (-PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180043E60 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180071290 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800729A0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800DC260 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  char v2; // r12
  unsigned int v5; // r15d
  int v6; // edi
  unsigned int v7; // r13d
  char *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(CSwRenderTargetGetBounds *__hidden, struct ID2DContext **); // rdi
  int D2DContext; // eax
  int updated; // eax
  __int64 (__fastcall *v17)(CSwRenderTargetGetBounds *__hidden, struct ID2DContextOwner *, struct IRenderTarget *); // rdi
  int v18; // eax
  struct CVisual *CurrentVisual; // rax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r13d
  unsigned int v24; // r13d
  int v25; // eax
  unsigned int v26; // [rsp+28h] [rbp-59h]
  struct ID2DContext *v27[2]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v28; // [rsp+48h] [rbp-39h] BYREF
  __int128 v29; // [rsp+58h] [rbp-29h]
  __m256i v30; // [rsp+68h] [rbp-19h]
  __int64 v31; // [rsp+88h] [rbp+7h]
  int v32; // [rsp+90h] [rbp+Fh]

  v2 = 0;
  v5 = 0;
  v27[0] = 0LL;
  v6 = 0;
  *(_WORD *)((char *)this + 5929) = 257;
  v7 = 0;
  if ( *((_DWORD *)this + 152) )
  {
    v8 = (char *)this + 584;
    while ( 1 )
    {
      v22 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v8 + 8LL * v7), this);
      v6 = v22;
      if ( v22 < 0 )
        break;
      ++v5;
      if ( ++v7 >= *((_DWORD *)this + 152) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x189Bu);
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
    v23 = *((_DWORD *)v8 + 6);
    if ( v5 > v23 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
    }
    else
    {
      v24 = v23 - v5;
      if ( v24 )
        memmove(*(void **)v8, (const void *)(*(_QWORD *)v8 + 8LL * v5), 8LL * v24);
      *((_DWORD *)v8 + 6) = v24;
    }
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13E3u);
    goto LABEL_9;
  }
  v9 = *((unsigned int *)this + 176);
  LOBYTE(v28) = 0;
  *(_QWORD *)((char *)&v28 + 4) = 0LL;
  v31 = 0LL;
  v10 = v9 + 1;
  v30.m256i_i64[3] = 0LL;
  *(_OWORD *)((char *)v30.m256i_i64 + 4) = 0uLL;
  v29 = 0uLL;
  v32 = 1065353216;
  v30.m256i_i32[5] = 1065353216;
  v30.m256i_i32[0] = 1065353216;
  HIDWORD(v28) = 1065353216;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_50;
  }
  v6 = 0;
  if ( v10 > *((_DWORD *)this + 175) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 680, 76LL, 1LL, &v28);
    v6 = v25;
    if ( v25 >= 0 )
      goto LABEL_51;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
LABEL_50:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Cu);
LABEL_51:
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13ECu);
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v11 = *((_QWORD *)this + 85) + 76 * v9;
  *(_OWORD *)v11 = v28;
  *(_OWORD *)(v11 + 16) = v29;
  *(__m256i *)(v11 + 32) = v30;
  *(_QWORD *)(v11 + 64) = v31;
  *(_DWORD *)(v11 + 72) = v32;
  *((_DWORD *)this + 176) = v10;
LABEL_8:
  v2 = 1;
LABEL_9:
  if ( v6 < 0 && v2 )
    --*((_DWORD *)this + 176);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x24A3u);
    goto LABEL_27;
  }
  if ( !*((_BYTE *)this + 5521)
    || (CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56)),
        v21 = CVisual::UpdateCpuClippingData(CurrentVisual, *((_QWORD *)this + 691), 3LL),
        v6 = v21,
        v21 >= 0) )
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
      D2DContext = CSwRenderTargetGetBounds::GetD2DContext(*((CSwRenderTargetGetBounds **)this + 44), v27);
    else
      D2DContext = v14(*((CSwRenderTargetGetBounds **)this + 44), v27);
    v6 = D2DContext;
    if ( D2DContext < 0 )
    {
      v26 = 9409;
    }
    else
    {
      if ( !*((_QWORD *)this + 47) )
      {
        *((struct ID2DContext **)this + 47) = v27[0];
        v27[0] = 0LL;
      }
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x24D2u);
        goto LABEL_61;
      }
      v17 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct ID2DContextOwner *, struct IRenderTarget *))(**((_QWORD **)this + 47) + 24LL);
      if ( v17 == CSwRenderTargetGetBounds::PushTarget )
      {
        v18 = CSwRenderTargetGetBounds::PushTarget(
                *((CSwRenderTargetGetBounds **)this + 47),
                (CDrawingContext *)((char *)this + 56),
                *((struct IRenderTarget **)this + 44));
      }
      else if ( v17 == CD2DContext::PushTarget )
      {
        v18 = CD2DContext::PushTarget(
                *((CD2DContext **)this + 47),
                (CDrawingContext *)((char *)this + 56),
                *((struct IRenderTarget **)this + 44));
      }
      else
      {
        v18 = v17(
                *((CSwRenderTargetGetBounds **)this + 47),
                (CDrawingContext *)((char *)this + 56),
                *((struct IRenderTarget **)this + 44));
      }
      v6 = v18;
      if ( v18 >= 0 )
        goto LABEL_27;
      v26 = 9432;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v26);
    goto LABEL_61;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x24AFu);
LABEL_61:
  CDrawingContext::PopClippingScope(this, 0);
LABEL_27:
  if ( v27[0] )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
  return (unsigned int)v6;
}
