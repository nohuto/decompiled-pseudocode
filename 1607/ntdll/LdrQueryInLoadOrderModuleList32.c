/*
 * XREFs of LdrQueryInLoadOrderModuleList32 @ 0x18006DED0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReadMemory @ 0x18006DBF4 (LdrpReadMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList32(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))a1[2])(*a1, 26LL, &v9);
  if ( (int)result >= 0 )
  {
    if ( !v9 )
      return 0LL;
    result = LdrpReadMemory(a1, (int)v9 + 12, (int)&v8, 4LL);
    if ( (int)result >= 0 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      *a2 = v8 + 12LL;
      if ( a3 )
        *a3 = v7 + 28;
      return (unsigned int)result;
    }
  }
  return result;
}
