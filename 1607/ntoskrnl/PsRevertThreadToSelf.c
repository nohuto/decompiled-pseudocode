/*
 * XREFs of PsRevertThreadToSelf @ 0x1404A4FF0
 * Callers:
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 *     CmpCmdHiveOpen @ 0x1404A4CD8 (CmpCmdHiveOpen.c)
 *     PsRevertToSelf @ 0x14067F0B0 (PsRevertToSelf.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
