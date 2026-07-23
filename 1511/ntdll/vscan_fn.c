/*
 * XREFs of vscan_fn @ 0x180099DCC
 * Callers:
 *     sscanf @ 0x180099D90 (sscanf.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 */

__int64 __fastcall vscan_fn(
        __int64 (__fastcall *HashTable)(__int64 *, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // r10
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( a2 && a3 )
  {
    v10 = 73;
    v9 = a2;
    v7 = a2;
    if ( v5 > 0x7FFFFFFF )
      LODWORD(v5) = 0x7FFFFFFF;
    v8 = v5;
    return HashTable(&v7, a3, a4, a5);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
