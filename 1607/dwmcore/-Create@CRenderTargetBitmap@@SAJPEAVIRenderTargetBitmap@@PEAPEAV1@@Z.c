/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x180132090
 * Callers:
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180033320 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x18001EB70 (--0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x1800AE310 (-Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18013289C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(struct IRenderTargetBitmap *a1, struct CRenderTargetBitmap **a2)
{
  int v4; // eax
  struct WPF::HeapBase *v5; // rdx
  WPF *v6; // rcx
  unsigned int v7; // edi
  CRenderTargetBitmap *v8; // rax
  CRenderTargetBitmap *v9; // rbx
  int v10; // eax
  _BYTE v12[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-30h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, _BYTE *, _QWORD, struct _GUID *))(*(_QWORD *)a1 + 104LL))(
         a1,
         v12,
         0LL,
         &v13);
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x17u);
  }
  else
  {
    v8 = (CRenderTargetBitmap *)WPF::Alloc(v6, v5, 0xD8uLL);
    if ( v8 )
      v9 = CRenderTargetBitmap::CRenderTargetBitmap(v8, &v13, 0);
    else
      v9 = 0LL;
    if ( v9 )
    {
      (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = CRenderTargetBitmap::Initialize(v9, a1);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Eu);
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      else
      {
        *a2 = v9;
      }
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
    }
  }
  return v7;
}
