/*
 * XREFs of AMLIResumeInterpreter @ 0x1C0059888
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0049C60 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C004A310 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C0053B20 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C0059AB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     LogSchedEvent @ 0x1C0025F04 (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C00273F4 (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  __int64 *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C0074568 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (__int64 *)qword_1C0074528;
        if ( (__int64 *)qword_1C0074528 == &qword_1C0074528 )
          break;
        v1 = *(_QWORD *)qword_1C0074528;
        if ( *(__int64 **)(qword_1C0074528 + 8) != &qword_1C0074528 || *(_QWORD *)(v1 + 8) != qword_1C0074528 )
          __fastfail(3u);
        qword_1C0074528 = *(_QWORD *)qword_1C0074528;
        *(_QWORD *)(v1 + 8) = &qword_1C0074528;
        v0[1] = (__int64)v0;
        *v0 = (__int64)v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_1C0074528;
          if ( *(__int64 **)(qword_1C0074528 + 8) != &qword_1C0074528 )
            __fastfail(3u);
          *v0 = qword_1C0074528;
          v0[1] = (__int64)&qword_1C0074528;
          *(_QWORD *)(v2 + 8) = v0;
          qword_1C0074528 = (__int64)v0;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v0 = (__int64 *)qword_1C0074528;
LABEL_13:
      if ( v0 != &qword_1C0074528 && (gReadyQueue & 2) == 0 )
      {
        OSQueueWorkItem(&qword_1C0074548);
        gReadyQueue |= 2u;
        LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0074540);
}
