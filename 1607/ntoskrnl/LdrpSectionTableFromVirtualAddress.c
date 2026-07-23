/*
 * XREFs of LdrpSectionTableFromVirtualAddress @ 0x1404C5500
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x1404FE824 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14051E630 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpSectionTableFromVirtualAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v8; // rdx
  int v9; // r9d
  unsigned int v10; // ecx

  if ( a3 )
  {
    v8 = *(unsigned __int16 *)(a3 + 20) + a3 + 24;
    if ( v8 )
    {
      v9 = 0;
      if ( *(_WORD *)(a3 + 6) )
      {
        while ( !a6 || v8 + 40 <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v10 = *(_DWORD *)(v8 + 12);
          if ( a5 == v10 || a5 > v10 && a5 < *(_DWORD *)(v8 + 16) + v10 )
            return v8;
          v8 += 40LL;
          if ( ++v9 >= *(unsigned __int16 *)(a3 + 6) )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
