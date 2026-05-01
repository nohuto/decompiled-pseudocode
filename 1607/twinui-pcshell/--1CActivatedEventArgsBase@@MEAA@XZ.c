/*
 * XREFs of ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x180028AB4
 * Callers:
 *     ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x180028B40 (--_ECActivatedEventArgsBase@@MEAAPEAXI@Z.c)
 *     ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ @ 0x180028B7C (--1CActivatedEventArgsWithViewIdBase@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CActivatedEventArgsBase::~CActivatedEventArgsBase(CActivatedEventArgsBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::INavigationActivatedEventArgs'};
  *((_QWORD *)this + 5) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
