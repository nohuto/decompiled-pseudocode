/*
 * XREFs of MiInsertVadEvent @ 0x1400A6EF0
 * Callers:
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1404831E8 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1404C40C4 (MiCreateRotateView.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, _QWORD *a2, __int64 a3)
{
  _KPROCESS *Process; // rbp
  volatile signed __int32 *v6; // rcx
  KIRQL CurrentIrql; // di
  __int64 result; // rax
  char v9; // al
  char v10; // al
  __int64 VmPartition; // rax
  __int64 v12; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a3 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = (volatile signed __int32 *)&Process[1].IdealNode[12];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v6, CurrentIrql, a3);
  }
  else
  {
    CurrentIrql = 17;
    Process = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *a2 = result;
  *(_QWORD *)(a1 + 56) = a2;
  if ( CurrentIrql != 17 )
  {
    v9 = BYTE3(Process[2].DirectoryTableBase);
    if ( (v9 & 0x10) != 0 )
    {
      BYTE3(Process[2].DirectoryTableBase) = v9 & 0xEF;
      VmPartition = MiGetVmPartition(&Process[1].IdealNode[12], a2, a3);
      MiAgeWorkingSet(
        (__int64)&Process[1].IdealNode[12],
        CurrentIrql,
        1,
        *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
    }
    v10 = BYTE3(Process[2].DirectoryTableBase);
    if ( (v10 & 0x20) != 0 )
    {
      v12 = *(_QWORD *)&Process[1].Spare2[47];
      BYTE3(Process[2].DirectoryTableBase) = v10 & 0xDF;
      MiReduceWs(&Process[1].IdealNode[12], CurrentIrql, v12);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&Process[1].IdealNode[12], retaddr);
    else
      *(_DWORD *)&Process[1].IdealNode[12] = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
