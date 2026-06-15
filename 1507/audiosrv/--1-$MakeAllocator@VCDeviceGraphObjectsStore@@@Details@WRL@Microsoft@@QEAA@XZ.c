/*
 * XREFs of ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180041B08
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$1 @ 0x1800485B6 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceMan_ea_1800485B6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$1 @ 0x1800485F0 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__::_1_::dtor$1 @ 0x18004897D (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphOb_ea_18004897D.c)
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
