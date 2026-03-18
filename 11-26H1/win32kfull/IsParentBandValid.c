/*
 * XREFs of IsParentBandValid @ 0x14012E59C
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 * Callees:
 *     IsTopLevelParent @ 0x14012EA18 (IsTopLevelParent.c)
 */

__int64 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax

  if ( (unsigned int)IsTopLevelParent(a2, a2, a2, a1) )
    return 1LL;
  v5 = *(_QWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v5 + 233) & 8) != 0 )
    return 1LL;
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_DWORD *)(v6 + 236);
  if ( *(_DWORD *)(v5 + 236) != v7 )
    return 0LL;
  LOBYTE(v7) = ~*(_BYTE *)(v5 + 232);
  return ((*(unsigned __int8 *)(v6 + 232) ^ v7) >> 6) & 1;
}
