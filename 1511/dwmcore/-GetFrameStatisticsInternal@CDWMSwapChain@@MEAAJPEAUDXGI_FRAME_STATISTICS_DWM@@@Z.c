/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800733B0
 * Callers:
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180073E60 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMSwapChain::GetFrameStatisticsInternal(CDWMSwapChain *this, struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS_DWM *))(**((_QWORD **)this + 37) + 160LL))(
         *((_QWORD *)this + 37),
         a2);
  v5 = v2;
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_180179C58, 2u, v2, 0x268u);
  TranslateDXGIorD3DErrorInContext(v3, 0LL, &v5);
  return v5;
}
