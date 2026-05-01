/*
 * XREFs of ??_GComObject@?1???$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@VCSingleViewShellExperience@@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@@12@PEAVCSingleViewShellExperience@@P84@EAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789Windows@@@Z@Z@UEAAPEAXI@Z @ 0x1800205C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall `Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CSingleViewShellExperience,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>'::`2'::ComObject::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
