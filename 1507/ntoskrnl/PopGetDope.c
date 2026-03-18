/*
 * XREFs of PopGetDope @ 0x14016C9C0
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1400075E0 (PoRegisterDeviceForIdleDetection.c)
 *     PoVolumeDevice @ 0x1405B7EDC (PoVolumeDevice.c)
 *     PopAssociateThermalRequest @ 0x1405C3744 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406B296C (PopOrphanCoolingExtension.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  unsigned __int8 CurrentIrql; // si
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45504F44u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x60uLL);
      v4[13] = 0;
      v4[14] = 0;
      *((_QWORD *)v4 + 3) = a1;
      *((_QWORD *)v4 + 5) = v4 + 8;
      *((_QWORD *)v4 + 4) = v4 + 8;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopDopeGlobalLock);
      }
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
      else
        _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
      __writecr8(CurrentIrql);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
