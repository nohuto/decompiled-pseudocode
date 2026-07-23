/*
 * XREFs of MiLockNestedPageAtDpc @ 0x1401F29A4
 * Callers:
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiLockNestedPageAtDpc(__int64 a1)
{
  return MiLockNestedPageAtDpcInline(a1);
}
