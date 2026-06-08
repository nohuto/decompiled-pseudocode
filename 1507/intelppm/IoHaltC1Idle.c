/*
 * XREFs of IoHaltC1Idle @ 0x1C0004530
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C0002200 (C1Halt.c)
 *     IssueVerw @ 0x1C0002240 (IssueVerw.c)
 *     ReadGenAddr @ 0x1C000346C (ReadGenAddr.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, int a2)
{
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  ReadGenAddr(a1);
  C1Halt();
}
