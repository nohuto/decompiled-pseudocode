/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C00D0A88
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     ApiSetGetUserHandedness @ 0x1C0005464 (ApiSetGetUserHandedness.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int UserHandedness; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(a1 + 620) )
  {
    RIMLockExclusive((__int64)&gDeadzoneLock);
    if ( gDeviceArbitrationType == 1 )
    {
      v3 = 1;
    }
    else if ( RIMDeadzone::s_pRimDeadzoneInstance )
    {
      UserHandedness = ApiSetGetUserHandedness();
      v7 = *(_QWORD *)(a1 + 624);
      v10 = *a2;
      v3 = RIMDeadzone::IsInDeadzone(v8, &v10, a3, v7, UserHandedness);
    }
    RIMUnlockExclusive((__int64)&gDeadzoneLock);
  }
  return v3;
}
