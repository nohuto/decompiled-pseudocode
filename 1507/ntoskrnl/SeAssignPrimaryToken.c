/*
 * XREFs of SeAssignPrimaryToken @ 0x1405C1B24
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14046A2E8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1405054E4 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeAssignPrimaryToken(PEPROCESS Process, PVOID Object)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(Process);
  if ( Process[1].Affinity.Bitmap[5] )
    SeDeassignPrimaryToken((__int64)Process);
  ObfReferenceObject(Object);
  *((_BYTE *)Object + 204) = 1;
  return ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], (__int64)Object);
}
