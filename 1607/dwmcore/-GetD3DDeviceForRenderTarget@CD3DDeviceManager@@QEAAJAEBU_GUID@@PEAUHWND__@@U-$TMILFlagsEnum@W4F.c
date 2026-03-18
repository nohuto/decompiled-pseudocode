/*
 * XREFs of ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034E44
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B6074 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z @ 0x180167280 (-Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x1801679C4 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800356C0 (-GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180035C84 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z @ 0x18017B4B4 (-FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetD3DDeviceForRenderTarget(
        CD3DDeviceManager *a1,
        const struct _GUID *a2,
        __int64 a3,
        int a4,
        struct _LUID a5,
        struct CD3DDeviceLevel1 **a6)
{
  struct CD3DDeviceLevel1 **v6; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  int D3DDeviceInternal; // eax
  unsigned int v11; // ebx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v6 = a6;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 24);
  a6 = (struct CD3DDeviceLevel1 **)v8;
  *v6 = 0LL;
  EnterCriticalSection(v8);
  D3DDeviceInternal = CD3DDeviceManager::EnsureDXGIEnumeration(a1);
  v11 = D3DDeviceInternal;
  if ( D3DDeviceInternal < 0 )
  {
    v14 = 755;
    goto LABEL_13;
  }
  if ( (v16 & 0x10) == 0 )
  {
    LODWORD(v15) = 0;
    if ( CD3DRegistryDatabase::FindAdapter(a5, (unsigned int *)&v15) )
    {
      if ( *(_DWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 12LL * (unsigned int)v15 + 8) < 5u )
      {
        v11 = -2147023496;
        v14 = 789;
      }
      else
      {
        v11 = -2003304307;
        v14 = 784;
      }
      v13 = v11;
    }
    else
    {
      v11 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x45u);
      v14 = 777;
      v13 = -2147024809;
    }
    goto LABEL_14;
  }
  D3DDeviceInternal = CD3DDeviceManager::GetD3DDeviceInternal(a1, a2, a5, v6);
  v11 = D3DDeviceInternal;
  if ( D3DDeviceInternal < 0 )
  {
    v14 = 796;
LABEL_13:
    v13 = D3DDeviceInternal;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v13, v14);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&a6);
  return v11;
}
