/*
 * XREFs of SdbGetEntryFlags @ 0x1405733F0
 * Callers:
 *     SdbpGetExeEntryFlags @ 0x140573320 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1406C1DB8 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140573494 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x140573734 (AslGuidToString.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-88h]
  _DWORD v8[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  v3 = AslGuidToString(v9, a2, a1);
  if ( v3 < 0 )
  {
    v7 = v3;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetEntryFlags",
      125,
      (unsigned int)"Failed to convert EXE id to string [%x]",
      v7);
  }
  else
  {
    v8[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, v9, 1LL, v8) >= 0 )
      *a2 = v8[0];
    v8[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v5, v9, 0LL, v8) >= 0 )
      *a2 |= v8[0];
    *a2 &= 0xFFFu;
  }
  return 1LL;
}
