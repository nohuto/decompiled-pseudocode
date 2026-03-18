/*
 * XREFs of ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007F280
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::QueryWarpExtension(CD3DDeviceLevel1 *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v2 = (__int64 *)((char *)this + 552);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, char *))this + 71))(
         *((_QWORD *)this + 71),
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         (char *)this + 552) >= 0 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v4 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v4) >= 0 )
        *((_DWORD *)this + 140) = v5;
    }
  }
}
