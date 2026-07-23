/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406660D4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 92);
}
