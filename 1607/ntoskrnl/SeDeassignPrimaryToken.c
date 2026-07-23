/*
 * XREFs of SeDeassignPrimaryToken @ 0x14045E3AC
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x140580478 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
