/*
 * XREFs of MiUnlinkWorkingSet @ 0x140124DCC
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x140149F10 (MiUnlinkSessionWorkingSet.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteAllHashMappings @ 0x140124F08 (MiDeleteAllHashMappings.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *p_LockHandle)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // edi
  signed __int32 v6; // eax
  struct _KLOCK_QUEUE_HANDLE *i; // rdx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int16 v12; // [rsp+20h] [rbp-30h] BYREF
  char v13; // [rsp+22h] [rbp-2Eh]
  int v14; // [rsp+24h] [rbp-2Ch]
  _QWORD v15[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v5 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
      while ( 1 )
      {
        v6 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v6 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a1, v6 | 0x40000000, v6);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
    MiDeleteAllHashMappings(a1);
    MiUnlockWorkingSetExclusive(a1, CurrentIrql);
  }
  v14 = 0;
  v15[1] = v15;
  v15[0] = v15;
  v12 = 263;
  v13 = 6;
  if ( p_LockHandle )
    goto LABEL_10;
  p_LockHandle = &LockHandle;
  for ( i = &LockHandle; ; i = p_LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, i);
LABEL_10:
    v8 = *(_BYTE *)(a1 + 217);
    if ( (v8 & 6) == 0 && (v8 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 8) = &v12;
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
    KeWaitForGate(&v12, 18LL);
  }
  v9 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v10 = *(_QWORD *)v9;
    v11 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)v9 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = MmBadPointer;
  if ( p_LockHandle == &LockHandle )
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
