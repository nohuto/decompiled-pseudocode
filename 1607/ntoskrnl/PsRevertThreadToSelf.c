/*
 * XREFs of PsRevertThreadToSelf @ 0x140499DE4
 * Callers:
 *     EtwpCreateLogFile @ 0x140494518 (EtwpCreateLogFile.c)
 *     CmpCmdHiveOpen @ 0x14049C7BC (CmpCmdHiveOpen.c)
 *     PsRevertToSelf @ 0x14067EFCC (PsRevertToSelf.c)
 * Callees:
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
