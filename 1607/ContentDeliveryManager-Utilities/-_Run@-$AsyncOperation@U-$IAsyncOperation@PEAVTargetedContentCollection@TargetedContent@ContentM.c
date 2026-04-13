/*
 * XREFs of ?_Run@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x1800470DC
 * Callers:
 *     ?OnCancel@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180046A40 (-OnCancel@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@Cont.c)
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x1800471F8 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1800477A4 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedConten.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_Run(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // cl
  int v5; // eax
  __int64 v6; // rdx

  if ( (_DWORD)a2 == 2 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 220)) == 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 232) + 8LL))(
        *(_QWORD *)(a1 + 232),
        a2,
        a3,
        a1 + 256);
      v4 = _InterlockedAdd((volatile signed __int32 *)(a1 + 228), 0xFFFFFFFF) == 0;
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 224)) == 1 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 232) + 8LL))(
          *(_QWORD *)(a1 + 232),
          1LL,
          2147943623LL,
          a1 + 256);
        v4 = _InterlockedAdd((volatile signed __int32 *)(a1 + 228), 0xFFFFFFFF) == 0;
      }
      if ( v4 )
        Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterComplete(a1);
    }
  }
  else if ( (_DWORD)a2 == 1 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 224)) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 232) + 8LL))(
           *(_QWORD *)(a1 + 232),
           1LL,
           a3,
           a1 + 256);
    if ( v5 >= 0 && *(_BYTE *)(a1 + 265) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 248), 0xFFFFFFFF) != 1 )
        return;
      v6 = *(unsigned int *)(a1 + 252);
    }
    else
    {
      v6 = (unsigned int)v5;
    }
    Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
      a1,
      v6);
  }
}
