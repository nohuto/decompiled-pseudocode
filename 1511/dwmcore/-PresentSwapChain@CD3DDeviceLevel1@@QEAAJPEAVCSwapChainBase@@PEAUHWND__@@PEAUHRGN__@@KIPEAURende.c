/*
 * XREFs of ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURenderTargetPresentParameters@@@Z @ 0x180022C74
 * Callers:
 *     ?PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z @ 0x1800817BC (-PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x180022AD4 (-PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PresentSwapChain(
        CD3DDeviceLevel1 *this,
        struct CSwapChainBase *a2,
        HWND hWnd,
        HRGN a4,
        unsigned int a5,
        unsigned int a6,
        struct RenderTargetPresentParameters *a7)
{
  int v10; // ebx
  unsigned __int32 v11; // ecx
  volatile __int32 *v12; // r8
  volatile unsigned int v13; // ecx
  unsigned int v14; // edx
  int v15; // eax
  bool v17; // [rsp+50h] [rbp+8h] BYREF

  if ( *((int *)this + 200) >= 0 )
  {
    if ( g_pMediaControl )
    {
      v11 = *((_DWORD *)this + 253);
      v12 = (volatile __int32 *)*((_QWORD *)g_pMediaControl + 2);
      if ( v11 )
      {
        _InterlockedExchange(v12 + 8, v11);
        _InterlockedExchangeAdd(v12 + 10, v11);
        if ( *((_DWORD *)v12 + 9) > v11 )
          v11 = *((_DWORD *)v12 + 9);
        _InterlockedExchange(v12 + 9, v11);
      }
      v13 = g_dwTextureUpdatesPerFrame;
      _InterlockedExchange(v12 + 14, g_dwTextureUpdatesPerFrame);
      _InterlockedExchangeAdd(v12 + 16, v13);
      if ( *((_DWORD *)v12 + 15) > v13 )
        v13 = *((_DWORD *)v12 + 15);
      _InterlockedExchange(v12 + 15, v13);
      v14 = g_lPixelsFilledPerFrame;
      _InterlockedExchange(v12 + 11, g_lPixelsFilledPerFrame);
      _InterlockedExchangeAdd(v12 + 13, v14);
      if ( *((_DWORD *)v12 + 12) > v14 )
        v14 = *((_DWORD *)v12 + 12);
      _InterlockedExchange(v12 + 12, v14);
      *((_DWORD *)this + 252) = 0;
      *((_DWORD *)this + 253) = 0;
    }
    v17 = 0;
    v15 = CD3DDeviceLevel1::PresentSwapChainInternal(this, a2, hWnd, a4, a5, a6, &v17, a7);
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB8Cu);
  }
  else
  {
    CD3DDeviceLevel1::ProcessUnusable(this, 0);
    v10 = *((_DWORD *)this + 200);
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB46u);
  }
  return (unsigned int)v10;
}
