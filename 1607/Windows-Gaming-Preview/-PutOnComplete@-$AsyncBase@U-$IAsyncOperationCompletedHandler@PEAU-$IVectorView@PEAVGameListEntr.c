/*
 * XREFs of ?PutOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x18000D9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v8; // ecx
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF
  signed __int32 v11; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 4 )
  {
    v5 = -2147483634;
    v6 = 2147483662LL;
LABEL_14:
    RoOriginateError(v6, 0LL);
    return v5;
  }
  v5 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), 1, 0) )
  {
    v6 = 2147483672LL;
    v5 = -2147483624;
    goto LABEL_14;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  if ( *(_QWORD *)(a1 + 16) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  _InterlockedOr(v10, 0);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 24), 1u);
  v8 = *(_DWORD *)(a1 + 48);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v8, -2);
  if ( (unsigned int)(v12 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v5;
}
