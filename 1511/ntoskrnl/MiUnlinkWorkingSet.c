/*
 * XREFs of MiUnlinkWorkingSet @ 0x14001C13C
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x1401144F8 (MiUnlinkSessionWorkingSet.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteAllHashMappings @ 0x14001C23C (MiDeleteAllHashMappings.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 */

void __fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *p_LockHandle)
{
  KIRQL v4; // bl
  __int64 v5; // rdx
  struct _KLOCK_QUEUE_HANDLE *i; // rdx
  char v7; // al
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 **v10; // rcx
  __int16 v11; // [rsp+20h] [rbp-30h] BYREF
  char v12; // [rsp+22h] [rbp-2Eh]
  int v13; // [rsp+24h] [rbp-2Ch]
  _QWORD v14[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1);
    MiDeleteAllHashMappings(a1);
    LOBYTE(v5) = v4;
    MiUnlockWorkingSetExclusive(a1, v5);
  }
  v13 = 0;
  v14[1] = v14;
  v14[0] = v14;
  v11 = 263;
  v12 = 6;
  if ( p_LockHandle )
    goto LABEL_6;
  p_LockHandle = &LockHandle;
  for ( i = &LockHandle; ; i = p_LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, i);
LABEL_6:
    v7 = *(_BYTE *)(a1 + 217);
    if ( (v7 & 6) == 0 && (v7 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 8) = &v11;
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
    KeWaitForGate(&v11, 18LL);
  }
  v8 = (__int64 *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v9 = (__int64 *)*v8;
    v10 = *(__int64 ***)(a1 + 32);
    if ( *(__int64 **)(*v8 + 8) != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    *v8 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = MmBadPointer;
  if ( p_LockHandle == &LockHandle )
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
