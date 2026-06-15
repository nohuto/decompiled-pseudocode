/*
 * XREFs of IsProcessorFeaturePresent_0 @ 0x180037CE2
 * Callers:
 *     __report_gsfailure @ 0x1800365B0 (__report_gsfailure.c)
 *     __scrt_fastfail @ 0x180036850 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent_0(DWORD ProcessorFeature)
{
  return IsProcessorFeaturePresent(ProcessorFeature);
}
