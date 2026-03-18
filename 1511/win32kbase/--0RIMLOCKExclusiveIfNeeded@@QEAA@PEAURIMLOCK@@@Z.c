/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000AEE4
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C000ED20 (RIMDeviceIoControl.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive(a2);
  }
  return this;
}
