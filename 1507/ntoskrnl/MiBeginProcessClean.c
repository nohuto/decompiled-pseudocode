/*
 * XREFs of MiBeginProcessClean @ 0x1400DDC48
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiOutlawInswaps @ 0x1400DDD88 (MiOutlawInswaps.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404FB0F8 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v6; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // esi
  unsigned int v9; // ebp
  signed __int32 v10; // eax
  unsigned __int64 v11; // rdi
  __int16 *v13; // rax

  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE(a1, a2, a3, a4);
  v6 = (volatile signed __int32 *)(a2 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v6);
    while ( 1 )
    {
      v10 = *v6;
      if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  *(_BYTE *)(a2 + 1491) |= 2u;
  if ( (*(_BYTE *)(a2 + 1491) & 0xC0) != 0xC0 )
    *(_BYTE *)(a2 + 1491) &= 0x3Fu;
  MiUnlockWorkingSetExclusive((__int64)v6, CurrentIrql);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v11 = MiOutlawInswaps(a2);
  if ( v11 > 2 )
  {
    v13 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1452));
    MiFreeWorkingSetSwapContext(v13, v11);
  }
  LOBYTE(v8) = v11 != 0;
  return v8;
}
