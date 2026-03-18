/*
 * XREFs of SdbGetIndex @ 0x140485058
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140484948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140484C74 (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 * Callees:
 *     SdbpScanIndexes @ 0x140505A0C (SdbpScanIndexes.c)
 */

__int64 __fastcall SdbGetIndex(__int64 a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v8; // esi
  int v9; // ecx
  _WORD *v10; // rax
  __int64 v11; // rdx

  v8 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_DWORD *)(a1 + 1332) )
    SdbpScanIndexes();
  v9 = 0;
  v10 = (_WORD *)(a1 + 52);
  v11 = 0LL;
  while ( *v10 )
  {
    if ( *v10 == a2 && v10[1] == a3 )
    {
      v8 = *(_DWORD *)(a1 + 40LL * v9 + 48);
      if ( a4 )
        *a4 = *(_DWORD *)(a1 + 40LL * v9 + 80);
      return v8;
    }
    ++v9;
    ++v11;
    v10 += 20;
    if ( v11 >= 32 )
      return v8;
  }
  return 0LL;
}
