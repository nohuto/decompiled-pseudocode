/*
 * XREFs of ?GetHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18017FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x18017FDEC (-EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetHDRIntermediateTargetBitmap(
        CHwFullScreenRenderTarget *this,
        struct IRenderTargetBitmap **a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( *((_BYTE *)this + 161) )
  {
    v4 = CHwFullScreenRenderTarget::EnsureHDRIntermediateTargetBitmap((CHwFullScreenRenderTarget *)((char *)this - 176));
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x361u);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 8LL))(*((_QWORD *)this + 23));
      *a2 = (struct IRenderTargetBitmap *)*((_QWORD *)this + 23);
    }
  }
  else
  {
    v5 = -2003292287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292287, 0x368u);
  }
  return v5;
}
