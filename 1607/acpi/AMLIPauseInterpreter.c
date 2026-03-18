/*
 * XREFs of AMLIPauseInterpreter @ 0x1C005979C
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C004A220 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004A720 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiReflectNativeObject @ 0x1C0053B20 (AcpiReflectNativeObject.c)
 *     Simulator_PauseInterpreter @ 0x1C0059F90 (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x1C0025F04 (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C0074568;
    byte_1C0074540 = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_1C0074578;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_1C0074578 != &qword_1C0074570 )
        __fastfail(3u);
      *a1 = &qword_1C0074570;
      a1[1] = v4;
      *v4 = a1;
      v3 = byte_1C0074540;
      qword_1C0074578 = (__int64)a1;
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
