/*
 * XREFs of KeQueryIntervalProfile @ 0x1405605E4
 * Callers:
 *     NtQueryIntervalProfile @ 0x14056058C (NtQueryIntervalProfile.c)
 *     KeSetIntervalProfile @ 0x140560678 (KeSetIntervalProfile.c)
 * Callees:
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  int v2; // [rsp+20h] [rbp-28h]
  char v3; // [rsp+24h] [rbp-24h]
  unsigned int v4; // [rsp+28h] [rbp-20h]

  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  v2 = a1;
  if ( (int)off_140321B18() >= 0 && v3 )
    return v4;
  else
    return 0LL;
}
