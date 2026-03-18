/*
 * XREFs of bFntCacheCreateHLink @ 0x1C0157E68
 * Callers:
 *     SearchFntCacheNewLink @ 0x1C0157DD4 (SearchFntCacheNewLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFntCacheCreateHLink(unsigned int a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // r8

  v1 = *(_QWORD *)qword_1C0328CC8;
  v2 = a1 % 0x3D;
  v3 = *(unsigned int *)(*(_QWORD *)qword_1C0328CC8 + 4 * v2 + 72);
  if ( (_DWORD)v3 == -1 )
  {
    *(_DWORD *)(v1 + 4 * v2 + 72) = *(_DWORD *)(qword_1C0328CC8 + 8);
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 16);
    if ( (unsigned int)v3 > v4 )
      return 0LL;
    while ( 1 )
    {
      v5 = 28 * v3 + v1 + 316;
      if ( *(_DWORD *)(v5 + 8) == -1 )
        break;
      v3 = *(unsigned int *)(v5 + 8);
      if ( (unsigned int)v3 > v4 )
      {
        *(_DWORD *)(qword_1C0328CC8 + 16) |= 2u;
        return 0LL;
      }
    }
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(qword_1C0328CC8 + 8);
  }
  return 1LL;
}
