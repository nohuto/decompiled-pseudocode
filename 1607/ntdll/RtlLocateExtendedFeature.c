/*
 * XREFs of RtlLocateExtendedFeature @ 0x1800EB580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return (PVOID)RtlLocateExtendedFeature2(ContextEx, FeatureId, 2147353560LL, Length);
}
