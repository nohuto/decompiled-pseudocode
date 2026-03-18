/*
 * XREFs of ViUnlockContextPointer @ 0x1406B2704
 * Callers:
 *     VfInsertContext @ 0x14020AC6C (VfInsertContext.c)
 *     VfRemoveContext @ 0x14020AE24 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
