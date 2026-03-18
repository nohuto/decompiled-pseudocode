/*
 * XREFs of NtCancelTimer2 @ 0x1400B2DEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1);
}
