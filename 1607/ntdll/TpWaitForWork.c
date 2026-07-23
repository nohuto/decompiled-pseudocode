/*
 * XREFs of TpWaitForWork @ 0x180082080
 * Callers:
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18003B868 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18003BCE0 (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (unsigned int)TppWorkpValidateWork((_PEB_LDR_DATA *)Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks, v4, v5);
}
