/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180071AB0
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180010DD8 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180022CA0 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x18005DA18 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180071524 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800DDA3C (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CD2DContext::DrawLegacyCommandList(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        char a8)
{
  _BYTE *v8; // r15
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  void (__fastcall *v14)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rbx
  __int64 v15; // r8
  __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned int i; // ebx
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // ebp
  int v26; // eax
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // r9
  int v30; // r8d
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  struct D2D_MATRIX_3X2_F v36; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v37[64]; // [rsp+50h] [rbp-98h] BYREF

  v8 = 0LL;
  v11 = a1;
  if ( *(_QWORD *)(a1 + 312) )
  {
    v21 = *(_DWORD *)(a1 + 192);
    v22 = 0LL;
    if ( v21 )
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * (unsigned int)(v21 - 1));
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 24) + 120LL))(*(_QWORD *)(v22 + 24));
    v24 = 0LL;
    v25 = *(_DWORD *)(v23 + 152);
    v26 = *(_DWORD *)(v11 + 192);
    if ( v26 )
      v24 = *(_QWORD *)(*(_QWORD *)(v11 + 168) + 8LL * (unsigned int)(v26 - 1));
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 24) + 120LL))(*(_QWORD *)(v24 + 24));
    v28 = *(_DWORD *)(v11 + 308);
    v29 = *(_QWORD *)(v11 + 312);
    v30 = *(_DWORD *)(v27 + 148);
    LODWORD(v27) = *(_DWORD *)(v11 + 304);
    *(_QWORD *)(v29 + 64) = *(_QWORD *)(v11 + 296);
    *(_DWORD *)(v29 + 72) = v27;
    *(_DWORD *)(v29 + 76) = v28;
    *(_DWORD *)(v29 + 104) = -1082130432;
    *(_DWORD *)(v29 + 108) = 1065353216;
    *(float *)(v29 + 96) = 2.0 / (float)v30;
    *(float *)(v29 + 100) = -2.0 / (float)v25;
    v31 = CD2DContext::DrawCustomCallbackRendererInternal(
            (CD2DContext *)v11,
            *(struct ID2D1PrivateCompositorRenderer **)(v11 + 312));
    if ( v31 >= 0 )
    {
      a1 = *(_QWORD *)(v11 + 312);
      if ( a1 )
      {
        CMILRefCountBase::Release((CMILRefCountBase *)(a1 + 8));
        *(_QWORD *)(v11 + 312) = 0LL;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x272u);
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 352);
    if ( v12 )
    {
      v32 = *(_DWORD *)(a1 + 308);
      v33 = *(_DWORD *)(a1 + 304);
      *(_QWORD *)(v12 + 40) = *(_QWORD *)(a1 + 296);
      *(_DWORD *)(v12 + 48) = v33;
      *(_DWORD *)(v12 + 52) = v32;
      *(_BYTE *)(v12 + 56) = 1;
      v34 = CD2DContext::DrawCustomCallbackRendererInternal(
              (CD2DContext *)a1,
              *(struct ID2D1PrivateCompositorRenderer **)(a1 + 352));
      if ( v34 >= 0 )
      {
        a1 = *(_QWORD *)(v11 + 352);
        if ( a1 )
        {
          CMILRefCountBase::Release((CMILRefCountBase *)(a1 + 8));
          *(_QWORD *)(v11 + 352) = 0LL;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x282u);
      }
    }
  }
  if ( !*(_BYTE *)(v11 + 232) )
  {
    v17 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(a1, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 40) + 384LL))(*(_QWORD *)(v11 + 40));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v18, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( i = 0; i < *(_DWORD *)(v11 + 192); v17 = v20 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v11 + 168) + 8LL * i);
      if ( v17 )
        *(_BYTE *)(v17 + 48) = 0;
      if ( !*(_BYTE *)(v20 + 48) )
      {
        *(_QWORD *)(v20 + 16) = v11;
        CD2DContext::D2DSetTargetInternal((CD2DContext *)v11, (struct CD2DTarget *)v20);
        *(_BYTE *)(v20 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v20);
      }
      ++i;
    }
    *(_BYTE *)(v11 + 232) = 1;
  }
  *(_BYTE *)(v11 + 244) = 1;
  v13 = *(_QWORD *)a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(CDrawingContext *, _BYTE *))(v13 + 16))(a2, v37);
    v35 = *(_QWORD *)(v11 + 40);
    *(_OWORD *)&v36.m11 = _xmm;
    *(_QWORD *)&v36.m[2][0] = 0LL;
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v35 + 240LL))(v35, &v36);
    v8 = v37;
  }
  else
  {
    v14 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(v13 + 8);
    if ( v14 == CDrawingContext::GetWorldTransform3x2 )
      CDrawingContext::GetWorldTransform3x2(a2, &v36);
    else
      v14(a2, &v36);
    (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v11 + 40) + 240LL))(
      *(_QWORD *)(v11 + 40),
      &v36);
  }
  if ( a5 != *(_DWORD *)(v11 + 236) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 40) + 256LL))(*(_QWORD *)(v11 + 40), a5);
    *(_DWORD *)(v11 + 236) = a5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, int, int))(**(_QWORD **)(v11 + 48) + 32LL))(
    *(_QWORD *)(v11 + 48),
    a3,
    v15,
    v8,
    a6,
    a7);
  return 0LL;
}
