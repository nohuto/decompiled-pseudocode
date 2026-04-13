/*
 * XREFs of ?get_Status@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAW4AsyncStatus@Foundation@Windows@ABI@@@Z @ 0x180014DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Status(
        __int64 a1,
        _DWORD *a2)
{
  signed __int32 v2; // r8d
  signed __int32 v3; // ecx
  unsigned int v4; // ebx
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v2, -2);
  *a2 = v7;
  v3 = *(_DWORD *)(a1 + 40);
  v6 = -2;
  _InterlockedCompareExchange(&v6, v3, -2);
  if ( v6 == 4 )
  {
    v4 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v6 == -1 )
      return (unsigned int)-2147483623;
  }
  return v4;
}
