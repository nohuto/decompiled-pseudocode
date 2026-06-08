/*
 * XREFs of IoHaltC1Idle @ 0x1C00053B0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C000132C (ReadGenAddr.c)
 *     C1Halt @ 0x1C0002A10 (C1Halt.c)
 *     IssueVerw @ 0x1C0002A50 (IssueVerw.c)
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
