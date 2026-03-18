/*
 * XREFs of CcDereferenceFileOffset @ 0x1401A98A8
 * Callers:
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x1400B1DAC (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400E10E8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400E115C (CcAcquireBcbLockAndVacbLock.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, unsigned int a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
  }
}
