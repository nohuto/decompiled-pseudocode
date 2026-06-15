/*
 * XREFs of ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000C3D4
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18003A9DC (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@@Details@WRL@Microsof.c)
 * Callees:
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180047698 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
CDeviceGraphObjectsStore *__fastcall CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceGraphObjectsStore::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 80,
    0x18uLL,
    4,
    std::vector<Microsoft::WRL::WeakRef>::vector<Microsoft::WRL::WeakRef>,
    std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 176), 0, 0);
  return this;
}
