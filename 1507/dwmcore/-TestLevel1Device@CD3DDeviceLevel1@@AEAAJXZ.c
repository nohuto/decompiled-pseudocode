/*
 * XREFs of ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x18008F704
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18009039C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18013AC68 (-DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::TestLevel1Device(struct _LUID *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( this[81].LowPart && !this[81].HighPart || this[82].LowPart || this[77].HighPart < 2u || this[78].LowPart < 2 )
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x52Bu);
    CD3DRegistryDatabase::DisableAdapter(this[73]);
  }
  return v1;
}
