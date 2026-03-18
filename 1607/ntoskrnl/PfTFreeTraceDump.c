/*
 * XREFs of PfTFreeTraceDump @ 0x1400066F0
 * Callers:
 *     PfGetCompletedTrace @ 0x1403E6AB4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1403E6E94 (PfTTraceListFree.c)
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
