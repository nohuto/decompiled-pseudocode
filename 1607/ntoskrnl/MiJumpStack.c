/*
 * XREFs of MiJumpStack @ 0x1401E63D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
