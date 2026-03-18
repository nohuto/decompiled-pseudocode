/*
 * XREFs of PopGetReasonListByReasonCode @ 0x14045806C
 * Callers:
 *     PopRemoveReasonRecordByReasonCode @ 0x140458028 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 *     PopCheckDisabledReason @ 0x140546B64 (PopCheckDisabledReason.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetReasonListByReasonCode(int a1)
{
  __int64 result; // rax

  for ( result = PowerStateDisableReasonListHead;
        (__int64 *)result != &PowerStateDisableReasonListHead;
        result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 24) == a1 )
      return result;
  }
  return 0LL;
}
