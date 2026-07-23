/*
 * XREFs of PoGetProcessorPerformanceClass @ 0x14020A2CC
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8 (KiConfigureHeteroProcessorsTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall PoGetProcessorPerformanceClass(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *(_QWORD *)(a1 + 24176);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 198);
  return result;
}
