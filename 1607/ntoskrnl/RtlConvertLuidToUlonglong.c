/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140171E44
 * Callers:
 *     SepLogTokenSidManagement @ 0x140695010 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
