/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x14021E6C0
 * Callers:
 *     MiFlushComplete @ 0x14021E5B8 (MiFlushComplete.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(__int64 **P)
{
  struct _KEVENT *v2; // r14
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rcx
  unsigned int v12; // esi
  signed __int32 v13; // eax

  v2 = (struct _KEVENT *)P[4];
  v3 = **P;
  v4 = (volatile signed __int32 *)(v3 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72));
    while ( 1 )
    {
      v13 = *v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v13 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v13 | 0x40000000, v13);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
  }
  v6 = MiDecrementSubsections((__int64)*P, (__int64)*P, 0);
  v7 = MiDecrementSubsections((__int64)P[1], (__int64)P[1], 0);
  --*(_QWORD *)(v3 + 40);
  LOBYTE(v8) = CurrentIrql;
  v9 = v7 + v6;
  MiCheckControlArea(v3, v8);
  if ( v9 )
    MiReturnSubsectionCharges(v9);
  v10 = P[5];
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v2, 0, 0);
}
