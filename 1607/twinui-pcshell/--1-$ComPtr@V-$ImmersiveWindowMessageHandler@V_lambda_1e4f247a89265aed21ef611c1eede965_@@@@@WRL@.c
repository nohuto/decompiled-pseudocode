/*
 * XREFs of ??1?$ComPtr@V?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@@WRL@Microsoft@@QEAA@XZ @ 0x18001ED98
 * Callers:
 *     _CSingleViewShellExperience::RegisterForImmersiveWindowMessages_::_1_::dtor$2 @ 0x1800316E0 (_CSingleViewShellExperience--RegisterForImmersiveWindowMessages_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<ImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>>::~ComPtr<ImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
