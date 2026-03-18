/*
 * XREFs of ?Add@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x180173394
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180132B34 (-InternalAddRef@-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 *v12; // rcx

  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
  {
    *v12 = *a3;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef(v12);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
