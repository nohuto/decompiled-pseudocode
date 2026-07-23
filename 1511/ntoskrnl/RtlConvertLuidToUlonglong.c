/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140166FD4
 * Callers:
 *     SepLogTokenSidManagement @ 0x1406557E8 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
