/*
 * XREFs of ?Release@CAudioStream@@W7EAAKXZ @ 0x180044E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::Release(__int64 a1)
{
  return CAudioStream::Release((CAudioStream *)(a1 - 8));
}
