/*
 * XREFs of IsProcessorFeaturePresent_0 @ 0x18002F43E
 * Callers:
 *     __report_gsfailure @ 0x18002E590 (__report_gsfailure.c)
 *     __scrt_fastfail @ 0x18002EC8C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent_0(DWORD ProcessorFeature)
{
  return IsProcessorFeaturePresent(ProcessorFeature);
}
