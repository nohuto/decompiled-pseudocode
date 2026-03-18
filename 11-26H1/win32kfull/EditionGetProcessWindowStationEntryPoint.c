/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x1401BC1F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1401BC230 (_GetProcessWindowStation.c)
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(__int64 a1)
{
  __int64 v2; // rcx

  EnterSharedCrit(0LL, 1LL);
  GetProcessWindowStation(a1);
  return UserSessionSwitchLeaveCrit(v2);
}
