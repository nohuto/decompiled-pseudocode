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

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(__int64); // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppWorkpValidateWork(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL, v3);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 176) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v7 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( (char *)v7 == (char *)TppWorkpFree )
          return TppWorkpFree(a1, v4, v5, v6);
        else
          return v7(a1);
      }
    }
  }
  return result;
}
