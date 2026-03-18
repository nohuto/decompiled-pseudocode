/*
 * XREFs of itrp_SuperRound @ 0x1C00B8198
 * Callers:
 *     InvokeRoundValue @ 0x1C00B5C98 (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SuperRound(int a1, int a2)
{
  int v2; // eax
  int v3; // r8d
  unsigned int v4; // r8d

  v2 = *(__int16 *)(qword_1C0323E30 + 144);
  v3 = *(__int16 *)(qword_1C0323E30 + 146) - v2;
  if ( a1 < 0 )
    v4 = -(v2 + (*(_DWORD *)(qword_1C0323E30 + 136) & (a2 + v3 - a1)));
  else
    v4 = v2 + (*(_DWORD *)(qword_1C0323E30 + 136) & (a2 + a1 + v3));
  if ( ((a1 ^ v4) & 0x80000000) != 0 )
  {
    if ( a1 )
    {
      v4 = *(__int16 *)(qword_1C0323E30 + 144);
      if ( a1 <= 0 )
        return -v4;
    }
  }
  return v4;
}
