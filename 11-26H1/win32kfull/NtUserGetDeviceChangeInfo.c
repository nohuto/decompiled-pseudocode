/*
 * XREFs of NtUserGetDeviceChangeInfo @ 0x1402B33B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetDeviceChangeInfo @ 0x1402A023C (xxxGetDeviceChangeInfo.c)
 */

__int64 NtUserGetDeviceChangeInfo()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = xxxGetDeviceChangeInfo(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
