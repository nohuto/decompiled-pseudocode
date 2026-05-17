/*
 * XREFs of _vscwprintf_helper @ 0x180096C6C
 * Callers:
 *     _vscwprintf @ 0x180096C50 (_vscwprintf.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 */

__int64 __fastcall vscwprintf_helper(
        __int64 (__fastcall *a1)(__int64 *, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  if ( a2 )
  {
    v6 = 0x7FFFFFFF;
    v8 = 66;
    v7 = 0LL;
    v5 = 0LL;
    return a1(&v5, a2, a3, a4);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
