/*
 * XREFs of PoDestroyReasonContext @ 0x1400D10E8
 * Callers:
 *     ExpDeleteTimer @ 0x140065C20 (ExpDeleteTimer.c)
 *     NtSetTimerEx @ 0x140065D60 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     PopPowerRequestCleanUp @ 0x1400D0F98 (PopPowerRequestCleanUp.c)
 *     NtCancelTimer @ 0x140129E6C (NtCancelTimer.c)
 *     NtSetTimer @ 0x1401362E8 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14023AC68 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x1404E5804 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateInfo @ 0x1404EA904 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14056371C (NtSetThreadExecutionState.c)
 *     PopSetupHighPerfPowerRequest @ 0x140599E20 (PopSetupHighPerfPowerRequest.c)
 *     PoCreateThermalRequest @ 0x1405C364C (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1406B1D44 (PoDeleteThermalRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( !*(_DWORD *)a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_4274317627_57077665_FeatureDescriptorDetails) )
  {
    if ( *(_DWORD *)a1 )
    {
      v3 = (void *)a1[3];
      if ( v3 )
        ExFreePoolWithTag(v3, 0x78435250u);
    }
  }
  ExFreePoolWithTag(a1, 0x78435250u);
}
