/*
 * XREFs of IoReplacePartitionUnit @ 0x140629E88
 * Callers:
 *     NtReplacePartitionUnit @ 0x14023E080 (NtReplacePartitionUnit.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 */

NTSTATUS __stdcall IoReplacePartitionUnit(PDEVICE_OBJECT TargetPdo, PDEVICE_OBJECT SparePdo, ULONG Flags)
{
  _BYTE v7[80]; // [rsp+30h] [rbp-50h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)v7 = TargetPdo;
  *(_QWORD *)&v7[8] = SparePdo;
  *(_DWORD *)&v7[16] = Flags;
  *(_DWORD *)&v7[20] = -1073741823;
  KeInitializeEvent((PRKEVENT)&v7[24], NotificationEvent, 0);
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpReplacePartitionUnit(v7);
  }
  else
  {
    *(_QWORD *)&v7[48] = 0LL;
    *(_QWORD *)&v7[64] = PnpReplacePartitionUnit;
    *(_QWORD *)&v7[72] = v7;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&v7[48], DelayedWorkQueue);
    KeWaitForSingleObject(&v7[24], Executive, 0, 0, 0LL);
  }
  return *(_DWORD *)&v7[20];
}
