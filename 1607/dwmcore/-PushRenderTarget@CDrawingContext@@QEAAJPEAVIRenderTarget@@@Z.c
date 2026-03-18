/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180013898 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012E760 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F190 (-ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x18007E7A0 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18008FD00 (-PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18008FDC0 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180107500 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  int v2; // edi
  char v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  char *v8; // r14
  __int64 v9; // rax
  unsigned int v10; // edx
  _OWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  CSwRenderTargetGetBounds *v14; // rcx
  __int64 (__fastcall *v15)(CSwRenderTargetGetBounds *__hidden, struct ID2DContext **); // rax
  int D2DContext; // eax
  int updated; // eax
  CSwRenderTargetGetBounds *v18; // rcx
  struct ID2DContextOwner *v19; // rdx
  __int64 (__fastcall *v20)(CSwRenderTargetGetBounds *__hidden, struct ID2DContextOwner *, struct IRenderTarget *); // rax
  int v21; // eax
  struct IRenderTarget *v23; // r8
  void (*v24)(void); // rax
  int v25; // eax
  unsigned int v26; // r13d
  unsigned int v27; // r13d
  int v28; // eax
  _BYTE v29[80]; // [rsp+38h] [rbp-19h] BYREF
  CD3DDeviceLevel1 *v30; // [rsp+B8h] [rbp+67h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  *((_BYTE *)this + 6529) = 1;
  if ( *((_DWORD *)this + 172) )
  {
    v8 = (char *)this + 664;
    while ( 1 )
    {
      v25 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v8 + 8 * v6), this);
      v2 = v25;
      if ( v25 < 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 172) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x18D2u);
  }
  else
  {
LABEL_2:
    v8 = (char *)this + 664;
    *((_DWORD *)this + 172) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 664, 8LL);
  }
  if ( (unsigned int)v7 < *((_DWORD *)this + 172) && (_DWORD)v7 )
  {
    v26 = *((_DWORD *)v8 + 6);
    if ( (unsigned int)v7 > v26 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x235u);
    }
    else
    {
      v27 = v26 - v7;
      if ( v27 )
        memmove(*(void **)v8, (const void *)(*(_QWORD *)v8 + 8 * v7), 8LL * v27);
      *((_DWORD *)v8 + 6) = v27;
    }
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x18B4u);
  }
  else if ( *((_BYTE *)this + 6530) )
  {
    *(_WORD *)((char *)this + 6529) = 1;
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13A3u);
    goto LABEL_12;
  }
  v9 = *((unsigned int *)this + 234);
  v10 = v9 + 1;
  v29[0] = 0;
  *(_QWORD *)&v29[4] = 0LL;
  *(_DWORD *)&v29[76] = 32085;
  *(_OWORD *)&v29[12] = _xmm;
  *(_OWORD *)&v29[28] = _xmm;
  *(_OWORD *)&v29[44] = _xmm;
  *(_OWORD *)&v29[60] = _xmm;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    v2 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_53:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3Cu);
    goto LABEL_54;
  }
  v2 = 0;
  if ( v10 <= *((_DWORD *)this + 233) )
  {
    v11 = (_OWORD *)(*((_QWORD *)this + 114) + 80 * v9);
    *v11 = *(_OWORD *)v29;
    v11[1] = *(_OWORD *)&v29[16];
    v11[2] = *(_OWORD *)&v29[32];
    v11[3] = *(_OWORD *)&v29[48];
    v11[4] = *(_OWORD *)&v29[64];
    *((_DWORD *)this + 234) = v10;
    goto LABEL_11;
  }
  v28 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 912, 80LL, 1LL, v29);
  v2 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
    goto LABEL_53;
  }
LABEL_54:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13ACu);
    goto LABEL_12;
  }
LABEL_11:
  v5 = 1;
LABEL_12:
  if ( v2 < 0 && v5 )
    --*((_DWORD *)this + 234);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x247Au);
    goto LABEL_29;
  }
  v12 = *((_QWORD *)this + 54);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *((_QWORD *)this + 54) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v13 = *((_QWORD *)this + 55);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 55) = 0LL;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 54))(
    *((_QWORD *)this + 54),
    &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
    (char *)this + 440);
  v14 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 54);
  v15 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct ID2DContext **))(*(_QWORD *)v14 + 56LL);
  if ( v15 == CSwRenderTargetGetBounds::GetD2DContext )
    D2DContext = CSwRenderTargetGetBounds::GetD2DContext(v14, &v30);
  else
    D2DContext = v15(v14, &v30);
  v2 = D2DContext;
  if ( D2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DContext, 0x248Bu);
    goto LABEL_62;
  }
  if ( !*((_QWORD *)this + 57) )
  {
    *((_QWORD *)this + 57) = v30;
    v30 = 0LL;
  }
  updated = CDrawingContext::UpdateRenderTargetState(this);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x249Cu);
    goto LABEL_62;
  }
  v18 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 57);
  v19 = (CDrawingContext *)((char *)this + 128);
  v20 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct ID2DContextOwner *, struct IRenderTarget *))(*(_QWORD *)v18 + 24LL);
  if ( v20 == CSwRenderTargetGetBounds::PushTarget )
  {
    v21 = CSwRenderTargetGetBounds::PushTarget(v18, v19, *((struct IRenderTarget **)this + 54));
  }
  else
  {
    v23 = (struct IRenderTarget *)*((_QWORD *)this + 54);
    if ( v20 == CD2DContext::PushTarget )
      v21 = CD2DContext::PushTarget(v18, v19, v23);
    else
      v21 = v20(v18, v19, v23);
  }
  v2 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x24A2u);
LABEL_62:
    CDrawingContext::PopClippingScope(this, 0);
  }
LABEL_29:
  if ( !v30 )
    return (unsigned int)v2;
  v24 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
  if ( (char *)v24 != (char *)CD3DDeviceLevel1::Release )
  {
    v24();
    return (unsigned int)v2;
  }
  CD3DDeviceLevel1::Release(v30);
  return (unsigned int)v2;
}
