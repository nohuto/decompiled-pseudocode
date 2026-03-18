/*
 * XREFs of itrp_RoundDownToGridSP @ 0x1C00C060C
 * Callers:
 *     InvokeRoundValue @ 0x1C00BD5B4 (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundDownToGridSP(int a1, int a2)
{
  int v2; // eax
  __int64 result; // rax

  if ( (*(_BYTE *)(qword_1C0323160 + 120) & 4) == 0 && dword_1C0323194 == 1 )
    return itrp_RoundDownToGrid(a1, a2);
  v2 = a2 / 2;
  if ( a1 < 0 )
    result = -((v2 - a1) & 0xFFFFFFFC);
  else
    result = (a1 + v2) & 0xFFFFFFFC;
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( a1 )
      return 0LL;
  }
  return result;
}
