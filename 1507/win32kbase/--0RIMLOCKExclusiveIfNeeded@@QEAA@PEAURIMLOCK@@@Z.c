/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0073508
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0073240 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C00754B4 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive((__int64)a2);
  }
  return this;
}
