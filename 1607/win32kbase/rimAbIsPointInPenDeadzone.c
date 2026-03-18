/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1C00D0B1C
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C00D0E00 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1C00D1E50 (RIMIsPointInPenDeadzone.c)
 * Callees:
 *     ApiSetGetUserHandedness @ 0x1C0005464 (ApiSetGetUserHandedness.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int UserHandedness; // eax
  __int64 v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( gDeviceArbitrationType )
  {
    if ( gDeviceArbitrationType == 1 )
    {
      return 1;
    }
    else if ( (unsigned int)(gDeviceArbitrationType - 2) <= 1 )
    {
      RIMLockExclusive((__int64)&gDeadzoneLock);
      if ( RIMDeadzone::s_pRimDeadzoneInstance )
      {
        v8 = *a1;
        UserHandedness = ApiSetGetUserHandedness();
        v3 = RIMDeadzone::IsInDeadzone(v6, &v8, a2, a3, UserHandedness);
      }
      RIMUnlockExclusive((__int64)&gDeadzoneLock);
    }
  }
  return v3;
}
