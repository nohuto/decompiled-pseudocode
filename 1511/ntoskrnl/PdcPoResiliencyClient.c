/*
 * XREFs of PdcPoResiliencyClient @ 0x14063795C
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x14009FE18 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1401E78A8 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxPauseDeviceAccounting @ 0x1401EA5DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1401EB06C (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1401EE490 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1401EE4F0 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopCancelDripsWatchdog @ 0x14063C930 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x14063CF34 (PopSetDripsWatchdog.c)
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
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v9);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(a2, &qword_140305A68, &qword_140305A70);
  Time = PpmQueryTime();
  v6 = 0;
  if ( a2 )
  {
    qword_140305A38 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopSetDripsWatchdog();
  }
  else
  {
    qword_140305A40 += Time.QuadPart - qword_140305A38;
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
