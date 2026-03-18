/*
 * XREFs of AMLIResumeInterpreter @ 0x1C0042804
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0038000 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0038440 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C003FB70 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C00429F0 (Simulator_CallbackWorker.c)
 * Callees:
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     LogSchedEvent @ 0x1C001F290 (LogSchedEvent.c)
 *     ListRemoveHead @ 0x1C001F638 (ListRemoveHead.c)
 *     OSQueueWorkItem @ 0x1C00204CC (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx

  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C005A0F0 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = ListRemoveHead((_QWORD ***)&qword_1C005A0B8);
        v1 = (_QWORD *)v0;
        if ( !v0 )
          break;
        *(_QWORD *)(v0 + 24) = 0LL;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 328, 1LL) )
        {
          ListInsertTail(v1, (_QWORD **)&qword_1C005A0B8);
          qword_1C005A0B8 = (__int64)v1;
          v1[3] = &qword_1C005A0B8;
          break;
        }
      }
    }
    if ( qword_1C005A0B8 && (gReadyQueue & 2) == 0 )
    {
      OSQueueWorkItem(&qword_1C005A0D0);
      gReadyQueue |= 2u;
      LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
}
