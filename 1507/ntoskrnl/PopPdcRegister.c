/*
 * XREFs of PopPdcRegister @ 0x1405C0D24
 * Callers:
 *     PopPdcInvocation @ 0x1405C0CD8 (PopPdcInvocation.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPdcRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock();
    *(_OWORD *)&PoPdcCallbacks = *(_OWORD *)(a1 + 8);
    *(_OWORD *)&xmmword_14032E590 = *(_OWORD *)(a1 + 24);
    *(_OWORD *)&xmmword_14032E5A0 = *(_OWORD *)(a1 + 40);
    *(_OWORD *)&xmmword_14032E5B0 = *(_OWORD *)(a1 + 56);
    *(_OWORD *)&xmmword_14032E5C0 = *(_OWORD *)(a1 + 72);
    *(_OWORD *)&xmmword_14032E5D0 = *(_OWORD *)(a1 + 88);
    qword_14032E5E0 = *(_QWORD *)(a1 + 104);
    *a2 = PdcPoResiliencyClient;
    a2[1] = PdcPoLowPower;
    a2[2] = PdcPoSetPowerAction;
    a2[3] = PdcPoReportButton;
    a2[4] = PdcPoReportLidState;
    a2[5] = PdcPoRecordButton;
    a2[6] = PdcPoVerifyActionPolicy;
    a2[7] = PdcPoVerifyPowerState;
    a2[8] = PdcPoBlockSessionSwitch;
    a2[9] = PdcPoControlMonitor;
    a2[10] = PdcPoCurrentPdcPhase;
    a2[11] = PdcPoControlInput;
    a2[12] = PdcPoIdleScanEnabled;
    a2[13] = PdcPoPerfOverride;
    a2[14] = PdcPoCsEnterExitReason;
    a2[15] = PdcPoSetPowerSettingValue;
    a2[16] = PdcPoPpmRegisterProfiles;
    a2[17] = PdcPoPpmApplyProfile;
    a2[18] = PdcPoPpmResetProfile;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
