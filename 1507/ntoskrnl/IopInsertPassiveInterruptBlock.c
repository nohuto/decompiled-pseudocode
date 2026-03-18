/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x1401FAEE4
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x14067DB34 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1401FAEB4 (IopFindPassiveInterruptBlockLocked.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 PassiveInterruptBlockLocked; // rdi
  __int64 **v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PassiveInterruptListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PassiveInterruptListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PassiveInterruptListLock);
  }
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(_DWORD *)(a1 + 16));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v6 = (__int64 **)qword_14034B1A8;
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v6;
    if ( *v6 != &PassiveInterruptList )
      __fastfail(3u);
    *v6 = (__int64 *)a1;
    qword_14034B1A8 = a1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PassiveInterruptListLock, retaddr);
  else
    _InterlockedAnd64(&PassiveInterruptListLock, 0LL);
  __writecr8(CurrentIrql);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
