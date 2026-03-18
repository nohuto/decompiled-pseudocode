/*
 * XREFs of ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007EEC4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B454 (-DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::TestLevel1Device(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( *((_BYTE *)this + 707) && !*((_BYTE *)this + 708)
    || *((_BYTE *)this + 709)
    || *((_DWORD *)this + 170) < 2u
    || *((_DWORD *)this + 171) < 2u )
  {
    v1 = -2147467259;
    if ( IsOOM(-2147467259) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x65Au);
    CD3DRegistryDatabase::DisableAdapter(*(struct _LUID *)((char *)this + 656));
  }
  return v1;
}
