/*
 * XREFs of MiUnlinkWorkingSet @ 0x1400FF204
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x1401237A8 (MiUnlinkSessionWorkingSet.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     MiDeleteAllHashMappings @ 0x1400FF190 (MiDeleteAllHashMappings.c)
 */

void __fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *p_LockHandle)
{
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 v7; // rdx
  struct _KLOCK_QUEUE_HANDLE *i; // rdx
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int16 v13; // [rsp+20h] [rbp-30h] BYREF
  char v14; // [rsp+22h] [rbp-2Eh]
  int v15; // [rsp+24h] [rbp-2Ch]
  _QWORD v16[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    SharedVm = MiGetSharedVm(a1);
    v5 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v6 = v5;
    MiDeleteAllHashMappings(a1);
    LOBYTE(v7) = v6;
    MiUnlockWorkingSetExclusive(a1, v7);
  }
  v15 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v13 = 263;
  v14 = 6;
  if ( p_LockHandle )
    goto LABEL_6;
  p_LockHandle = &LockHandle;
  for ( i = &LockHandle; ; i = p_LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, i);
LABEL_6:
    v9 = *(_BYTE *)(a1 + 185);
    if ( (v9 & 6) == 0 && (v9 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 96) = &v13;
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
    KeWaitForGate((__int64)&v13, 0x12u);
  }
  v10 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)v10 = 0LL;
  }
  *(_QWORD *)(a1 + 96) = MmBadPointer;
  if ( p_LockHandle == &LockHandle )
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
