/*
 * XREFs of KdDeregisterPowerHandler @ 0x1401FD8D8
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 *a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 *v3; // rax
  __int64 *v4; // rbx
  char v5; // di
  __int64 v6; // rdx
  __int64 **v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

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
  v3 = (__int64 *)KdpPowerListHead;
  v4 = 0LL;
  v5 = 0;
  while ( v3 != &KdpPowerListHead )
  {
    v4 = v3;
    if ( a1 == v3 )
    {
      v6 = *v3;
      v7 = (__int64 **)v3[1];
      if ( *(__int64 **)(*v3 + 8) != v3 || *v7 != v3 )
        __fastfail(3u);
      *v7 = (__int64 *)v6;
      v5 = 1;
      *(_QWORD *)(v6 + 8) = v7;
      break;
    }
    v3 = (__int64 *)*v3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdpPowerSpinLock, retaddr);
  else
    _InterlockedAnd64(&KdpPowerSpinLock, 0LL);
  __writecr8(CurrentIrql);
  if ( !v5 )
    return 3221226021LL;
  ExFreePoolWithTag(v4, 0x6F49644Bu);
  return 0LL;
}
