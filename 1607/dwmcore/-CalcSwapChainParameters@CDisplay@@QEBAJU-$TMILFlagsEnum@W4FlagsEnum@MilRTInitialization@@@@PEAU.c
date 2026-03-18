/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180034420
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B6074 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800343C8 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1800809D4 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?DwmEnableHDR@CD3DDeviceManager@@SAJXZ @ 0x180172850 (-DwmEnableHDR@CD3DDeviceManager@@SAJXZ.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        CDisplay *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        int *a6,
        bool *a7)
{
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  struct _LUID *v12; // rcx
  __int16 v13; // r10
  bool CanUseSwapChainBuffersAsShaderInput; // al
  __int16 v15; // r10
  int v16; // ecx
  int v17; // eax
  int v19; // ecx
  int v20; // ecx

  a5[2] = 0;
  a5[3] = 0;
  a5[5] = *((_DWORD *)this + 71);
  v9 = *((_DWORD *)this + 72);
  *((_QWORD *)a5 + 6) = 0LL;
  a5[6] = v9;
  if ( (a2 & 0x10) != 0 )
  {
    a5[14] = 0;
    if ( (a2 & 0x4000) != 0 )
    {
      *a5 = *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
      v10 = *((_DWORD *)this + 29) - *((_DWORD *)this + 27);
    }
    else
    {
      *a5 = *((_DWORD *)this + 66);
      v10 = *((_DWORD *)this + 67);
    }
    a5[1] = v10;
    if ( (a2 & 0x10000000) != 0 )
    {
      v19 = *a5;
      *a5 = a5[1];
      a5[1] = v19;
    }
    v11 = CCommonRegistryData::m_fEnableHighColor == 0;
    *((_QWORD *)a5 + 1) = *((_QWORD *)this + 34);
    if ( v11 || *(int *)(a4 + 676) < 45056 )
    {
      a5[4] = *((_DWORD *)this + 70);
    }
    else
    {
      v20 = *(_DWORD *)(*(_QWORD *)(a4 + 640) + 296LL);
      if ( v20 == 32902 )
      {
        a5[4] = 24;
      }
      else
      {
        if ( v20 == 4318 )
          CD3DDeviceManager::DwmEnableHDR();
        a5[4] = 10;
      }
    }
  }
  else
  {
    a5[14] = 1;
    *a5 = 1;
    a5[1] = 1;
    if ( (a2 & 0x20) != 0 )
    {
      a5[4] = 10;
    }
    else if ( *((_DWORD *)this + 70) == 24 && (a2 & 0xC0) == 0x80 )
    {
      a5[4] = 24;
    }
    else
    {
      a5[4] = 87;
    }
    a5[2] = 0;
    a5[3] = 1;
  }
  a5[8] = 0;
  a5[7] = 1;
  if ( CDisplay::IsOffscreenRenderTarget(this) || (v13 & 0x4000) != 0 )
    goto LABEL_21;
  if ( (v13 & 0x400) != 0 )
  {
    a5[15] = 1;
    a5[10] = (CDisplay::ShouldTripleBuffer(v12) != 0) + 2;
    goto LABEL_12;
  }
  if ( (v13 & 8) != 0 )
LABEL_21:
    a5[15] = 1;
  else
    a5[15] = 0;
  a5[10] = 1;
LABEL_12:
  a5[16] = 0;
  a5[9] = 96;
  CanUseSwapChainBuffersAsShaderInput = CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput((CD3DDeviceLevel1 *)a4);
  v16 = a5[9];
  if ( CanUseSwapChainBuffersAsShaderInput )
    v16 = 112;
  a5[9] = v16;
  if ( (v15 & 0x800) != 0 )
  {
    v17 = a5[16];
    if ( (v15 & 0x4000) == 0 )
      v17 = 1;
    a5[16] = v17;
  }
  *a6 = (unsigned __int8)(~(_BYTE)v15 & 4) >> 2;
  *a7 = (v15 & 0x2000) != 0 && (v15 & 0x10) != 0 && *((_BYTE *)this + 296);
  return 0LL;
}
