/*
 * XREFs of PfTFreeTraceDump @ 0x14001BDB4
 * Callers:
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1403E767C (PfTTraceListFree.c)
 * Callees:
 *     <none>
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
