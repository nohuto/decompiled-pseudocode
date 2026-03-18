/*
 * XREFs of PipRestoreDevNodeState @ 0x14011C394
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140534A94 (PnpRequestDeviceRemovalWorker.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x140680AE4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PipIsDevNodeDNStarted @ 0x1400CFD80 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400CFDB8 (PipAreDriversLoadedWorker.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipRestoreDevNodeState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  BOOL v3; // ebp
  BOOL IsDevNodeDNStarted; // eax
  __int64 v5; // rcx
  int v6; // edi
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
  }
  v3 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v5 = *(unsigned int *)(a1 + 388);
  v6 = IsDevNodeDNStarted;
  *(_DWORD *)(a1 + 300) = v7;
  *(_DWORD *)(a1 + 4 * v5 + 308) = v8;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v3
      || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v6) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, v11, 11LL);
      result = PipIsDevNodeDNStarted(a1);
      if ( (_DWORD)result != v6 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(a1 + 48), 26LL);
    }
  }
  return result;
}
