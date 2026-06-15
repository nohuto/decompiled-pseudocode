/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180025AAC
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x1800218C4 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022AD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180024D54 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore>(
        CDeviceGraphObjectsStore **a1)
{
  CDeviceGraphObjectsStore *v2; // rbx
  CDeviceGraphObjectsStore *v3; // rax
  const struct _GUID *v4; // rcx
  unsigned int v5; // edi

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (CDeviceGraphObjectsStore *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(v3);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_59405902_8202_4794_2cce_6a9babb36a5e, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v2;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v2 + 8LL))(v2);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v4, v4) )
    {
      *a1 = v2;
      v5 = 0;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v5 = -2147467262;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v2);
  return v5;
}
