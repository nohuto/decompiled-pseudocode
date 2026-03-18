/*
 * XREFs of ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800FA918
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z @ 0x1800FA424 (-IsPrimitiveVisibleWithinClip@CD2DContext@@QEAA_NAEBUD2D_RECT_F@@AEBVCMILMatrix@@@Z.c)
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA640 (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA6CC (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ @ 0x1800FAB88 (-EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ.c)
 *     ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x180117D70 (-MilCompositingModeToBlendMode@@YA-AW4Enum@BlendMode@@W41MilCompositingMode@@@Z.c)
 */

__int64 __fastcall CHWDrawListCache::AppendHWDrawListEntries(
        __int64 a1,
        __int64 a2,
        const struct CMILMatrix *a3,
        float a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r15
  unsigned int v7; // esi
  bool v9; // bp
  __int64 i; // r12
  _BYTE *v11; // r14
  const struct D2D_RECT_F *v12; // rdi
  CD2DContext *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int64 v20; // r8
  void (__fastcall *v21)(__int64, __int64, __int128 *); // rbx
  struct ID2D1PrivateCompositorRenderer **v22; // rax
  int appended; // eax
  struct ID2D1PrivateCompositorRenderer **v24; // rax
  int v25; // eax
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int128 v30; // [rsp+48h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(a2 + 376);
  v7 = 0;
  v27 = v6;
  if ( a4 > 0.0 )
  {
    v9 = 0;
    CHWDrawListCache::EnsureColorAnimationsProcessed((CHWDrawListCache *)a1);
    if ( a4 == 1.0 )
      v9 = a5 == 0;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
    {
      v11 = (_BYTE *)(*(_QWORD *)(a1 + 16) + 48 * i);
      v12 = *(const struct D2D_RECT_F **)(*(_QWORD *)v11 + 16LL);
      v13 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 184LL))(v6);
      if ( CD2DContext::IsPrimitiveVisibleWithinClip(v13, v12 + 1, a3) )
      {
        v15 = a5;
        if ( v11[40] && v9 )
          v15 = 1LL;
        v16 = *(_QWORD *)v11 + 28LL;
        if ( *(_DWORD *)(*(_QWORD *)v11 + 144LL) )
        {
          LOBYTE(v14) = a6;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v16 + 16LL))(
            *(_QWORD *)v11 + 28LL,
            v11 + 8,
            v14);
        }
        else
        {
          v17 = MilCompositingModeToBlendMode(v15);
          *(_OWORD *)(v18 + 76) = *(_OWORD *)a3;
          *(_OWORD *)(v18 + 92) = *((_OWORD *)a3 + 1);
          *(_OWORD *)(v18 + 108) = *((_OWORD *)a3 + 2);
          v19 = *((_OWORD *)a3 + 3);
          *(_DWORD *)(v18 + 24) = v17;
          *(float *)(v18 + 140) = a4;
          *(_OWORD *)(v18 + 124) = v19;
          LOBYTE(v20) = a6;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)v16 + 8LL))(v16, v11 + 8, v20, v17);
        }
        if ( v11[42] )
        {
          v21 = *(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 40LL);
          v30 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 16LL) + 16LL);
          v21(v16, a2, &v30);
        }
        if ( v11[41] && v9 )
        {
          v6 = v27;
          v22 = (struct ID2D1PrivateCompositorRenderer **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 184LL))(v27);
          appended = CD2DContext::AppendHWMegaRectEntry(v22, *(struct CHWDrawListEntry **)v11);
          v7 = appended;
          if ( appended < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0xFFu);
            return v7;
          }
        }
        else
        {
          v6 = v27;
          v24 = (struct ID2D1PrivateCompositorRenderer **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 184LL))(v27);
          v25 = CD2DContext::AppendHWDrawListEntry(v24, *(struct CHWDrawListEntry **)v11);
          v7 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x105u);
            return v7;
          }
        }
      }
    }
  }
  return v7;
}
