/*
 * XREFs of EngFreePrivateUserMem @ 0x1C0264EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngFreePrivateUserMem(PDD_SURFACE_LOCAL psl, PVOID pv)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdWarning(psl, pv);
  WdLogEvent5_WdWarning(v2);
}
