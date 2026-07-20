/*
 * XREFs of RtlCaptureContext @ 0x14000C2FC
 * Callers:
 *     __report_gsfailure @ 0x14000BFF0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlCaptureContext(PCONTEXT ContextRecord)
{
  __imp_RtlCaptureContext(ContextRecord);
}
