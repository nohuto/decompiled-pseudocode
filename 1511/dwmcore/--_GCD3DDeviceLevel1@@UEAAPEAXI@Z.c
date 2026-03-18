/*
 * XREFs of ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x180024A20
 * Callers:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800B3A54 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumera.c)
 *     ??_ECD3DDeviceLevel1@@WBIA@EAAPEAXI@Z @ 0x1800BDB60 (--_ECD3DDeviceLevel1@@WBIA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x180024514 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::`scalar deleting destructor'(CD3DDeviceLevel1 *this, char a2)
{
  CD3DDeviceLevel1::~CD3DDeviceLevel1(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DDeviceLevel1 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
