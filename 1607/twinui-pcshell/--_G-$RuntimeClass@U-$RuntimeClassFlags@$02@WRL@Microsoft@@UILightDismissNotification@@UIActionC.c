/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UILightDismissNotification@@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800148D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[11];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v4);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
