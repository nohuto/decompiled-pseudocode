/*
 * XREFs of AMLIResumeInterpreter @ 0x1C0042224
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0038BF0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0039030 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C003F6B0 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C0042410 (Simulator_CallbackWorker.c)
 * Callees:
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     LogSchedEvent @ 0x1C001FB3C (LogSchedEvent.c)
 *     ListRemoveHead @ 0x1C00201C8 (ListRemoveHead.c)
 *     OSQueueWorkItem @ 0x1C0020B48 (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx

  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  byte_1C005A0D8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C005A100 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = ListRemoveHead((_QWORD ***)&qword_1C005A0C8);
        v1 = (_QWORD *)v0;
        if ( !v0 )
          break;
        *(_QWORD *)(v0 + 24) = 0LL;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 328, 1LL) )
        {
          ListInsertTail(v1, (_QWORD **)&qword_1C005A0C8);
          qword_1C005A0C8 = (__int64)v1;
          v1[3] = &qword_1C005A0C8;
          break;
        }
      }
    }
    if ( qword_1C005A0C8 && (gReadyQueue & 2) == 0 )
    {
      OSQueueWorkItem(&qword_1C005A0E0);
      gReadyQueue |= 2u;
      LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C005A0D8);
}
