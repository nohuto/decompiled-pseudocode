/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000CC10 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  signed __int32 v3; // r8d
  signed __int32 v5; // ecx
  int v6; // ebx
  signed __int32 v8; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v9; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v10; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 88);
  v9 = -2;
  _InterlockedCompareExchange(&v9, v3, -2);
  if ( v9 == 3 )
  {
    v5 = *(_DWORD *)(a1 - 88);
    v10 = -2;
    _InterlockedCompareExchange(&v10, v5, -2);
    if ( v10 == 3 )
    {
      _InterlockedCompareExchange(&v8, *(_DWORD *)(a1 - 84), v8);
      if ( *(_QWORD *)(a1 - 96) )
        SetRestrictedErrorInfo();
      v6 = v8;
      goto LABEL_9;
    }
  }
  else if ( v9 != 1 )
  {
    v6 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return (unsigned int)v6;
  }
  v6 = 0;
LABEL_9:
  if ( v6 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Get(
                           a1 + 96,
                           a2);
  return (unsigned int)v6;
}
