/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x14062DF18
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 92);
}
