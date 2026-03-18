/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C00E3110
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00E3150 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetProcessWindowStation(HANDLE SourceHandle)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  LODWORD(SourceHandle) = (int)xxxSetProcessWindowStation(SourceHandle) >= 0;
  UserSessionSwitchLeaveCrit(v3, v2);
  return (unsigned int)SourceHandle;
}
