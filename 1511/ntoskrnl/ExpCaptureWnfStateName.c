/*
 * XREFs of ExpCaptureWnfStateName @ 0x1403E5210
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     NtUnsubscribeWnfStateChange @ 0x1403E24A8 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404B550C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCaptureWnfStateName(__int64 *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( a3 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v3 = *a1;
  }
  else
  {
    v3 = *a1;
  }
  v4 = v3 ^ 0x41C64E6DA3BC0074LL;
  *a2 = v4;
  if ( (v4 & 0xF) != 1 || ((v4 >> 6) & 0xF) > 4 || ((v4 >> 10) & 1) != 0 && ((v4 >> 6) & 9) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
