/*
 * XREFs of ViUnlockContextPointer @ 0x140732704
 * Callers:
 *     VfInsertContext @ 0x14025A1E0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14025A398 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
