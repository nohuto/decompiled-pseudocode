/*
 * XREFs of PopGetReasonListByReasonCode @ 0x1403F2D74
 * Callers:
 *     PopRemoveReasonRecordByReasonCode @ 0x1403F2D30 (PopRemoveReasonRecordByReasonCode.c)
 *     PopCheckDisabledReason @ 0x1404D3644 (PopCheckDisabledReason.c)
 *     PopLogSleepDisabled @ 0x14054CF98 (PopLogSleepDisabled.c)
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
