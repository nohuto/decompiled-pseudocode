/*
 * XREFs of ?FindAdapter@CD3DDeviceTable@@AEAAHAEAUDXGI_ADAPTER_DESC@@PEAI@Z @ 0x180057720
 * Callers:
 *     ?GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18005778C (-GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEA.c)
 *     ?GetDeviceCapsForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCDirect3DCaps@@@Z @ 0x1800578CC (-GetDeviceCapsForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCDirect3DCaps@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceTable::FindAdapter(CD3DDeviceTable *this, struct DXGI_ADAPTER_DESC *a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // rcx

  v3 = *((_DWORD *)this + 10);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v7 = 304LL * v5;
      if ( *(_DWORD *)(v7 + v6 + 296) == a2->AdapterLuid.LowPart
        && *(_DWORD *)(v7 + v6 + 300) == a2->AdapterLuid.HighPart )
      {
        break;
      }
      if ( ++v5 >= v3 )
        return v4;
    }
    *a3 = v5;
    return 1;
  }
  return v4;
}
