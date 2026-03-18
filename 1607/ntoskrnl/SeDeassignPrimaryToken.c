/*
 * XREFs of SeDeassignPrimaryToken @ 0x14045F4DC
 * Callers:
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x14057FFCC (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x1400CCF54 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
