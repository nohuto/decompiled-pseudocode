/*
 * XREFs of SeAuditHardLinkCreation @ 0x14064E7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
