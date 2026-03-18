/*
 * XREFs of ExpCaptureWnfStateName @ 0x140462514
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404615B4 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140461950 (ExpWnfSubscribeWnfStateChange.c)
 *     NtUpdateWnfStateData @ 0x140461CC4 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140462090 (NtQueryWnfStateData.c)
 *     NtUnsubscribeWnfStateChange @ 0x1404C1CA8 (NtUnsubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x1404C2274 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1404DCB58 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14057CAB8 (NtDeleteWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCaptureWnfStateName(unsigned __int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( a3 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    v3 = *(_QWORD *)a1;
  }
  else
  {
    v3 = *(_QWORD *)a1;
  }
  v4 = v3 ^ 0x41C64E6DA3BC0074LL;
  *a2 = v4;
  if ( (v4 & 0xF) != 1 || ((v4 >> 6) & 0xF) > 4 || ((v4 >> 10) & 1) != 0 && ((v4 >> 6) & 9) != 0 )
    return 3221225485LL;
  else
    return 0LL;
}
