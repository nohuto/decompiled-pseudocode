/*
 * XREFs of ?Create@CBlurLayer@@SAJPEAVCDrawingContext@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x18018C7E8
 * Callers:
 *     ?UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014FE1C (-UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180013A28 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBlurLayer::Create(
        struct CDrawingContext *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        struct CBlurLayer **a4)
{
  __int64 *v4; // rsi
  struct IRenderTargetBitmap *v5; // rdi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  char v14; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v16; // rax
  struct CBlurLayer *v17; // rsi
  struct _LUID v19; // [rsp+50h] [rbp-30h] BYREF
  const char *v20; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+6Ch] [rbp-14h]
  _BYTE v24[12]; // [rsp+74h] [rbp-Ch] BYREF
  int v25; // [rsp+B0h] [rbp+30h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+C8h] [rbp+48h] BYREF

  v4 = (__int64 *)*((_QWORD *)a1 + 54);
  v25 = 0;
  v5 = 0LL;
  *a4 = 0LL;
  v22 = 0;
  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  v9 = *v4;
  v26 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(v9 + 24))(v4, &v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x17u);
  }
  else
  {
    LODWORD(v23) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 32))(v4);
    v12 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 40))(v4);
    *(_QWORD *)&v24[4] = 0LL;
    HIDWORD(v23) = v12;
    v13 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *, _QWORD))(*v4 + 104))(v4, &v19, &v25, 0LL);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1Du);
      return v11;
    }
    v21 = 37;
    v20 = "DWM Scratch Rendertarget (blur layer)";
    v14 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 168))(v4);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (int)&v20,
                           a2,
                           a3,
                           (__int128 *)&v22,
                           v19,
                           v25,
                           v14,
                           1,
                           1,
                           (__int64)&v26);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x29u);
      v5 = v26;
    }
    else
    {
      v16 = (CExternalLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                112LL);
      v17 = v16;
      v5 = v26;
      if ( v16 )
      {
        CExternalLayer::CExternalLayer(v16, a3, v26);
        *(_QWORD *)v17 = &CBlurLayer::`vftable';
      }
      else
      {
        v17 = 0LL;
      }
      *a4 = v17;
      if ( !v17 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Du);
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  return v11;
}
