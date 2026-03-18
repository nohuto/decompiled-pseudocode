/*
 * XREFs of ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x180023734
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DDeviceLevel1::QueryWarpExtension(CD3DDeviceLevel1 *this)
{
  __int64 *v1; // r14
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v1 = (__int64 *)((char *)this + 536);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, char *))this + 69))(
         *((_QWORD *)this + 69),
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         (char *)this + 536) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      v4 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v4) >= 0 )
        *((_DWORD *)this + 136) = v5;
    }
  }
}
