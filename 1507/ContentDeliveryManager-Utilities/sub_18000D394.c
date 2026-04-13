/*
 * XREFs of sub_18000D394 @ 0x18000D394
 * Callers:
 *     sub_18000C954 @ 0x18000C954 (sub_18000C954.c)
 *     sub_18000CF44 @ 0x18000CF44 (sub_18000CF44.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_18000874C @ 0x18000874C (sub_18000874C.c)
 *     sub_18000D4D4 @ 0x18000D4D4 (sub_18000D4D4.c)
 */

__int64 *__fastcall sub_18000D394(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  __int64 *result; // rax
  __int64 **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 312);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 312);
      if ( v3 )
      {
        sub_18000D4D4(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 312) = 0LL;
  }
  result = (__int64 *)sub_18000D4D4(a1 + 56);
  v5 = (__int64 **)(a1 + 8);
  if ( *((_DWORD *)v5 + 6) )
  {
    if ( *((_DWORD *)v5 + 6) != GetCurrentThreadId() )
      sub_18000874C(retaddr, v6, v7, 0x8007029C);
    *((_DWORD *)v5 + 6) = 0;
    for ( result = *v5; *result; *v5 = result )
    {
      v8 = **v5;
      if ( (__int64 **)v8 == v5 )
      {
        result = v5[2];
        **v5 = (__int64)result;
        break;
      }
      result = (__int64 *)(v8 + 16);
    }
    *v5 = 0LL;
  }
  return result;
}
