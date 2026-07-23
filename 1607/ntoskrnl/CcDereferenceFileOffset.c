/*
 * XREFs of CcDereferenceFileOffset @ 0x1401B25EC
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x14001817C (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140018490 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140018534 (CcAcquireBcbLockAndVacbLock.c)
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
