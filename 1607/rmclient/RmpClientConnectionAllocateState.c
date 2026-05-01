/*
 * XREFs of RmpClientConnectionAllocateState @ 0x180009AC0
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x180009A28 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     RmpClientSubscriptionAllocateState @ 0x180009E58 (RmpClientSubscriptionAllocateState.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientConnectionAllocateState(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _BYTE v4[8]; // [rsp+48h] [rbp-20h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000EAC0, 0, 0LL, a1, a2 + 16, v4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Simple = RmpClientSubscriptionAllocateState(a2 + 24, v4);
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
