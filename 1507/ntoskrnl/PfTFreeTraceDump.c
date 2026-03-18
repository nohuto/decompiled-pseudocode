/*
 * XREFs of PfTFreeTraceDump @ 0x1400D79B4
 * Callers:
 *     PfGetCompletedTrace @ 0x1404F74C8 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1404F91E4 (PfTTraceListFree.c)
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
