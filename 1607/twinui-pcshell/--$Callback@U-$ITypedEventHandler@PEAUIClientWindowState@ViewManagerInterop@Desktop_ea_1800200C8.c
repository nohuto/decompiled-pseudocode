/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@01@V_lambda_013c46c4876e793d779fba5076862f22_@@@Z @ 0x1800200C8
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001DB6C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 *     _lambda_013c46c4876e793d779fba5076862f22_::__lambda_013c46c4876e793d779fba5076862f22_ @ 0x18001E250 (_lambda_013c46c4876e793d779fba5076862f22_--__lambda_013c46c4876e793d779fba5076862f22_.c)
 *     ??$Make@U?$InvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@$01@Details@WRL@Microsoft@@AEAV_lambda_013c46c4876e793d779fba5076862f22_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$InvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@$01@Details@WRL@Microsoft@@@12@AEAV_lambda_013c46c4876e793d779fba5076862f22_@@@Z @ 0x180020BA0 (--$Make@U-$InvokeHelper@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_013c46c4876e793d779fba5076862f22_>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_QWORD *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_013c46c4876e793d779fba5076862f22_,2>,_lambda_013c46c4876e793d779fba5076862f22_ &>(&v7);
  *a1 = *v4;
  *v4 = 0LL;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  lambda_013c46c4876e793d779fba5076862f22_::__lambda_013c46c4876e793d779fba5076862f22_(a2);
  return a1;
}
