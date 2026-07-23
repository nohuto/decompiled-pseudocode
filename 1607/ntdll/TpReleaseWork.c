/*
 * XREFs of TpReleaseWork @ 0x18003BA20
 * Callers:
 *     LdrpDetectDetour @ 0x180073554 (LdrpDetectDetour.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18003B9C0 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x18003BCE0 (TppWorkpValidateWork.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Work, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Work + 23) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
    }
  }
}
