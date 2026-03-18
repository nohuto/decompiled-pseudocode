/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BA20
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18017F940 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnu.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18007A0C4 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E90C (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B428C (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     Template_qz @ 0x1801804A0 (Template_qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CBaseRenderTarget *this, int a2, int a3, CDisplay *a4, int a5)
{
  bool IsPrimary; // al
  bool v10; // zf
  int SwapChain; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  char *v15; // r15
  int BackBuffer; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax

  IsPrimary = CDisplay::IsPrimary(a4);
  v10 = *((_DWORD *)this + 60) == 24;
  *((_BYTE *)this + 336) = IsPrimary;
  if ( v10 )
    *((_BYTE *)this + 337) = 1;
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 23),
                (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 224),
                (__int64)this + 216);
  v14 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0x44u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qz(v13, v12, *((unsigned int *)this + 66), (char *)a4 + 144);
    v15 = (char *)this + 168;
    BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)this + 27), v12, (struct CD3DSurface **)this + 21);
    v14 = BackBuffer;
    if ( BackBuffer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x4Bu);
    }
    else
    {
      v17 = *(_QWORD *)v15;
      *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)v15 + 148LL);
      *((_DWORD *)this + 3) = *(_DWORD *)(v17 + 152);
      v18 = CHwDisplayRenderTarget::Init((_DWORD)this, a2, a3, (_DWORD)a4, a5);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x67u);
      }
      else
      {
        v19 = CBaseRenderTarget::Init(this);
        v14 = v19;
        if ( v19 >= 0 )
        {
          *((_BYTE *)this + 192) = 1;
          return v14;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x6Du);
      }
    }
  }
  if ( v14 == -2003304442 || v14 == -2003304307 )
    *((_DWORD *)this + 77) = v14;
  *((_BYTE *)this + 192) = 0;
  return v14;
}
