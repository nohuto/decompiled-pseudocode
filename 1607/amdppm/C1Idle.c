/*
 * XREFs of C1Idle @ 0x1C0003520
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C0006780 (C1Halt.c)
 *     IssueVerw @ 0x1C00067C0 (IssueVerw.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ebx^2

  v2 = WORD1(a2);
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    a1 = 72LL;
    __writemsr(0x48u, 0LL);
  }
  if ( v2 )
    IssueVerw(v2, a2);
  C1Halt(a1, a2);
}
