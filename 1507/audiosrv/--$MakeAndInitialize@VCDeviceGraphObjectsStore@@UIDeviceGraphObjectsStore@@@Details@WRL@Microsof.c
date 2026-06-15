/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800317D0
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800275B0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x180027654 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002A1C4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore>(
        CDeviceGraphObjectsStore **a1)
{
  CDeviceGraphObjectsStore *v2; // rbx
  CDeviceGraphObjectsStore *v3; // rax
  volatile int *v4; // rdx
  const struct _GUID *v5; // rcx
  unsigned int v6; // esi

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (CDeviceGraphObjectsStore *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v2 = CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(v3);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_c98605c9_e402_4c46_b4a2_dc4fd25c790c, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v2;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v2 + 8LL))(v2);
      v6 = 0;
    }
    else if ( InlineIsEqualGUID(v5, v5) )
    {
      *a1 = v2;
      v6 = 0;
      (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v6 = -2147467262;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
      (__int64)v2,
      v4);
  return v6;
}
