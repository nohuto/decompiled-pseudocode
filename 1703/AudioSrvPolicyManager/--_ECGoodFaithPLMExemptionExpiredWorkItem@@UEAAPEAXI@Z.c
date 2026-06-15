/*
 * XREFs of ??_ECGoodFaithPLMExemptionExpiredWorkItem@@UEAAPEAXI@Z @ 0x18001E980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CGoodFaithPLMExemptionExpiredWorkItem *__fastcall CGoodFaithPLMExemptionExpiredWorkItem::`vector deleting destructor'(
        CGoodFaithPLMExemptionExpiredWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
