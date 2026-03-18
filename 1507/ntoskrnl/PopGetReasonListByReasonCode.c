/*
 * XREFs of PopGetReasonListByReasonCode @ 0x1404E10B8
 * Callers:
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E1074 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 *     PopCheckDisabledReason @ 0x1405BDB60 (PopCheckDisabledReason.c)
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
