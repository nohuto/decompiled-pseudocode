/*
 * XREFs of PdcPoResiliencyClient @ 0x1406B76EC
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x140017D30 (PpmQueryTime.c)
 *     PopFxPauseDeviceAccounting @ 0x14023835C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140238F20 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14023C8F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopCancelDripsWatchdog @ 0x1406BCF60 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x1406BD4C4 (PopSetDripsWatchdog.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, unsigned __int8 a2)
{
  unsigned int v4; // ebx
  LARGE_INTEGER Time; // rax
  LARGE_INTEGER v6; // rdx
  LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // r8
  LARGE_INTEGER v9; // r9
  int v11; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  v4 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      PopPdcIoCoalescing = a2;
      PopCheckResiliencyScenarios();
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v11 = a2;
    PopPdcIdleResiliency = a2;
    PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v11);
    PopCheckResiliencyScenarios();
    PopAccumulateNonActivatedCpuTime(a2, &qword_1403537E8, &qword_1403537F0);
    Time = PpmQueryTime();
    if ( a2 )
    {
      qword_1403537B8 = Time.QuadPart;
      if ( (PopFxDeviceAccountingLevel & 4) != 0 )
        PopFxResumeDeviceAccounting(v7.QuadPart, v6.QuadPart, v8.QuadPart, v9.QuadPart);
      PopSetDripsWatchdog();
    }
    else
    {
      qword_1403537C0 += Time.QuadPart - qword_1403537B8;
      if ( (PopFxDeviceAccountingLevel & 4) != 0 )
        PopFxPauseDeviceAccounting((unsigned int)PopFxDeviceAccountingLevel, v6.QuadPart, v8.QuadPart, v9.QuadPart);
      PopCancelDripsWatchdog();
    }
  }
  PopReleasePolicyLock();
  return v4;
}
