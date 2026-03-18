/*
 * XREFs of GreClientRgnUpdatedStable @ 0x1C010BD6C
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 GreClientRgnUpdatedStable()
{
  GreAcquireSemaphore(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness, 10LL);
  giVisRgnUniquenessStable = giVisRgnUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  return GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
}
