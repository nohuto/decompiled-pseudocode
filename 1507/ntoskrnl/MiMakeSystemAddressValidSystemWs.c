/*
 * XREFs of MiMakeSystemAddressValidSystemWs @ 0x1400052D8
 * Callers:
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemAddressValidSystemWs(
        volatile signed __int32 *a1,
        ULONG_PTR a2,
        unsigned __int8 CurrentIrql)
{
  __int64 v6; // rdx
  int v7; // eax
  ULONG_PTR v8; // rdi
  unsigned int v9; // edi
  signed __int32 v10; // eax

  if ( (unsigned __int8)MiIsAddressValid(a2) )
    return 0LL;
  do
  {
    LOBYTE(v6) = CurrentIrql;
    MiUnlockWorkingSetExclusive(a1, v6);
    v7 = MmAccessFault(0LL, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MmFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 2uLL, v8, 0LL, a2);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v9 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
      while ( 1 )
      {
        v10 = *a1;
        if ( (*a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v10 & 0x40000000) == 0 )
          _InterlockedCompareExchange(a1, v10 | 0x40000000, v10);
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
    }
  }
  while ( !(unsigned __int8)MiIsAddressValid(a2) );
  return 1LL;
}
