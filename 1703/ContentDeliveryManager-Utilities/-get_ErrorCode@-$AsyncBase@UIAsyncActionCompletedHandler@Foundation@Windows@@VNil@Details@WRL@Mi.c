/*
 * XREFs of ?get_ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAJ@Z @ 0x18001BD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_ErrorCode(
        __int64 a1,
        volatile signed __int32 *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // ebx
  signed __int32 v6; // ecx
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v2, -2);
  if ( v8 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
LABEL_6:
    *a2 = v5;
    return v5;
  }
  if ( v8 == -1 )
  {
    v5 = -2147483623;
    goto LABEL_6;
  }
  v6 = *(_DWORD *)(a1 + 40);
  v5 = 0;
  v9 = -2;
  _InterlockedCompareExchange(&v9, v6, -2);
  if ( v9 != 3 )
    goto LABEL_6;
  _InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 44), *a2);
  if ( *(_QWORD *)(a1 + 32) )
    SetRestrictedErrorInfo();
  return v5;
}
