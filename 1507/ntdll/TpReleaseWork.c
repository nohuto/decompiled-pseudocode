/*
 * XREFs of TpReleaseWork @ 0x18003CA20
 * Callers:
 *     LdrpDetectDetour @ 0x18007D6B8 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18003CD60 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     TppWorkpFree @ 0x18003D7D0 (TppWorkpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  __int64 v2; // r8
  __int64 (__fastcall *v3)(PVOID); // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL) )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(Work, 1LL, v2) )
    {
      *((_QWORD *)Work + 22) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      {
        v3 = (__int64 (__fastcall *)(PVOID))**((_QWORD **)Work + 1);
        if ( v3 == TppWorkpFree )
          TppWorkpFree(Work);
        else
          v3(Work);
      }
    }
  }
}
