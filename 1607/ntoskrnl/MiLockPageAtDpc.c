/*
 * XREFs of MiLockPageAtDpc @ 0x1401593E0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiUpdateLargePagePfns @ 0x1401F5E58 (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockPageAtDpc(__int64 a1)
{
  return MiLockPageAtDpcInline(a1);
}
