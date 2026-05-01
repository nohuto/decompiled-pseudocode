/*
 * XREFs of ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DDC4
 * Callers:
 *     ??$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_38e201a94f1ead6275cfb8116ae5177e_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CD34 (--$InvokeDelegates@V_lambda_38e201a94f1ead6275cfb8116ae5177e_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ??$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_4802794436e40c4be599af3779c5c785_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000CE64 (--$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000D5B8 (-Add@-$GitEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     ?Invoke@?$GitInvokeHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@4@@Z @ 0x18000DEA0 (-Invoke@-$GitInvokeHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
