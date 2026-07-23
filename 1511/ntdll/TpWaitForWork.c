/*
 * XREFs of TpWaitForWork @ 0x180006F90
 * Callers:
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18000A8EC (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork(Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
