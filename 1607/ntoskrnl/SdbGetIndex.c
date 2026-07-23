/*
 * XREFs of SdbGetIndex @ 0x1405143E0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140513FFC (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 * Callees:
 *     SdbpScanIndexes @ 0x1404E899C (SdbpScanIndexes.c)
 */

__int64 __fastcall SdbGetIndex(_DWORD *a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v8; // esi
  int v9; // ecx
  _WORD *v10; // rax
  __int64 v11; // rdx

  v8 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a1[333] )
    SdbpScanIndexes(a1);
  v9 = 0;
  v10 = a1 + 13;
  v11 = 0LL;
  while ( *v10 )
  {
    if ( *v10 == a2 && v10[1] == a3 )
    {
      v8 = a1[10 * v9 + 12];
      if ( a4 )
        *a4 = a1[10 * v9 + 20];
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
