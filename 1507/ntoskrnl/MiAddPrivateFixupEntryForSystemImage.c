/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1401540CC
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x14044D860 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x1406A0C0C (MiCreateSessionDriverProtos.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // edi
  __int64 **v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  8
                * (((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
                 + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6))
                + 16,
                  0x69536D4Du);
  if ( !PoolWithTag )
    return 0LL;
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6946694Du);
  v6 = PoolWithTag;
  if ( !v5 )
  {
LABEL_12:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(PoolWithTag, a1);
  v5[5] = PoolWithTag;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) + a2 - 1;
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned __int64)(a2 + 0x70000000000LL) <= 0x7FFFFFFFFFLL
    && (*(_BYTE *)(*(_QWORD *)a1 + 14LL) & 1) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = PoolWithTag;
    goto LABEL_12;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E9C0);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(&dword_14034E9C0, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E9C0);
    while ( (dword_14034E9C0 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E9C0 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E9C0, dword_14034E9C0 | 0x40000000, dword_14034E9C0);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  v9 = (__int64 **)qword_14034E9D0;
  *v5 = &qword_14034E9C8;
  v5[1] = v9;
  if ( *v9 != &qword_14034E9C8 )
    __fastfail(3u);
  *v9 = v5;
  qword_14034E9D0 = (__int64)v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E9C0, retaddr);
  else
    dword_14034E9C0 = 0;
  __writecr8(CurrentIrql);
  return 1LL;
}
