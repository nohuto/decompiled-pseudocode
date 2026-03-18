/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x140665FF0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9AC0 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 92);
}
