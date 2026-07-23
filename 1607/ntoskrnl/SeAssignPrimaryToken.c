/*
 * XREFs of SeAssignPrimaryToken @ 0x140580478
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x14045E3AC (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     SepAuditAssignPrimaryToken @ 0x1405804E4 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 856) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((_QWORD *)(a1 + 856), (__int64)a2);
}
