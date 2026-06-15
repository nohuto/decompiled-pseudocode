/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180067140
 * Callers:
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$2 @ 0x1800475C8 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$2.c)
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$4 @ 0x1800478A0 (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$4.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::dtor$0 @ 0x180047929 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_In_ea_180047929.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::dtor$1 @ 0x18004796B (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_In_ea_18004796B.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(Microsoft::WRL::Details::WeakReferenceImpl **this, volatile int *a2)
{
  Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(this, a2);
}
