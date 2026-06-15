/*
 * XREFs of ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x18008EA24
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x18008EC70 (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800264C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CExclusiveStreamGroupProxy::~CExclusiveStreamGroupProxy(CExclusiveStreamGroupProxy *this)
{
  CBaseStreamGroupProxy *v2; // rcx
  volatile int *v3; // rdx
  __int64 v4; // rsi

  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable'{for `IInspectable'};
  v2 = (CExclusiveStreamGroupProxy *)((char *)this + 8);
  *(_QWORD *)v2 = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 18) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 19) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  CBaseStreamGroupProxy::DisconnectFromSaDevice(v2);
  v4 = *((_QWORD *)this + 40);
  if ( v4 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(
    (__int64)this,
    v3);
}
