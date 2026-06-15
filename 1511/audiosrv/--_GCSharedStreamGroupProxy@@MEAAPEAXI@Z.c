/*
 * XREFs of ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180007530
 * Callers:
 *     ??_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z @ 0x1800490E0 (--_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000BC50 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000BF90 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::`scalar deleting destructor'(
        CSharedStreamGroupProxy *this,
        char a2)
{
  bool v2; // zf
  CBaseStreamGroupProxy *v3; // r14
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rsi
  HANDLE ProcessHeap; // rax

  v2 = *((_QWORD *)this + 10) == 0LL;
  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  v3 = (CSharedStreamGroupProxy *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 17) = &CSharedStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 18) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( !v2 )
    CBaseStreamGroupProxy::DisconnectFromSaDevice((CSharedStreamGroupProxy *)((char *)this + 8));
  v6 = *((_QWORD *)this + 20);
  if ( v6 < 0 )
  {
    v7 = (volatile signed __int32 *)(2 * v6);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(v3);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
