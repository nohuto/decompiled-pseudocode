/*
 * XREFs of RtlInitializeSidEx @ 0x180062260
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 */

__int64 __fastcall RtlInitializeSidEx(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 *v7; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h]

  v10 = a3;
  v11 = a4;
  result = RtlInitializeSid(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v7 = &v10;
      v8 = (_DWORD *)(a1 + 8);
      v9 = a3;
      do
      {
        v7 += 8;
        *v8++ = *(_DWORD *)v7;
        --v9;
      }
      while ( v9 );
    }
    return 0LL;
  }
  return result;
}
