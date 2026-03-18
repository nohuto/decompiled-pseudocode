/*
 * XREFs of AMLIPauseInterpreter @ 0x1C004213C
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0038FC0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00392B0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiReflectNativeObject @ 0x1C003F6B0 (AcpiReflectNativeObject.c)
 *     Simulator_PauseInterpreter @ 0x1C00428C4 (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x1C001FB3C (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(__int64 *a1)
{
  int v1; // ebx
  KIRQL v3; // al
  __int64 **v4; // rax

  v1 = 0;
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C005A100;
    byte_1C005A0D8 = v3;
    if ( gplistCtxtHead )
    {
      v4 = (__int64 **)qword_1C005A110;
      gReadyQueue |= 4u;
      v1 = 32772;
      *a1 = (__int64)&qword_1C005A108;
      a1[1] = (__int64)v4;
      if ( *v4 != &qword_1C005A108 )
        __fastfail(3u);
      *v4 = a1;
      v3 = byte_1C005A0D8;
      qword_1C005A110 = (__int64)a1;
    }
    else
    {
      gReadyQueue |= 8u;
    }
    KeReleaseSpinLock(&SpinLock, v3);
    LogSchedEvent(1346458963, 0LL, v1, 0LL, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
