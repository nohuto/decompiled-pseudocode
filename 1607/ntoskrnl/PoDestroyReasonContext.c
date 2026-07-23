/*
 * XREFs of PoDestroyReasonContext @ 0x1400F9654
 * Callers:
 *     ExpDeleteTimer @ 0x1400C1298 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1400EBE20 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     NtSetTimerEx @ 0x1400EDCEC (NtSetTimerEx.c)
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 *     NtSetTimer @ 0x14010DEAC (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14020561C (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140501300 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateInfo @ 0x140501704 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14052D240 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14056CA08 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14066B86C (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407BBC6C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_DWORD *)a1 )
    goto LABEL_5;
  v2 = (void *)a1[1];
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( *(_DWORD *)a1 )
  {
LABEL_5:
    v3 = (void *)a1[3];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x78435250u);
  }
  ExFreePoolWithTag(a1, 0x78435250u);
}
