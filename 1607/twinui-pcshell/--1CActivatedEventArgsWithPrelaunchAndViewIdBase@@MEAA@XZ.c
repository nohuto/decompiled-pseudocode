/*
 * XREFs of ??1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ @ 0x180028C6C
 * Callers:
 *     ??_ECActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAAPEAXI@Z @ 0x180028D10 (--_ECActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAAPEAXI@Z.c)
 *     ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x180028DC0 (--_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@345@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180028F58 (--1-$RuntimeClass@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Act.c)
 *     ??_G?$RuntimeClass@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@345@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002A4C0 (--_G-$RuntimeClass@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Ac.c)
 * Callees:
 *     <none>
 */

void __fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::~CActivatedEventArgsWithPrelaunchAndViewIdBase(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this)
{
  *(_QWORD *)this = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::INavigationActivatedEventArgs'};
  *((_QWORD *)this + 5) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 13) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs'};
  *((_QWORD *)this + 14) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 15) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs'};
  *((_QWORD *)this + 16) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 22) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs'};
  *((_QWORD *)this + 23) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializePrelaunchActivatedEventArgs>,Microsoft::WRL::Details::Nil>,1,0>'};
  CActivatedEventArgsWithViewIdBase::~CActivatedEventArgsWithViewIdBase(this);
}
