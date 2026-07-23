/*
 * XREFs of PfVerifyScenarioId @ 0x1403EACAC
 * Callers:
 *     PfVerifyTraceBuffer @ 0x1403EAB38 (PfVerifyTraceBuffer.c)
 *     PfVerifyScenarioBuffer @ 0x1403EC7A0 (PfVerifyScenarioBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfVerifyScenarioId(__int64 a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 29;
  for ( i = 29LL; i >= 0; --i )
  {
    if ( !*(_WORD *)(a1 + 2 * i) )
      break;
    --v1;
  }
  return v1 > 0;
}
