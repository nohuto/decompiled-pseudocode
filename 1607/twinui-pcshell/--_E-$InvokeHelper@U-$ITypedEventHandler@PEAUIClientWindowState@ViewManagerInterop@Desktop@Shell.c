/*
 * XREFs of ??_E?$InvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@$01@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180020E70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_013c46c4876e793d779fba5076862f22_::__lambda_013c46c4876e793d779fba5076862f22_ @ 0x18001E250 (_lambda_013c46c4876e793d779fba5076862f22_--__lambda_013c46c4876e793d779fba5076862f22_.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_013c46c4876e793d779fba5076862f22_,2>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  lambda_013c46c4876e793d779fba5076862f22_::__lambda_013c46c4876e793d779fba5076862f22_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
