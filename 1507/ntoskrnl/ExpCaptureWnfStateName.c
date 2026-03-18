/*
 * XREFs of ExpCaptureWnfStateName @ 0x140502DAC
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtUnsubscribeWnfStateChange @ 0x140503CBC (NtUnsubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
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
  if ( (v4 & 0xF) != 1 || ((v4 >> 6) & 0xF) > 3 || ((v4 >> 10) & 1) != 0 && ((v4 >> 6) & 0xD) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
