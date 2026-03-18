/*
 * XREFs of SeAssignPrimaryToken @ 0x14054A4B8
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14044F884 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     SeDeassignPrimaryToken @ 0x1403E76E4 (SeDeassignPrimaryToken.c)
 *     SepAuditAssignPrimaryToken @ 0x14054A524 (SepAuditAssignPrimaryToken.c)
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
