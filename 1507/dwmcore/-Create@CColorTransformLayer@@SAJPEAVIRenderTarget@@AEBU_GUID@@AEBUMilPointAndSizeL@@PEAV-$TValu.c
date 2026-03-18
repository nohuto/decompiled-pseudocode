/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@PEAPEAV1@@Z @ 0x1800FB950
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@@Z @ 0x1800F3FA4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180001D44 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180001FC0 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 *a1,
        __int64 a2,
        const struct MilPointAndSizeL *a3,
        __int64 a4,
        CExternalLayer **a5)
{
  CExternalLayer **v5; // r15
  __int64 v9; // rax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  int ScratchRenderTargetBitmap; // eax
  struct IRenderTargetBitmap *v16; // r14
  CExternalLayer *v17; // rax
  CExternalLayer *v18; // rbx
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  const char *v24; // [rsp+58h] [rbp-28h] BYREF
  int v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+6Ch] [rbp-14h]
  _BYTE v28[12]; // [rsp+74h] [rbp-Ch] BYREF
  struct IRenderTargetBitmap *v29; // [rsp+B0h] [rbp+30h] BYREF

  v5 = a5;
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v9 = *a1;
  v26 = 0;
  *a5 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, int *))(v9 + 24))(a1, &v26);
  v12 = v11;
  if ( v11 >= 0 )
  {
    LODWORD(v27) = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
    v13 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
    *(_QWORD *)&v28[4] = 0LL;
    HIDWORD(v27) = v13;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, CExternalLayer ***))(*a1 + 104))(a1, &v23, &a5);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v25 = 48;
      v24 = "DWM Scratch Rendertarget (color transform layer)";
      LOBYTE(v22) = 0;
      LOBYTE(v21) = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 160))(a1);
      LODWORD(v20) = (_DWORD)a5;
      ScratchRenderTargetBitmap = CExternalLayer::GetScratchRenderTargetBitmap(
                                    (__int64)&v24,
                                    a2,
                                    a3,
                                    (__int128 *)&v26,
                                    v23,
                                    v20,
                                    v21,
                                    v22,
                                    &v29);
      v16 = v29;
      v12 = ScratchRenderTargetBitmap;
      if ( ScratchRenderTargetBitmap >= 0 )
      {
        v17 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  112LL);
        v18 = v17;
        if ( v17 )
        {
          CExternalLayer::CExternalLayer(v17, a3, v16);
          *((_QWORD *)v18 + 13) = a4;
          *(_QWORD *)v18 = &CColorTransformLayer::`vftable';
        }
        else
        {
          v18 = 0LL;
        }
        *v5 = v18;
        if ( !v18 )
        {
          v12 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x2Bu);
      }
      if ( v16 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x18u);
  }
  return v12;
}
