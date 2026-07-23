/*
 * XREFs of RtlKnownExceptionFilter @ 0x18008A4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlKnownExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return (ExceptionPointers->ExceptionRecord->ExceptionCode != -1073741420) - 1;
}
