/*
 * XREFs of ??$InvokeDelegates@V_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800085D0
 * Callers:
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180002830 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOA.c)
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x180007E1C (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x180001690 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180001954 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001B00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800095E4 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_c6ae080ef583bc6f8e5f5c99b68d23f9_,Windows::Foundation::IEventHandler<IInspectable *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  int MatchingRestrictedErrorInfo; // edi
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 *v8; // r14
  _QWORD *i; // rsi
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  MatchingRestrictedErrorInfo = 0;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v13, a2);
  v7 = v13[0];
  v8 = *(__int64 **)(v13[0] + 32);
  for ( i = *(_QWORD **)(v13[0] + 16); i != *(_QWORD **)(v7 + 24); ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *a1, a1[1]);
    MatchingRestrictedErrorInfo = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v11 = *v8;
        v14 = 0LL;
        v13[1] = v11;
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v14);
        v7 = v13[0];
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    ++v8;
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
    v7,
    v6);
  return (unsigned int)MatchingRestrictedErrorInfo;
}
