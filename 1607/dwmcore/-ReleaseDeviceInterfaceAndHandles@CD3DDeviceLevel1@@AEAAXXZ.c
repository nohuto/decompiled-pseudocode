/*
 * XREFs of ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007EF1C
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 68) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 40LL))(*((_QWORD *)this + 66));
    *((_QWORD *)this + 68) = 0LL;
  }
  v2 = *((_QWORD *)this + 66);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 66) = 0LL;
  }
  v3 = *((_QWORD *)this + 71);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 71) = 0LL;
  }
}
