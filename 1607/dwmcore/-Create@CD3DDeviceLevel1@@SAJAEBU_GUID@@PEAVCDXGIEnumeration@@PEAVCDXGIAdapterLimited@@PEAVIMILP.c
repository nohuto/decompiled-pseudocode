/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x18007FDE0 (--0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180080990 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B2C1C (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        const struct _GUID *a1,
        struct CDXGIEnumeration *a2,
        struct CDXGIAdapterLimited *a3,
        struct IMILPoolManager *a4,
        volatile signed __int32 **a5)
{
  volatile signed __int32 **v5; // rsi
  volatile signed __int32 *v9; // rdi
  int v11; // eax
  int v12; // ebx
  CD3DDeviceLevel1 *v13; // rax
  int v14; // eax
  struct ID3D11Device1 *v16; // [rsp+30h] [rbp-28h] BYREF

  v5 = a5;
  v16 = 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  v11 = CD3DDeviceLevel1::CreateD3DDevice(a3, &v16, (enum D3D_FEATURE_LEVEL *)&a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( IsOOM(v11) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x144u);
  }
  else
  {
    v13 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                WPF::g_pProcessHeap,
                                1936LL);
    if ( v13 )
      v9 = (volatile signed __int32 *)CD3DDeviceLevel1::CD3DDeviceLevel1(v13, a1, a4);
    if ( !v9 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x147u);
      goto LABEL_8;
    }
    v14 = CD3DDeviceLevel1::Init((CD3DDeviceLevel1 *)v9, v16, (enum D3D_FEATURE_LEVEL)a5, a2, a3);
    v12 = v14;
    if ( v14 < 0 )
    {
      if ( IsOOM(v14) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x14Cu);
    }
    else
    {
      _InterlockedIncrement(v9 + 104);
      *v5 = v9;
      v9 = 0LL;
    }
  }
  if ( v12 < 0 && v9 )
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v9, 1u);
LABEL_8:
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Device1 *))v16->lpVtbl->Release)(v16);
  return (unsigned int)v12;
}
