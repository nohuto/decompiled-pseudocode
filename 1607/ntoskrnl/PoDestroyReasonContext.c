/*
 * XREFs of PoDestroyReasonContext @ 0x1400FB8C8
 * Callers:
 *     ExpDeleteTimer @ 0x1400C3408 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1400EDFA0 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400EF85C (ExpSetTimer.c)
 *     NtSetTimerEx @ 0x1400EFE6C (NtSetTimerEx.c)
 *     PopPowerRequestCleanUp @ 0x1400FB1B4 (PopPowerRequestCleanUp.c)
 *     NtSetTimer @ 0x14010D948 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402057F0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x14051E298 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateInfo @ 0x14051E69C (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x14052CD00 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14056C4C8 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14066B788 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407BBC6C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
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
