/*
 * XREFs of SeDeassignPrimaryToken @ 0x1403E76E4
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x14054A4B8 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
