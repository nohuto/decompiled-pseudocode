/*
 * XREFs of ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180055F6C
 * Callers:
 *     ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180005564 (-IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180055C38 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090C28 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180133220 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180054B38 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x180096A78 (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::EnsureDXGIEnumeration(CD3DDeviceManager *this)
{
  int v1; // edi
  int DXGIEnumeration; // eax
  struct CDXGIEnumeration *v5; // rsi
  int v6; // eax
  struct CDXGIEnumeration *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0LL;
  if ( !*((_QWORD *)this + 10) )
  {
    DXGIEnumeration = CDisplayManager::GetDXGIEnumeration(this, &v7);
    v1 = DXGIEnumeration;
    if ( DXGIEnumeration < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x130u);
      v5 = v7;
    }
    else
    {
      v5 = v7;
      v6 = CD3DRegistryDatabase::InitializeDriversFromRegistry(v7);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD2u);
        CD3DRegistryDatabase::m_fInitialized = 0;
      }
      else
      {
        CD3DRegistryDatabase::m_fInitialized = 1;
      }
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x135u);
      }
      else
      {
        *((_QWORD *)this + 10) = v5;
        v5 = 0LL;
        *((_BYTE *)this + 72) = 1;
      }
    }
    if ( v5 )
      (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return (unsigned int)v1;
}
