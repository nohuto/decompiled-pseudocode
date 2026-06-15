/*
 * XREFs of ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003F85C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$1 @ 0x18004C55A (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_18004C55A.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$1 @ 0x18004CB09 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceMan_ea_18004CB09.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$1 @ 0x18004CB43 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__::_1_::dtor$1 @ 0x18004CB7D (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphOb_ea_18004CB7D.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
