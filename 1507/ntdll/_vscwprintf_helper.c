/*
 * XREFs of _vscwprintf_helper @ 0x1800854BC
 * Callers:
 *     _vscwprintf @ 0x1800854A0 (_vscwprintf.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     _invalid_parameter @ 0x180083FB8 (_invalid_parameter.c)
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
