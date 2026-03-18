/*
 * XREFs of ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180132630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??$?9VIRenderTargetBitmap@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VIRenderTargetBitmap@@@01@$$T@Z @ 0x180131F00 (--$-9VIRenderTargetBitmap@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VIRenderTargetBitmap@@@01@$$T@Z.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180131FEC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetLegacyBitmapSource(
        CRenderTargetBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  _QWORD *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax

  v3 = (_QWORD *)((char *)this + 120);
  v4 = 0;
  *a2 = 0LL;
  if ( Microsoft::WRL::operator!=<IRenderTargetBitmap>((_QWORD *)this + 15)
    && (!*(_BYTE *)(v6 + 192)
     || !v7
     || (int)CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(v6 - 16, *(_QWORD *)v7, *(_DWORD *)(v7 + 8)) >= 0) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(*(_QWORD *)*v3 + 184LL))(*v3, a2);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD2u);
  }
  return v4;
}
