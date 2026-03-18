/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x140156304
 * Callers:
 *     MiCountSystemImageCommitment @ 0x140155F9C (MiCountSystemImageCommitment.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v4; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // ebx
  __int64 *i; // rbx
  __int64 v8; // rcx
  __int64 **v9; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E9C0);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(&dword_14034E9C0, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E9C0);
    while ( (dword_14034E9C0 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E9C0 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E9C0, dword_14034E9C0 | 0x40000000, dword_14034E9C0);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  for ( i = (__int64 *)qword_14034E9C8; i != &qword_14034E9C8; i = (__int64 *)*i )
  {
    v4 = (PVOID *)i;
    if ( BugCheckParameter2 == i[2] )
    {
      if ( !a2 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E9C0, retaddr);
        else
          dword_14034E9C0 = 0;
        __writecr8(CurrentIrql);
        return i;
      }
      v8 = *i;
      v9 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v9 != i )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E9C0, retaddr);
  else
    dword_14034E9C0 = 0;
  __writecr8(CurrentIrql);
  if ( a2 )
  {
    if ( i == &qword_14034E9C8 )
      KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
    ExFreePoolWithTag(v4[5], 0);
    ExFreePoolWithTag(v4, 0);
  }
  return 0LL;
}
