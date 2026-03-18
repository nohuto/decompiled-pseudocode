/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800746B0
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18014EFA0 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnu.c)
 * Callees:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180022FC4 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18002C5B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z @ 0x18007052C (-HasTripleBufferCriteria@CDisplay@@QEBAJPEA_N@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x180072D14 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007FF9C (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     Template_qz @ 0x18014FB54 (Template_qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CBaseRenderTarget *this, int a2, int a3, CDisplay *a4, int a5)
{
  CDisplay *v9; // rcx
  int HasTripleBufferCriteria; // eax
  __int64 v11; // rbx
  int SwapChain; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  char *v16; // r14
  int BackBuffer; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  *((_BYTE *)this + 328) = CDisplay::IsPrimary(a4);
  HasTripleBufferCriteria = CDisplay::HasTripleBufferCriteria(v9, (bool *)this + 329);
  if ( HasTripleBufferCriteria < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, HasTripleBufferCriteria, 0x2Bu);
  v11 = *((_QWORD *)this + 20);
  v22 = v11;
  ++*(_DWORD *)(v11 + 504);
  *(_DWORD *)(v11 + 508) = GetCurrentThreadId();
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 20),
                (int *)this + 54,
                a5,
                (__int64)a4,
                (struct CDWMOffScreenSwapChain **)this + 26);
  v15 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0x4Fu);
LABEL_13:
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v22);
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qz(v14, v13, *((unsigned int *)this + 64), (char *)a4 + 144);
  v16 = (char *)this + 168;
  BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)this + 26), v13, (struct CD3DSurface **)this + 21);
  v15 = BackBuffer;
  if ( BackBuffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x56u);
    goto LABEL_13;
  }
  v18 = *(_QWORD *)v16;
  *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)v16 + 148LL);
  *((_DWORD *)this + 3) = *(_DWORD *)(v18 + 152);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v22);
  v19 = CHwDisplayRenderTarget::Init((_DWORD)this, a2, a3, (_DWORD)a4, a5);
  v15 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x73u);
  }
  else
  {
    v20 = CBaseRenderTarget::Init(this);
    v15 = v20;
    if ( v20 >= 0 )
    {
      *((_BYTE *)this + 184) = 1;
      return v15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x79u);
  }
LABEL_16:
  if ( v15 == -2003304442 || v15 == -2003304307 )
    *((_DWORD *)this + 75) = v15;
  *((_BYTE *)this + 184) = 0;
  return v15;
}
