/*
 * XREFs of CmpIsKcbLockAllowed @ 0x1403E0758
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsKcbLockAllowed(unsigned __int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r9d

  v3 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  v4 = (*(_DWORD *)(a2 + 4) >> 21) & 0x3FF;
  *a3 = 0;
  if ( v3 < v4 )
    return 1;
  if ( v3 <= v4 )
  {
    if ( a1 < a2 )
      return 1;
    if ( a1 <= a2 )
    {
      *a3 = 1;
      return 1;
    }
  }
  return 0;
}
