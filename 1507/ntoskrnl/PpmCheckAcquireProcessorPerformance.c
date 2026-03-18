/*
 * XREFs of PpmCheckAcquireProcessorPerformance @ 0x1400E8F64
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14015A4A0 (PpmPerfControlExecuteAction.c)
 */

char __fastcall PpmCheckAcquireProcessorPerformance(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx

  v2 = 0;
  LOWORD(a2) = 1;
  if ( LOWORD(PpmPerfProcessorsToUpdate[0]) )
  {
    while ( !qword_140320788[v2] )
    {
      if ( ++v2 >= LOWORD(PpmPerfProcessorsToUpdate[0]) )
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
