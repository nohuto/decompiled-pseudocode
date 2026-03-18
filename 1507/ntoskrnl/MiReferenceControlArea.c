/*
 * XREFs of MiReferenceControlArea @ 0x140089080
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     KeAbPreWait @ 0x1400F32B0 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(int a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *SectionObjectPointer; // rdi
  int v6; // r15d
  unsigned __int8 CurrentIrql; // r14
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rdi
  _DWORD *v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r9
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+28h] [rbp-40h]
  __int16 v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+32h] [rbp-36h]
  int v24; // [rsp+34h] [rbp-34h]
  _QWORD v25[3]; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  SectionObjectPointer = (__int64 *)a2->SectionObjectPointer;
  v6 = a4;
  if ( (a1 & 0x1000000) != 0 )
    SectionObjectPointer += 2;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v10 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
    }
    v11 = *SectionObjectPointer;
    if ( !*SectionObjectPointer )
    {
      *SectionObjectPointer = a3;
      v16 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 2LL, a4);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      __writecr8(CurrentIrql);
      *a5 = a3;
      return 1LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v11 + 72)) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
  else
    dword_14034E780 = 0;
  if ( !(*(_BYTE *)(v11 + 56) & 1 | ((*(_DWORD *)(v11 + 56) & 2) != 0)) )
  {
    v12 = MiBuildWakeList(v11, 4);
    ++*(_QWORD *)(v11 + 24);
    v13 = v12;
    MiRemoveUnusedSegment(v11);
    if ( v6 )
      *(_DWORD *)(v11 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v11 + 48);
    v14 = (_DWORD *)(v11 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
    else
      *v14 = 0;
    __writecr8(CurrentIrql);
    MiReleaseControlAreaWaiters(v13);
    *a5 = v11;
    return 1LL;
  }
  v17 = KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, 0LL, 2LL, a4);
  v18 = v17;
  if ( v17 )
    KeAbPreWait(v17);
  v22 = 263;
  v25[1] = v25;
  v25[0] = v25;
  v23 = 6;
  v24 = 0;
  v21 = 1;
  v20 = *(_QWORD *)(v11 + 80);
  *(_QWORD *)(v11 + 80) = &v20;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11 + 72, retaddr);
  else
    *(_DWORD *)(v11 + 72) = 0;
  __writecr8(CurrentIrql);
  if ( !v6 )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFile(a2);
  }
  KeWaitForGate(&v22, 18LL);
  if ( v18 )
  {
    KeAbPreAcquire((ULONG_PTR)SectionObjectPointer, v18, 0LL, v19);
    KeAbPostReleaseEx((ULONG_PTR)SectionObjectPointer);
  }
  *a5 = 0LL;
  return 0LL;
}
