/*
 * XREFs of MiLockNestedPageAtDpc @ 0x1401F2B78
 * Callers:
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockNestedPageAtDpc(__int64 a1)
{
  return MiLockNestedPageAtDpcInline(a1);
}
