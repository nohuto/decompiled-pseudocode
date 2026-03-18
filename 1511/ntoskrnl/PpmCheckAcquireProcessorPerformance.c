/*
 * XREFs of PpmCheckAcquireProcessorPerformance @ 0x1400755B8
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x140126C74 (PpmPerfControlExecuteAction.c)
 */

char __fastcall PpmCheckAcquireProcessorPerformance(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx

  v2 = 0;
  LOWORD(a2) = 1;
  if ( (_WORD)PpmPerfProcessorsToUpdate )
  {
    while ( !qword_1402D15E8[v2] )
    {
      if ( ++v2 >= (unsigned __int16)PpmPerfProcessorsToUpdate )
        goto LABEL_4;
    }
    LOBYTE(a2) = PpmPerfControlExecuteAction(PpmPerfControlAcquirePerformance, a2);
  }
  else
  {
LABEL_4:
    PpmCheckPipelineIndex += 2;
  }
  return a2;
}
