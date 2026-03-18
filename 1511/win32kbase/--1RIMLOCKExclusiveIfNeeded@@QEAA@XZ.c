/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000AEC4
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C000ED20 (RIMDeviceIoControl.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    RIMUnlockExclusive(v2);
    *(_QWORD *)this = 0LL;
  }
}
