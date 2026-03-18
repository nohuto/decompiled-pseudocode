/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x14020944C
 * Callers:
 *     IoSteerInterrupt @ 0x14067AAE8 (IoSteerInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiIntSteerAssignCpuSet @ 0x14020960C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x140209660 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSet(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiIntTrackSpinlock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock);
    }
    v8 = *(_QWORD *)(v3 + 16);
    if ( a3 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
    }
    else
    {
      KiIntSteerClearCpuSetAssignment(v8);
      v6 = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
    else
      _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
    __writecr8(CurrentIrql);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
