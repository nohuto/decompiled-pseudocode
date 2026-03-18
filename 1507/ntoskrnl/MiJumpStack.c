/*
 * XREFs of MiJumpStack @ 0x14015D83C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpc((__int64)MiDoStackCopy, a1);
}
