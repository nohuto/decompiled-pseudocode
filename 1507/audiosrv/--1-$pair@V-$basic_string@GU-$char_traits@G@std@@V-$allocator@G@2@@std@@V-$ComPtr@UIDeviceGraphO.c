/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x180032430
 * Callers:
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$3 @ 0x180047684 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030F90 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::pair<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::~pair<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>(
        _QWORD *a1)
{
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(a1 + 4);
  return std::wstring::_Tidy(a1, 1, 0LL);
}
