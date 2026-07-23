/*
 * XREFs of PopPepCompleteActivity @ 0x1400C0828
 * Callers:
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPepCompleteActivity(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  int *v3; // rax

  if ( (unsigned int)a3 <= 5 && (a3 = (int)a3, *((_BYTE *)&ActivityAttributes + 136 * (int)a3) == 1) )
  {
    v3 = *(int **)(a1 + 8LL * (int)a3 + 72);
  }
  else
  {
    v3 = *(int **)(a2 + 8LL * (int)a3 + 56);
    a3 = (int)a3;
  }
  if ( (*v3 & 4) == 0 )
    PopFxBugCheck(0x667uLL, (ULONG_PTR)v3, a3, *v3);
  *v3 &= ~4u;
  return (*((__int64 (__fastcall **)(__int64))&ActivityAttributes + 17 * a3 + 16))(a1);
}
