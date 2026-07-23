/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1403F2D30
 * Callers:
 *     PopLogDisabledSleepReason @ 0x1403F2AC8 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1403F2D74 (PopGetReasonListByReasonCode.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v1 = *ReasonListByReasonCode;
    v2 = (_QWORD *)ReasonListByReasonCode[1];
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (_QWORD *)*v2 != ReasonListByReasonCode )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
