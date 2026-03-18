/*
 * XREFs of PdcPoResiliencyClient @ 0x14066FC04
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x1400D6ADC (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140200460 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxPauseDeviceAccounting @ 0x140202FB4 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140203A40 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140207030 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140207090 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F5BE4 (PopSetPowerSettingValueAcDc.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopCancelDripsWatchdog @ 0x140675094 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x1406756C4 (PopSetDripsWatchdog.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, unsigned __int8 a2)
{
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  LARGE_INTEGER Time; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v6 = -1073741811;
        goto LABEL_16;
      }
      v6 = 0;
      if ( !PopDeepIoCoalescingEnabled )
        goto LABEL_16;
    }
    else
    {
      v6 = 0;
      if ( PopDeepIoCoalescingEnabled )
        goto LABEL_16;
    }
    PopPdcIoCoalescing = a2;
    PopCheckResiliencyScenarios();
    goto LABEL_16;
  }
  v9 = a2;
  PopPdcIdleResiliency = a2;
  PopSetPowerSettingValueAcDc((__int64)&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, (__int64)&v9);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(a2, &qword_1403288A8, &qword_1403288B0);
  Time = PpmQueryTime();
  v6 = 0;
  if ( a2 )
  {
    qword_140328878 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopSetDripsWatchdog();
  }
  else
  {
    qword_140328880 += Time.QuadPart - qword_140328878;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxPauseDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(0);
    PopUpdateNonAttributedCpuTimeReference(1);
    PopCancelDripsWatchdog();
  }
LABEL_16:
  PopReleasePolicyLock();
  return v6;
}
