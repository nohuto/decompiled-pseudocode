/*
 * XREFs of PfTFreeTraceDump @ 0x140006860
 * Callers:
 *     PfGetCompletedTrace @ 0x1403E80E4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1403E84C4 (PfTTraceListFree.c)
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
