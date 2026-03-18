/*
 * XREFs of PoDestroyReasonContext @ 0x140098D20
 * Callers:
 *     ExpDeleteTimer @ 0x140090C2C (ExpDeleteTimer.c)
 *     NtSetTimerEx @ 0x140090CA0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 *     NtCancelTimer @ 0x1400EC6FC (NtCancelTimer.c)
 *     NtSetTimer @ 0x14010564C (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1401EC9AC (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x140452B24 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x140454C18 (PoCreatePowerRequest.c)
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14054C2E8 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x140633290 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407663AC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
      ObfDereferenceObject(v2);
  }
  ExFreePoolWithTag(a1, 0x78435250u);
}
