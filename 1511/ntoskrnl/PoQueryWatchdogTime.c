/*
 * XREFs of PoQueryWatchdogTime @ 0x140117684
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PopComputeWatchdogTimeout @ 0x140122224 (PopComputeWatchdogTimeout.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // si
  _QWORD *DeviceNode; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1LL;
  v3 = 0;
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = DeviceNode[31];
  if ( v6 )
  {
    v7 = *(char *)(v6 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 72 * v7 + 200) + 196LL) )
    {
      v8 = PopComputeWatchdogTimeout(*(_QWORD *)(v6 + 72 * v7 + 200));
      v10 = *(_QWORD *)(v9 + 48) + 10000000LL * v8;
      if ( v10 != -1 )
        v2 = v10;
    }
  }
  v11 = DeviceNode[33];
  if ( v11 )
  {
    v13 = *(char *)(v11 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v11 + 72 * v13 + 200) + 196LL) )
    {
      v14 = PopComputeWatchdogTimeout(*(_QWORD *)(v11 + 72 * v13 + 200));
      v16 = *(_QWORD *)(v15 + 48) + 10000000LL * v14;
      if ( v16 < v2 )
        v2 = v16;
    }
  }
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 != -1LL )
  {
    v3 = 1;
    if ( MEMORY[0xFFFFF78000000008] > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - MEMORY[0xFFFFF78000000008]) / 0x989680;
  }
  return v3;
}
