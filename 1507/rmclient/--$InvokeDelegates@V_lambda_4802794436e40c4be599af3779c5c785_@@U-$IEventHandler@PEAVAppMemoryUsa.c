/*
 * XREFs of ??$InvokeDelegates@V_lambda_4802794436e40c4be599af3779c5c785_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_4802794436e40c4be599af3779c5c785_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000C344
 * Callers:
 *     ??$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x18000C188 (--$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@-$EventSource@U-$IEve.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006280 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18000C7F4 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x18000D308 (-InternalRelease@-$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000DA54 (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_4802794436e40c4be599af3779c5c785_,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  int MatchingRestrictedErrorInfo; // edi
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r15
  _QWORD *i; // r14
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  MatchingRestrictedErrorInfo = 0;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v13);
  v6 = v13;
  v7 = *(_QWORD *)(v13 + 32);
  for ( i = *(_QWORD **)(v13 + 16); i != *(_QWORD **)(v6 + 24); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *a1, a1[1]);
    MatchingRestrictedErrorInfo = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
    {
      RoTransformError(v9, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        v10,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(&v12);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v12);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v12);
        Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(&v12);
        v6 = v13;
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    v7 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
    v6,
    v5);
  return (unsigned int)MatchingRestrictedErrorInfo;
}
