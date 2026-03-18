/*
 * XREFs of KdRegisterPowerHandler @ 0x1401FD9D4
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdRegisterPowerHandler(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *PoolWithTag; // rax
  __int64 *v7; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 **v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F49644Bu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KdpPowerSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdpPowerSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdpPowerSpinLock);
  }
  v10 = (__int64 **)qword_14033BBA8;
  *v7 = (__int64)&KdpPowerListHead;
  v7[1] = (__int64)v10;
  if ( *v10 != &KdpPowerListHead )
    __fastfail(3u);
  *v10 = v7;
  qword_14033BBA8 = (__int64)v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdpPowerSpinLock, retaddr);
  else
    _InterlockedAnd64(&KdpPowerSpinLock, 0LL);
  __writecr8(CurrentIrql);
  *a3 = v7;
  return 0LL;
}
