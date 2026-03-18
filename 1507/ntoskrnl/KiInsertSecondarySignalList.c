/*
 * XREFs of KiInsertSecondarySignalList @ 0x1402037DC
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x14020339C (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiInsertSecondarySignalList(_QWORD **a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *a1 != a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiSecondarySignalListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiSecondarySignalListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiSecondarySignalListLock);
    }
    v3 = qword_140332C28;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140332C28 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    if ( (_QWORD **)(*a1)[1] != a1 || (_QWORD **)*a1[1] != a1 )
      __fastfail(3u);
    *(_QWORD *)qword_140332C28 = a1;
    qword_140332C28 = (__int64)a1[1];
    *a1[1] = &KiSecondarySignalList;
    a1[1] = (_QWORD *)v3;
    if ( !KiSecondarySignalDpcRunning )
    {
      KiSecondarySignalDpcRunning = 1;
      KiInsertQueueDpc((__int64)&KiSecondarySignalDpc, 0LL, 0LL, 0LL, 0);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiSecondarySignalListLock, retaddr);
    else
      _InterlockedAnd64(&KiSecondarySignalListLock, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
