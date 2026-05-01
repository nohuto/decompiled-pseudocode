/*
 * XREFs of IsProcessorFeaturePresent_0 @ 0x1800271AA
 * Callers:
 *     __report_gsfailure @ 0x180026130 (__report_gsfailure.c)
 *     __scrt_fastfail @ 0x180026A1C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent_0(DWORD ProcessorFeature)
{
  return IsProcessorFeaturePresent(ProcessorFeature);
}
