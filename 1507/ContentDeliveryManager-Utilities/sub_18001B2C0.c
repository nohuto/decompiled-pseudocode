/*
 * XREFs of sub_18001B2C0 @ 0x18001B2C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001B2C0(__int64 a1, int a2)
{
  signed __int32 v3; // ecx
  signed __int32 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+24h] [rbp-24h] BYREF
  __int16 v6; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 48) = a2;
    v3 = *(_DWORD *)(a1 + 40);
    v4 = -2;
    _InterlockedCompareExchange(&v4, v3, -2);
    if ( v4 == -1 )
    {
      return 0LL;
    }
    else
    {
      RoOriginateError(2147483662LL, 0LL);
      return 2147483662LL;
    }
  }
  else
  {
    v5 = 6553705;
    v6 = 0;
    RoOriginateErrorW(2147942487LL, 2LL, &v5);
    return 2147942487LL;
  }
}
