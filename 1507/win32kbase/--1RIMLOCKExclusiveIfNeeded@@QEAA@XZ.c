/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00734E8
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0073240 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C00754B4 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
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
