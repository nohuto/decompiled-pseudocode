/*
 * XREFs of ?Run@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180046940
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x1800471F8 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v11; // [rsp+48h] [rbp+18h] BYREF
  signed __int32 v12; // [rsp+50h] [rbp+20h] BYREF

  v10 = 0;
  v1 = *(_DWORD *)(a1 - 128);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v1, -2);
  if ( v11 )
  {
    v3 = *(_DWORD *)(a1 - 128);
    v12 = -2;
    _InterlockedCompareExchange(&v12, v3, -2);
    if ( v12 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v10, *(_DWORD *)(a1 - 124), v10);
    v4 = *(_QWORD *)(a1 - 136);
    if ( v4 )
      SetRestrictedErrorInfo(v4);
    v5 = v10;
    if ( (v10 & 0x80000000) == 0 )
    {
LABEL_6:
      v5 = 2147943623LL;
      v10 = -2147023673;
    }
  }
  else
  {
    v5 = v10;
  }
  v6 = a1 - 176;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v6 + 224));
  if ( (_DWORD)result == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v6 + 232) + 8LL))(
           *(_QWORD *)(v6 + 232),
           1LL,
           v5,
           v6 + 256);
    if ( v8 >= 0 && *(_BYTE *)(v6 + 265) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 248), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v9 = *(unsigned int *)(v6 + 252);
    }
    else
    {
      v9 = (unsigned int)v8;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
             v6,
             v9);
  }
  return result;
}
