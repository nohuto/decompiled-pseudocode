/*
 * XREFs of ??1?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@WRL@Microsoft@@QEAA@XZ @ 0x18001EED0
 * Callers:
 *     _CSingleViewShellExperience::RegisterSessionIdleDetector_::_1_::dtor$2 @ 0x1800316C2 (_CSingleViewShellExperience--RegisterSessionIdleDetector_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007F40 (-Release@-$RuntimeClass@U-$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@M.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<SessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>>::~ComPtr<SessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IOleWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
