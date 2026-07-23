/*
 * XREFs of AslpHasStarForceWrapper @ 0x1406C948C
 * Callers:
 *     AslpFileGetExeWrapper @ 0x1406C77D8 (AslpFileGetExeWrapper.c)
 * Callees:
 *     strncmp @ 0x14014D3F0 (strncmp.c)
 */

__int64 __fastcall AslpHasStarForceWrapper(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v4; // ebp

  v1 = 0;
  v2 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v4 = 0;
  if ( *(_WORD *)(a1 + 6) )
  {
    while ( !*(_DWORD *)(v2 + 12) || !*(_DWORD *)(v2 + 8) || strncmp((const char *)v2, ".ps4", 8uLL) )
    {
      ++v4;
      v2 += 40LL;
      if ( v4 >= *(unsigned __int16 *)(a1 + 6) )
        return v1;
    }
    return 1;
  }
  return v1;
}
