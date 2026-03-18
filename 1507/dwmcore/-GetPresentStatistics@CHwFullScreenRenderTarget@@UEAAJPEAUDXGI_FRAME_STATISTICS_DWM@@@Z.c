/*
 * XREFs of ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800430B0
 * Callers:
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18004B220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 * Callees:
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800427D0 (-GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180044CE0 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetPresentStatistics(
        CHwFullScreenRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v6; // rax
  bool (__fastcall *v7)(CHwDisplayRenderTarget *__hidden); // r14
  bool IsValid; // al
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(CDWMSwapChain *, struct DXGI_FRAME_STATISTICS_DWM *); // rdi
  int FrameStatisticsInternal; // eax
  __int64 result; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this - 176;
  v4 = *((_DWORD *)this + 31);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v4, 0x687u);
    goto LABEL_9;
  }
  v6 = *((_QWORD *)v2 + 20);
  if ( v6 )
  {
    v4 = *(_DWORD *)(v6 + 836);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v4, 0x68Eu);
      goto LABEL_9;
    }
    if ( !v2[184]
      || *((_QWORD *)v2 + 26)
      && ((v7 = *(bool (__fastcall **)(CHwDisplayRenderTarget *__hidden))(*(_QWORD *)v2 + 192LL),
           v7 != CHwDisplayRenderTarget::IsValid)
        ? (IsValid = v7((CHwFullScreenRenderTarget *)((char *)this - 176)))
        : (IsValid = CHwDisplayRenderTarget::IsValid((CHwFullScreenRenderTarget *)((char *)this - 176))),
          IsValid) )
    {
LABEL_9:
      if ( v4 >= 0 )
        goto LABEL_10;
      goto LABEL_27;
    }
    v4 = -2003304442;
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304442, 0x69Bu);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304307, 0x692u);
  }
LABEL_27:
  *((_DWORD *)v2 + 75) = v4;
LABEL_10:
  v13 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1A9u);
  }
  else if ( *((_BYTE *)this + 8) && (v9 = *((_QWORD *)this + 4)) != 0 )
  {
    v10 = *(__int64 (__fastcall **)(CDWMSwapChain *, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v9 + 264LL);
    if ( v10 == CDWMSwapChain::GetFrameStatisticsInternal )
      FrameStatisticsInternal = CDWMSwapChain::GetFrameStatisticsInternal(*((CDWMSwapChain **)this + 4), a2);
    else
      FrameStatisticsInternal = v10(*((CDWMSwapChain **)this + 4), a2);
    v13 = FrameStatisticsInternal;
    v4 = FrameStatisticsInternal;
    if ( FrameStatisticsInternal < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameStatisticsInternal, 0x1B0u);
  }
  else
  {
    v4 = -2003304315;
    v13 = -2003304315;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304315, 0x1ADu);
  }
  TranslateDXGIorD3DErrorInContext(v4, 0, &v13);
  result = v13;
  if ( v13 == -2003304442 || v13 == -2003304307 )
  {
    *((_DWORD *)this + 31) = v13;
    *((_BYTE *)this + 8) = 0;
  }
  return result;
}
