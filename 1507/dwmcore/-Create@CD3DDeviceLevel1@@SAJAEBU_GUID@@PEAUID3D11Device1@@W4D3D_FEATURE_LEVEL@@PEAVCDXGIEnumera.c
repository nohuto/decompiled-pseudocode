/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180091D04
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090D78 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x18008B4F0 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18009039C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x180090634 (--0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        const struct _GUID *a1,
        struct ID3D11Device1 *a2,
        int a3,
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
                              1584LL);
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
      _InterlockedIncrement((volatile signed __int32 *)*a7 + 100);
      return v14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD1u);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC9u);
  }
  if ( *a7 )
    CD3DDeviceLevel1::`scalar deleting destructor'(*a7, 1);
  *a7 = 0LL;
  return v14;
}
