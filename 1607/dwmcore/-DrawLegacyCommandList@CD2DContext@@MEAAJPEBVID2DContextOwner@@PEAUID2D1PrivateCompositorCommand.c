/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18007CFB0
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000309C (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?Set@CHWCallbackRenderer@@QEAAXU_LUID@@VDisplayId@@W4StereoContext@@II@Z @ 0x18001E818 (-Set@CHWCallbackRenderer@@QEAAXU_LUID@@VDisplayId@@W4StereoContext@@II@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180064060 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18007C814 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?GetAdapterLuid@CD3DDeviceLevel1@@UEBA?AU_LUID@@XZ @ 0x180080250 (-GetAdapterLuid@CD3DDeviceLevel1@@UEBA-AU_LUID@@XZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800AD684 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::DrawLegacyCommandList(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        char a8)
{
  _BYTE *v8; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  void (__fastcall *v13)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned int i; // edi
  __int64 v18; // rbx
  struct _LUID (__fastcall *v19)(CD3DDeviceLevel1 *__hidden); // rax
  __int64 AdapterLuid; // rax
  __int64 *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edi
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // edi
  int v31; // ebx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_MATRIX_3X2_F v37; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v38[64]; // [rsp+68h] [rbp-61h] BYREF

  v8 = 0LL;
  v11 = a1;
  if ( *(_QWORD *)(a1 + 320) )
  {
    v19 = *(struct _LUID (__fastcall **)(CD3DDeviceLevel1 *__hidden))(*(_QWORD *)a1 + 296LL);
    if ( v19 == CD3DDeviceLevel1::GetAdapterLuid )
      AdapterLuid = (__int64)CD3DDeviceLevel1::GetAdapterLuid((CD3DDeviceLevel1 *)a1);
    else
      AdapterLuid = ((__int64 (__fastcall *)(__int64, __int64 *))v19)(a1, &v36);
    v21 = (__int64 *)AdapterLuid;
    v22 = 0LL;
    v23 = *(_DWORD *)(v11 + 216);
    if ( v23 )
      v22 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 8LL * (unsigned int)(v23 - 1));
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 24) + 120LL))(*(_QWORD *)(v22 + 24));
    v25 = 0LL;
    v26 = *(_DWORD *)(v24 + 152);
    v27 = *(_DWORD *)(v11 + 216);
    if ( v27 )
      v25 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 8LL * (unsigned int)(v27 - 1));
    v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 24) + 120LL))(*(_QWORD *)(v25 + 24));
    CHWCallbackRenderer::Set(
      *(_QWORD *)(v11 + 320),
      *v21,
      *(_DWORD *)(v11 + 312),
      *(_DWORD *)(v11 + 316),
      *(_DWORD *)(v28 + 148),
      v26);
    v29 = CD2DContext::DrawCustomCallbackRendererInternal(
            (CD2DContext *)v11,
            *(struct ID2D1PrivateCompositorRenderer **)(v11 + 320));
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x3EAu);
    }
    else
    {
      a1 = *(_QWORD *)(v11 + 320);
      if ( a1 )
      {
        CMILRefCountBase::Release((CMILRefCountBase *)(a1 + 8));
        *(_QWORD *)(v11 + 320) = 0LL;
      }
    }
  }
  else if ( *(_QWORD *)(a1 + 360) )
  {
    v30 = *(_DWORD *)(a1 + 316);
    v31 = *(_DWORD *)(a1 + 312);
    v32 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 296LL))(a1, &v36);
    v33 = *(_QWORD *)(v11 + 360);
    *(_QWORD *)(v33 + 40) = *v32;
    *(_DWORD *)(v33 + 48) = v31;
    *(_DWORD *)(v33 + 52) = v30;
    *(_BYTE *)(v33 + 56) = 1;
    v34 = CD2DContext::DrawCustomCallbackRendererInternal(
            (CD2DContext *)v11,
            *(struct ID2D1PrivateCompositorRenderer **)(v11 + 360));
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x3F7u);
    }
    else
    {
      a1 = *(_QWORD *)(v11 + 360);
      if ( a1 )
      {
        CMILRefCountBase::Release((CMILRefCountBase *)(a1 + 8));
        *(_QWORD *)(v11 + 360) = 0LL;
      }
    }
  }
  if ( !*(_BYTE *)(v11 + 400) )
  {
    v15 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(a1, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 40) + 384LL))(*(_QWORD *)(v11 + 40));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v16, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( i = 0; i < *(_DWORD *)(v11 + 216); v15 = v18 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 8LL * i);
      if ( v15 )
        *(_BYTE *)(v15 + 48) = 0;
      if ( !*(_BYTE *)(v18 + 48) )
      {
        *(_QWORD *)(v18 + 16) = v11;
        CD2DContext::D2DSetTargetInternal((CD2DContext *)v11, (struct CD2DTarget *)v18);
        *(_BYTE *)(v18 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v18);
      }
      ++i;
    }
    *(_BYTE *)(v11 + 400) = 1;
  }
  *(_BYTE *)(v11 + 401) = 1;
  v12 = *(_QWORD *)a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(CDrawingContext *, _BYTE *))(v12 + 16))(a2, v38);
    v35 = *(_QWORD *)(v11 + 40);
    *(_QWORD *)&v37.m[2][0] = 0LL;
    *(_OWORD *)&v37.m11 = _xmm;
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v35 + 240LL))(v35, &v37);
    v8 = v38;
  }
  else
  {
    v13 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(v12 + 8);
    if ( v13 == CDrawingContext::GetWorldTransform3x2 )
      CDrawingContext::GetWorldTransform3x2(a2, &v37);
    else
      v13(a2, &v37);
    (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v11 + 40) + 240LL))(
      *(_QWORD *)(v11 + 40),
      &v37);
  }
  if ( a5 != *(_DWORD *)(v11 + 256) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 40) + 256LL))(*(_QWORD *)(v11 + 40), a5);
    *(_DWORD *)(v11 + 256) = a5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *, unsigned int, int))(**(_QWORD **)(v11 + 48) + 32LL))(
    *(_QWORD *)(v11 + 48),
    a3,
    a6,
    v8,
    a6,
    a7);
  return 0LL;
}
