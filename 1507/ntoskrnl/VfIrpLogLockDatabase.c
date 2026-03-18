/*
 * XREFs of VfIrpLogLockDatabase @ 0x14074E094
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140738A3C (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall VfIrpLogLockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ViIrpLogDatabaseLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ViIrpLogDatabaseLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ViIrpLogDatabaseLock);
  }
  if ( *(_DWORD *)(ViIrpLogDatabase + 24 * v1) )
  {
    v3 = -1073741267;
  }
  else
  {
    *(_DWORD *)(ViIrpLogDatabase + 24 * v1) = 1;
    v3 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViIrpLogDatabaseLock, retaddr);
  else
    _InterlockedAnd64(&ViIrpLogDatabaseLock, 0LL);
  __writecr8(CurrentIrql);
  return v3;
}
