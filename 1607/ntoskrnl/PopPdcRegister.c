/*
 * XREFs of PopPdcRegister @ 0x14057E0B0
 * Callers:
 *     PopPdcInvocation @ 0x14057E064 (PopPdcInvocation.c)
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPdcRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock();
    *(_OWORD *)&PoPdcCallbacks = *(_OWORD *)(a1 + 8);
    *(_OWORD *)&xmmword_140328FB0 = *(_OWORD *)(a1 + 24);
    *(_OWORD *)&xmmword_140328FC0 = *(_OWORD *)(a1 + 40);
    *(_OWORD *)&xmmword_140328FD0 = *(_OWORD *)(a1 + 56);
    *(_OWORD *)&xmmword_140328FE0 = *(_OWORD *)(a1 + 72);
    *(_OWORD *)&xmmword_140328FF0 = *(_OWORD *)(a1 + 88);
    *(_OWORD *)&xmmword_140329000 = *(_OWORD *)(a1 + 104);
    *(_OWORD *)&xmmword_140329010 = *(_OWORD *)(a1 + 120);
    *a2 = PdcPoResiliencyClient;
    a2[1] = PdcPoLowPower;
    a2[2] = PdcPoSetPowerAction;
    a2[3] = PdcPoReportButton;
    a2[4] = PdcPoReportLidState;
    a2[5] = PdcPoRecordButton;
    a2[6] = PdcPoVerifyActionPolicy;
    a2[7] = PdcPoVerifyPowerState;
    a2[8] = PopBlockSessionSwitch;
    a2[9] = PopControlMonitor;
    a2[10] = PopNotifyCsStateExited;
    a2[11] = PdcPoCurrentPdcPhase;
    a2[12] = PdcPoIdleScanEnabled;
    a2[13] = PdcPoPerfOverride;
    a2[14] = PdcPoCsEnterExitReason;
    a2[15] = PdcPoSetPowerSettingValue;
    a2[16] = PdcPoPpmRegisterProfiles;
    a2[17] = PdcPoPpmApplyProfile;
    a2[18] = PdcPoPpmResetProfile;
    a2[19] = PdcPoNetworkResiliency;
    a2[20] = PdcPoQueryExpectedStandbyTime;
    a2[21] = PpmQueryDripsResidency;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
