/*
 * XREFs of NtGdiCancelDC @ 0x14032A280
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x140326374 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
