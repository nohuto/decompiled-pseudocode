/*
 * XREFs of ViUnlockContextPointer @ 0x1406FE474
 * Callers:
 *     VfInsertContext @ 0x140222554 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14022270C (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
