/*
 * XREFs of ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x180023304
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AE68 (-DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::TestLevel1Device(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)this + 643) && !*((_BYTE *)this + 644)
    || *((_BYTE *)this + 645)
    || *((_DWORD *)this + 154) < 2u
    || *((_DWORD *)this + 155) < 2u )
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x53Au);
    CD3DRegistryDatabase::DisableAdapter(*(struct _LUID *)((char *)this + 592));
  }
  return v1;
}
