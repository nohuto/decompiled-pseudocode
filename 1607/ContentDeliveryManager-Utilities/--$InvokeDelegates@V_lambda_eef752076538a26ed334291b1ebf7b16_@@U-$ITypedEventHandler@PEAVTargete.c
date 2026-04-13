/*
 * XREFs of ??$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_eef752076538a26ed334291b1ebf7b16_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800449DC
 * Callers:
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800427E8 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@Cont.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_eef752076538a26ed334291b1ebf7b16_,Windows::Foundation::ITypedEventHandler<ContentManagement::TargetedContent::TargetedContentSubscription *,ContentManagement::TargetedContent::TargetedContentUpdatedEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  int MatchingRestrictedErrorInfo; // edi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // r14
  struct IUnknown **i; // rsi
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h]

  MatchingRestrictedErrorInfo = 0;
  v6 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v6 = a2;
    v15 = a2;
  }
  v8 = *(_QWORD *)(v6 + 32);
  for ( i = *(struct IUnknown ***)(v6 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    if ( *a1 )
      v10 = *a1 + 40LL;
    else
      v10 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, v10, a1[1]);
    MatchingRestrictedErrorInfo = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
    {
      RoTransformError(v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<ContentManagement::TargetedContent::TargetedContentSubscription *,ContentManagement::TargetedContent::TargetedContentUpdatedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() != 0 )
      {
        v14 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        v12 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v6 = v15;
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    v8 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
  return (unsigned int)MatchingRestrictedErrorInfo;
}
