/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180020EC0
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800204E0 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025048 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036FF0 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800FA3D4 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
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
  _BYTE *v8; // r12
  __int64 v9; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  void (__fastcall *v13)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rbx
  __int64 v14; // r8
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int i; // edi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  int v26; // esi
  int v27; // ebx
  int v28; // r14d
  _QWORD *v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // esi
  int v33; // ebx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdi
  int v38; // [rsp+38h] [rbp-91h]
  __int64 v40; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_MATRIX_3X2_F v41; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v42[64]; // [rsp+68h] [rbp-61h] BYREF

  v8 = 0LL;
  v9 = a3;
  v11 = a1;
  if ( *(_QWORD *)(a1 + 296) )
  {
    v20 = *(_DWORD *)(a1 + 192);
    v21 = 0LL;
    if ( v20 )
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * (unsigned int)(v20 - 1));
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 24) + 120LL))(*(_QWORD *)(v21 + 24));
    v23 = 0LL;
    v38 = *(_DWORD *)(v22 + 152);
    v24 = *(_DWORD *)(v11 + 192);
    if ( v24 )
      v23 = *(_QWORD *)(*(_QWORD *)(v11 + 168) + 8LL * (unsigned int)(v24 - 1));
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 24) + 120LL))(*(_QWORD *)(v23 + 24));
    v26 = *(_DWORD *)(v11 + 292);
    v27 = *(_DWORD *)(v11 + 288);
    v28 = *(_DWORD *)(v25 + 148);
    v29 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 296LL))(v11, &v40);
    v30 = *(_QWORD *)(v11 + 296);
    *(_QWORD *)(v30 + 64) = *v29;
    *(_DWORD *)(v30 + 72) = v27;
    *(_DWORD *)(v30 + 76) = v26;
    *(_DWORD *)(v30 + 104) = -1082130432;
    *(_DWORD *)(v30 + 108) = 1065353216;
    *(float *)(v30 + 96) = 2.0 / (float)v28;
    *(float *)(v30 + 100) = -2.0 / (float)v38;
    v31 = CD2DContext::DrawCustomCallbackRendererInternal(
            (CD2DContext *)v11,
            *(struct ID2D1PrivateCompositorRenderer **)(v11 + 296));
    if ( v31 >= 0 )
    {
      a1 = *(_QWORD *)(v11 + 296);
      if ( a1 )
      {
        CMILRefCountBase::Release((CMILRefCountBase *)(a1 + 8));
        *(_QWORD *)(v11 + 296) = 0LL;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x27Fu);
    }
    v9 = a3;
  }
  else if ( *(_QWORD *)(a1 + 336) )
  {
    v32 = *(_DWORD *)(a1 + 292);
    v33 = *(_DWORD *)(a1 + 288);
    v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 296LL))(a1, &v40);
    v35 = *(_QWORD *)(v11 + 336);
    *(_QWORD *)(v35 + 40) = *v34;
    *(_DWORD *)(v35 + 48) = v33;
    *(_DWORD *)(v35 + 52) = v32;
    *(_BYTE *)(v35 + 56) = 1;
    v36 = CD2DContext::DrawCustomCallbackRendererInternal(
            (CD2DContext *)v11,
            *(struct ID2D1PrivateCompositorRenderer **)(v11 + 336));
    if ( v36 >= 0 )
    {
      a1 = *(_QWORD *)(v11 + 336);
      if ( a1 )
      {
        CMILRefCountBase::Release((CMILRefCountBase *)(a1 + 8));
        *(_QWORD *)(v11 + 336) = 0LL;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x28Cu);
    }
  }
  if ( !*(_BYTE *)(v11 + 376) )
  {
    v16 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(a1, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 40) + 384LL))(*(_QWORD *)(v11 + 40));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( i = 0; i < *(_DWORD *)(v11 + 192); v16 = v19 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v11 + 168) + 8LL * i);
      if ( v16 )
        *(_BYTE *)(v16 + 48) = 0;
      if ( !*(_BYTE *)(v19 + 48) )
      {
        *(_QWORD *)(v19 + 16) = v11;
        CD2DContext::D2DSetTargetInternal((CD2DContext *)v11, (struct CD2DTarget *)v19);
        *(_BYTE *)(v19 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v19);
      }
      ++i;
    }
    *(_BYTE *)(v11 + 376) = 1;
  }
  *(_BYTE *)(v11 + 377) = 1;
  v12 = *(_QWORD *)a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(CDrawingContext *, _BYTE *))(v12 + 16))(a2, v42);
    v37 = *(_QWORD *)(v11 + 40);
    *(_QWORD *)&v41.m[2][0] = 0LL;
    *(_OWORD *)&v41.m11 = _xmm;
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v37 + 240LL))(v37, &v41);
    v8 = v42;
  }
  else
  {
    v13 = *(void (__fastcall **)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *))(v12 + 8);
    if ( v13 == CDrawingContext::GetWorldTransform3x2 )
      CDrawingContext::GetWorldTransform3x2(a2, &v41);
    else
      v13(a2, &v41);
    (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v11 + 40) + 240LL))(
      *(_QWORD *)(v11 + 40),
      &v41);
  }
  if ( a5 != *(_DWORD *)(v11 + 232) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 40) + 256LL))(*(_QWORD *)(v11 + 40), a5);
    *(_DWORD *)(v11 + 232) = a5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, int, int))(**(_QWORD **)(v11 + 48) + 32LL))(
    *(_QWORD *)(v11 + 48),
    v9,
    v14,
    v8,
    a6,
    a7);
  return 0LL;
}
