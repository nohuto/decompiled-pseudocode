/*
 * XREFs of IsProcessorFeaturePresent_0 @ 0x180026A8C
 * Callers:
 *     __report_gsfailure @ 0x180025ED0 (__report_gsfailure.c)
 *     __scrt_fastfail @ 0x18002631C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent_0(DWORD ProcessorFeature)
{
  return IsProcessorFeaturePresent(ProcessorFeature);
}
