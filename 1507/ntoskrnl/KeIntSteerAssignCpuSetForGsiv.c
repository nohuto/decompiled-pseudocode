/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x14020951C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiIntSteerAssignCpuSet @ 0x14020960C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x140209660 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v8; // rcx
  ULONG_PTR *v9; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1 != -1 ? 0xC0000225 : 0;
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
  v8 = KiIntTrackRootList;
  v9 = &KiIntTrackRootList;
  while ( (ULONG_PTR *)v8 != v9 )
  {
    if ( a1 == -1 )
    {
      KiIntSteerClearCpuSetAssignment(v8);
    }
    else if ( *(_DWORD *)(v8 + 32) == a1 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
      break;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
  else
    _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
  __writecr8(CurrentIrql);
  return v6;
}
