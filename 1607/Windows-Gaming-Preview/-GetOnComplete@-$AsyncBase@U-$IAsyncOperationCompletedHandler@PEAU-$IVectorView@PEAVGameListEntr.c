/*
 * XREFs of ?GetOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x18000D8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  signed __int32 v5; // r8d
  signed __int32 v6; // edx
  signed __int32 v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v5, -2);
  if ( v11 == 4 )
  {
    v2 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return v2;
  }
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 )
  {
    do
    {
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v6 + 1, v6);
      if ( v6 == v7 )
        break;
      v6 = v7;
    }
    while ( v7 );
    if ( v6 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a2 = *(_QWORD *)(a1 + 16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFF) == 1 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 16) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      return v2;
    }
  }
  return 0LL;
}
