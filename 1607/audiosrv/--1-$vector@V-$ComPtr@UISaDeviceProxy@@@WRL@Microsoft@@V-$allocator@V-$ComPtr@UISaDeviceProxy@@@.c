/*
 * XREFs of ??1?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800708B4
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x18003AF4D (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x1800788C7 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@0@Z @ 0x1800723DC (-_Destroy@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        _QWORD *a1)
{
  if ( *a1 )
  {
    std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Destroy(a1, *a1, a1[1]);
    std::_Deallocate((_QWORD *)*a1, (__int64)(a1[2] - *a1) >> 3, 8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
