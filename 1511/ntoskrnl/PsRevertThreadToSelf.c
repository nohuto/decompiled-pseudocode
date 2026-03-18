/*
 * XREFs of PsRevertThreadToSelf @ 0x1404C722C
 * Callers:
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     PsRevertToSelf @ 0x140640D88 (PsRevertToSelf.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
