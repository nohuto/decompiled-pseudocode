/*
 * XREFs of ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007AE90
 * Callers:
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074700 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007A650 (-GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x18008EE30 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetPresentStatistics(
        CHwFullScreenRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v6; // rax
  bool (__fastcall *v7)(CHwDisplayRenderTarget *__hidden); // rax
  CHwDisplayRenderTarget *v8; // rcx
  bool IsValid; // al
  CDWMSwapChain *v10; // rcx
  __int64 (__fastcall *v11)(CDWMSwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int FrameStatisticsInternal; // eax
  __int64 result; // rax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this - 176;
  v4 = *((_DWORD *)this + 33);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v4, 0x55Du);
    goto LABEL_9;
  }
  v6 = *((_QWORD *)v2 + 23);
  if ( v6 )
  {
    v4 = *(_DWORD *)(v6 + 824);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v4, 0x564u);
      goto LABEL_9;
    }
    if ( !v2[192]
      || *((_QWORD *)v2 + 27)
      && ((v7 = *(bool (__fastcall **)(CHwDisplayRenderTarget *__hidden))(*(_QWORD *)v2 + 208LL),
           v8 = (CHwFullScreenRenderTarget *)((char *)this - 176),
           v7 != CHwDisplayRenderTarget::IsValid)
        ? (IsValid = v7(v8))
        : (IsValid = CHwDisplayRenderTarget::IsValid(v8)),
          IsValid) )
    {
LABEL_9:
      if ( v4 >= 0 )
        goto LABEL_10;
      goto LABEL_26;
    }
    v4 = -2003304442;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304442, 0x571u);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304307, 0x568u);
  }
LABEL_26:
  *((_DWORD *)v2 + 77) = v4;
LABEL_10:
  v14 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1ACu);
  }
  else if ( *((_BYTE *)this + 16) && (v10 = (CDWMSwapChain *)*((_QWORD *)this + 5)) != 0LL )
  {
    v11 = *(__int64 (__fastcall **)(CDWMSwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v10 + 280LL);
    if ( v11 == CDWMSwapChain::GetFrameStatisticsInternal )
      FrameStatisticsInternal = CDWMSwapChain::GetFrameStatisticsInternal(v10, a2);
    else
      FrameStatisticsInternal = v11(v10, a2);
    v14 = FrameStatisticsInternal;
    v4 = FrameStatisticsInternal;
    if ( FrameStatisticsInternal < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameStatisticsInternal, 0x1B3u);
  }
  else
  {
    v4 = -2003304315;
    v14 = -2003304315;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304315, 0x1B0u);
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v4, 0LL, &v14);
  result = v14;
  if ( v14 == -2003304442 || v14 == -2003304307 )
  {
    *((_DWORD *)this + 33) = v14;
    *((_BYTE *)this + 16) = 0;
  }
  return result;
}
