/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000EBE4
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000A230 (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C000FB90 (RIMDeviceIoControl.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C00D3DD0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C00D3E90 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
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
