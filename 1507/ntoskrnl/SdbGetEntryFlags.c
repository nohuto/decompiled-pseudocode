/*
 * XREFs of SdbGetEntryFlags @ 0x1405C507C
 * Callers:
 *     SdbpGetExeEntryFlags @ 0x1405C4FAC (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1407023A0 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405C5120 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x1405C53C0 (AslGuidToString.c)
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
    AslLogCallPrintf(1LL);
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
