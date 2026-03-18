/*
 * XREFs of ?Create@CHDRConvertLayer@@SAJPEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x18012F218
 * Callers:
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x1801245B4 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHDRConvertLayer@@IEAA@PEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18012F114 (--0CHDRConvertLayer@@IEAA@PEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitma.c)
 */

__int64 __fastcall CHDRConvertLayer::Create(
        struct IRenderTargetDisplay *a1,
        const struct MilPointAndSizeL *a2,
        struct CHDRConvertLayer **a3)
{
  __int64 v3; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CHDRConvertLayer *v9; // rax
  struct IRenderTargetBitmap *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  v11 = 0LL;
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, struct IRenderTargetBitmap **))(v3 + 472))(a1, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x14u);
  }
  else
  {
    v9 = (CHDRConvertLayer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
    if ( v9 )
      v9 = CHDRConvertLayer::CHDRConvertLayer(v9, a1, a2, v11);
    *a3 = v9;
    if ( !v9 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  return v8;
}
