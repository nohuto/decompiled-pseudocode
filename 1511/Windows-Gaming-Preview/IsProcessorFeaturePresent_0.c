/*
 * XREFs of IsProcessorFeaturePresent_0 @ 0x18002695C
 * Callers:
 *     __report_gsfailure @ 0x180025DA0 (__report_gsfailure.c)
 *     __scrt_fastfail @ 0x1800261EC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent_0(DWORD ProcessorFeature)
{
  return IsProcessorFeaturePresent(ProcessorFeature);
}
