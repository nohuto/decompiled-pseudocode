/*
 * XREFs of DpiInitialize @ 0x1C002F340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInitialize(void *a1, const UNICODE_STRING *a2, _QWORD *a3)
{
  return DpiInitializeInternal(a1, a2, a3, 0);
}
