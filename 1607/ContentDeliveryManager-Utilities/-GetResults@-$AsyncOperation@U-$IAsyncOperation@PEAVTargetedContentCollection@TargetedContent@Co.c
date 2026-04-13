/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUITargetedContentCollection@TargetedContent@ContentManagement@@@Z @ 0x1800467A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAPEAUITargetedContentCollection@TargetedContent@ContentManagement@@@Z @ 0x180047528 (-Get@-$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  signed __int32 v3; // r8d
  signed __int32 v5; // ecx
  __int64 v6; // rcx
  int v7; // ebx
  signed __int32 v9; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 104);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v3, -2);
  if ( v10 == 3 )
  {
    v5 = *(_DWORD *)(a1 - 104);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v5, -2);
    if ( v11 == 3 )
    {
      _InterlockedCompareExchange(&v9, *(_DWORD *)(a1 - 100), v9);
      v6 = *(_QWORD *)(a1 - 112);
      if ( v6 )
        SetRestrictedErrorInfo(v6);
      v7 = v9;
      goto LABEL_9;
    }
  }
  else if ( v10 != 1 )
  {
    v7 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return (unsigned int)v7;
  }
  v7 = 0;
LABEL_9:
  if ( v7 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>::Get(
                           a1 + 104,
                           a2);
  return (unsigned int)v7;
}
