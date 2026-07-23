/*
 * XREFs of TpReleaseWork @ 0x18000A880
 * Callers:
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18000A8EC (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Work, 1LL) )
  {
    *((_QWORD *)Work + 22) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
  }
}
