/*
 * XREFs of SdbGetEntryFlags @ 0x140573930
 * Callers:
 *     SdbpGetExeEntryFlags @ 0x140573860 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1406C1EF0 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405739D4 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x140573C74 (AslGuidToString.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v7, a2, a1) < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetEntryFlags", 125, (unsigned int)"Failed to convert EXE id to string [%x]");
  }
  else
  {
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, v7, 1LL, v6) >= 0 )
      *a2 = v6[0];
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, v7, 0LL, v6) >= 0 )
      *a2 |= v6[0];
    *a2 &= 0xFFFu;
  }
  return 1LL;
}
