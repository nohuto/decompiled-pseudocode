/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800B3A54
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x180023FDC (--0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z.c)
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x180024A20 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        const struct _GUID *a1,
        struct ID3D11Device1 *a2,
        enum D3D_FEATURE_LEVEL a3,
        struct CDXGIEnumeration *a4,
        struct CDXGIAdapterLimited *a5,
        struct IMILPoolManager *a6,
        struct CD3DDeviceLevel1 **a7)
{
  CD3DDeviceLevel1 *v11; // rax
  struct CD3DDeviceLevel1 *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx

  *a7 = 0LL;
  v11 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                              WPF::g_pProcessHeap,
                              1664LL);
  if ( v11 )
    v12 = CD3DDeviceLevel1::CD3DDeviceLevel1(v11, a1, a6);
  else
    v12 = 0LL;
  *a7 = v12;
  if ( v12 )
  {
    v13 = CD3DDeviceLevel1::Init(v12, a2, a3, a4, a5);
    v14 = v13;
    if ( v13 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)*a7 + 98);
      return v14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD0u);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC8u);
  }
  if ( *a7 )
    CD3DDeviceLevel1::`scalar deleting destructor'(*a7, 1);
  *a7 = 0LL;
  return v14;
}
