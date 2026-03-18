/*
 * XREFs of VfPendingFinishLogging @ 0x14070CEF4
 * Callers:
 *     IovpCallDriver1 @ 0x14070A890 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x14070B0B0 (IovpCompleteRequest1.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140084730 (RtlCaptureStackBackTrace.c)
 */

__int64 __fastcall VfPendingFinishLogging(__int64 a1)
{
  __int64 result; // rax

  result = RtlCaptureStackBackTrace(1u, 0x3Eu, (PVOID *)(a1 + 16), 0LL);
  if ( (unsigned __int16)result < 0x3Eu )
    *(_QWORD *)(a1 + 8LL * (unsigned __int16)result + 16) = 0LL;
  return result;
}
