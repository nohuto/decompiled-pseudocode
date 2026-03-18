/*
 * XREFs of PopFilterCapabilities @ 0x140457EB8
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     PopVerifyPowerActionPolicy @ 0x140509A08 (PopVerifyPowerActionPolicy.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
 *     PopLogDisabledSleepReason @ 0x140457DDC (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x140457FFC (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140458028 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x14045808C (IoGetLegacyVetoList.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 result; // rax
  __int64 v5; // r9
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( (int)IoGetLegacyVetoList(&P, &v9) < 0 )
    goto LABEL_6;
  if ( v9 )
  {
    v3 = 1;
    v5 = 0LL;
    v6 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)&v6[2 * v7] );
        v5 += 2 * v7 + 2;
        v6 = (char *)P + v5;
      }
      while ( *(_WORD *)((char *)P + v5) );
    }
    PopLogSleepDisabled(4LL, 31LL, P, v5 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v3 )
LABEL_6:
    PopRemoveReasonRecordByReasonCode(4LL);
  v8 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v8);
  if ( v8 == 2 )
    PopLogSleepDisabled(7LL, 16LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(7LL);
  if ( byte_1402DE29D )
    PopLogSleepDisabled(14LL, 7LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(14LL);
  PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL) )
    *(_BYTE *)(a2 + 6) = 0;
  result = PopCheckDisabledState(6LL);
  if ( (_BYTE)result )
    *(_BYTE *)(a2 + 17) = 0;
  if ( !*(_BYTE *)(a2 + 5) || !*(_BYTE *)(a2 + 6) )
  {
    *(_BYTE *)(a2 + 17) = 0;
    if ( !*(_BYTE *)(a2 + 6) )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return result;
}
