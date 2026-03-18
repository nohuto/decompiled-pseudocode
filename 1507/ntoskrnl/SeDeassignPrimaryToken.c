/*
 * XREFs of SeDeassignPrimaryToken @ 0x1405054E4
 * Callers:
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1405C1B24 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
