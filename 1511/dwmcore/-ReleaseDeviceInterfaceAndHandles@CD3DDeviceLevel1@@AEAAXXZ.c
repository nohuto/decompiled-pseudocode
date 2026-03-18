/*
 * XREFs of ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x180023358
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x180024514 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  if ( *((_QWORD *)this + 66) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 64) + 40LL))(
      *((_QWORD *)this + 64),
      *((_QWORD *)this + 66));
    *((_QWORD *)this + 66) = 0LL;
  }
  v2 = *((_QWORD *)this + 64);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 64));
    *((_QWORD *)this + 64) = 0LL;
  }
  v3 = *((_QWORD *)this + 69);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 69));
    *((_QWORD *)this + 69) = 0LL;
  }
}
