/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180022440
 * Callers:
 *     ?Invoke@?$InvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@@V_lambda_013c46c4876e793d779fba5076862f22_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIClientWindowState@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789Windows@@@Z @ 0x1800205F0 (-Invoke@-$InvokeHelper@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Desktop@S.c)
 *     ?Invoke@?$InvokeHelper@U?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@Windows@@V_lambda_587ab2033dc5b1aed1eae36cec5be19f_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@6789@@Z @ 0x180020720 (-Invoke@-$InvokeHelper@U-$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Inte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
