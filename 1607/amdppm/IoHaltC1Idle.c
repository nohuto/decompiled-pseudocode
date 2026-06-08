/*
 * XREFs of IoHaltC1Idle @ 0x1C0003570
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0005E5C (ReadGenAddr.c)
 *     C1Halt @ 0x1C0006780 (C1Halt.c)
 *     IssueVerw @ 0x1C00067C0 (IssueVerw.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ebx^2
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = WORD1(a2);
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( v2 )
    IssueVerw(v2, a2);
  ReadGenAddr(a1);
  C1Halt(v5, v4);
}
