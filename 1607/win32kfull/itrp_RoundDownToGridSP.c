/*
 * XREFs of itrp_RoundDownToGridSP @ 0x1C01132E8
 * Callers:
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundDownToGridSP(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  if ( (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0 && dword_1C0329514 == 1 )
    return itrp_RoundDownToGrid(a1, a2);
  v2 = (int)a2 / 2;
  if ( (int)a1 < 0 )
    result = -((v2 - (_DWORD)a1) & 0xFFFFFFFC);
  else
    result = ((_DWORD)a1 + v2) & 0xFFFFFFFC;
  if ( (int)(a1 ^ result) < 0 )
  {
    if ( (_DWORD)a1 )
      return 0LL;
  }
  return result;
}
