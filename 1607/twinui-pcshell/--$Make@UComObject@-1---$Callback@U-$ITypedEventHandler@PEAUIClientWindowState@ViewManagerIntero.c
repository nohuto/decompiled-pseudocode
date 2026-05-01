/*
 * XREFs of ??$Make@UComObject@?1???$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@VCSingleViewShellExperience@@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@23@PEAVCSingleViewShellExperience@@P85@EAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@789Internal@Windows@@@Z@Z@AEAPEAV5@AEAP85@EAAJ12@Z@Details@WRL@Microsoft@@YA?AV?$ComPtr@UComObject@?1???$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@VCSingleViewShellExperience@@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@23@PEAVCSingleViewShellExperience@@P85@EAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@789Internal@Windows@@@Z@Z@@12@AEAPEAVCSingleViewShellExperience@@AEAP84@EAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789Windows@@@Z@Z @ 0x180020AF0
 * Callers:
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@VCSingleViewShellExperience@@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@01@PEAVCSingleViewShellExperience@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@56789@@Z@Z @ 0x180020048 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Intern.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall ___Make_UComObject__1____Callback_U__ITypedEventHandler_PEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_23456__Foundation_Windows__VCSingleViewShellExperience__PEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_3_PEAUIClientWindowReadyForPresentationChangedEventArgs_67893__WRL_Microsoft__YA_AV__ComPtr_U__ITypedEventHandler_PEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_23456__Foundation_Windows___23_PEAVCSingleViewShellExperience__P85_EAAJPEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_789Internal_Windows___Z_Z_AEAPEAV5_AEAP85_EAAJ12_Z_Details_WRL_Microsoft__YA_AV__ComPtr_UComObject__1____Callback_U__ITypedEventHandler_PEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_23456__Foundation_Windows__VCSingleViewShellExperience__PEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_3_PEAUIClientWindowReadyForPresentationChangedEventArgs_67893__WRL_Microsoft__YA_AV__ComPtr_U__ITypedEventHandler_PEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_23456__Foundation_Windows___23_PEAVCSingleViewShellExperience__P85_EAAJPEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_789Internal_Windows___Z_Z__12_AEAPEAVCSingleViewShellExperience__AEAP84_EAAJPEAUIClientWindowState_ViewManagerInterop_Desktop_Shell_Internal_Windows__PEAUIClientWindowReadyForPresentationChangedEventArgs_6789Windows___Z_Z(
        volatile signed __int32 **a1,
        __int64 *a2,
        __int64 *a3)
{
  _DWORD *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v8 = *a3;
    v9 = *a2;
    *(_QWORD *)v6 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>::`vftable';
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v6[3] = 1;
    if ( !v7 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_QWORD *)v6 + 2) = v9;
    *(_QWORD *)v6 = `Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CSingleViewShellExperience,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>'::`2'::ComObject::`vftable';
    *((_QWORD *)v6 + 3) = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = v6;
  }
  return a1;
}
