/*
 * XREFs of ?Cancel@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18000DB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Cancel(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  v4 = -2;
  _InterlockedCompareExchange(&v4, v1, -2);
  if ( !v4 )
  {
    v2 = _InterlockedCompareExchange(a1 + 12, 2, 0);
    if ( v2 == v4 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 152LL))(a1);
  }
  return 0LL;
}
