/*
 * XREFs of MiLockPageAtDpc @ 0x140159950
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiUpdateLargePagePfns @ 0x1401F5C84 (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockPageAtDpc(__int64 a1)
{
  return MiLockPageAtDpcInline(a1);
}
