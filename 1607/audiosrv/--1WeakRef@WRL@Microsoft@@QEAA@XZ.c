/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18004FF20
 * Callers:
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$2 @ 0x18003B168 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$2.c)
 *     _CDeviceGraphManager::GetStreamGroup_::_1_::dtor$4 @ 0x18003B4F0 (_CDeviceGraphManager--GetStreamGroup_--_1_--dtor$4.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::dtor$0 @ 0x18003BEC4 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_In_ea_18003BEC4.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Insert_n_::_1_::dtor$1 @ 0x18003BF06 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_In_ea_18003BF06.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::WeakRef::~WeakRef(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
    else
      v3();
  }
}
