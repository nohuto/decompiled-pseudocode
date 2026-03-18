/*
 * XREFs of PsRevertThreadToSelf @ 0x14055CF88
 * Callers:
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     PsRevertToSelf @ 0x1406C31F8 (PsRevertToSelf.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
