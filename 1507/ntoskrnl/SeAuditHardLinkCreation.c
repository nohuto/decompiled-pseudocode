/*
 * XREFs of SeAuditHardLinkCreation @ 0x1406D1BE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
