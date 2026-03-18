/*
 * XREFs of ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180188E6C
 * Callers:
 *     ?AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z @ 0x180188EC0 (-AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z.c)
 *     ?InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z @ 0x1801894FC (-InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v5);
  }
  return a1;
}
