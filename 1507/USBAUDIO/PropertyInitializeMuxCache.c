/*
 * XREFs of PropertyInitializeMuxCache @ 0x1C001A310
 * Callers:
 *     TopologyProcessSelectorUnit @ 0x1C0017210 (TopologyProcessSelectorUnit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeMuxCache(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a3[1] == 1 )
  {
    *a3 = 1;
    result = 0LL;
    a3[1] = 1;
  }
  else
  {
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, unsigned int *))(a2 + 136))(a1, a2, 131LL, &v7) >= 0 )
      a3[1] = v7;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *))(a2 + 136))(a1, a2, 129LL, &v8);
    if ( (int)result >= 0 )
    {
      if ( a3[1] >= v8 && v8 )
        *a3 = v8;
      else
        return 3221225858LL;
    }
  }
  return result;
}
