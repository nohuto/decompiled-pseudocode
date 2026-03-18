/*
 * XREFs of PopFilterCapabilities @ 0x1404E0F04
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopVerifyPowerActionPolicy @ 0x140580284 (PopVerifyPowerActionPolicy.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 *     PopLogDisabledSleepReason @ 0x1404E0DAC (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x1404E1048 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E1074 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1404E10D8 (IoGetLegacyVetoList.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  const char *v9; // rdx
  __int64 v10; // r9
  char *v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( (int)IoGetLegacyVetoList(&P, &v13) < 0 )
    goto LABEL_6;
  if ( v13 )
  {
    v3 = 1;
    if ( (PoDebug & 2) != 0 )
    {
      v9 = "driver";
      if ( v13 != 11 )
        v9 = "device";
      DbgPrint("PopFilterCapabilities: disabling sleep states due to legacy %s: %ws\n", v9, P);
    }
    v10 = 0LL;
    v11 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)&v11[2 * v12] );
        v10 += 2 * v12 + 2;
        v11 = (char *)P + v10;
      }
      while ( *(_WORD *)((char *)P + v10) );
    }
    PopLogSleepDisabled(4LL, 31LL, P, v10 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v3 )
LABEL_6:
    PopRemoveReasonRecordByReasonCode(4LL);
  v14 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v14);
  if ( v14 == 2 )
    PopLogSleepDisabled(7LL, 16LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(7LL);
  if ( byte_14032E85D )
    PopLogSleepDisabled(14LL, 7LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(14LL);
  PopLogDisabledSleepReason(v5, v4, v6, v7);
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
