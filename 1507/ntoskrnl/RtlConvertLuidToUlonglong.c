/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140195E40
 * Callers:
 *     SepLogTokenSidManagement @ 0x1406D7694 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
