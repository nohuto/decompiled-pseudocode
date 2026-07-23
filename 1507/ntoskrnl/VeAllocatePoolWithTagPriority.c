/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x140736208
 * Callers:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IovAllocateMdl @ 0x140734948 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140734A28 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140739CA0 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x1407418B8 (ViIrpAllocateLockedPacket.c)
 *     ViRtlReplaceStringBuffer @ 0x140752FB0 (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x140736AA0 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x140736B44 (ViPostPoolAllocation.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x140745724 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     VfFillAllocatedMemory @ 0x140746120 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140746494 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1407466B0 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x140758C04 (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VeAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        size_t Size,
        ULONG Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a5)
{
  _SLIST_HEADER *VerifierData; // r14
  __int64 v6; // r12
  int v7; // r15d
  POOL_TYPE v11; // edi
  size_t v13; // r13
  __int64 v14; // rcx
  PSLIST_ENTRY v15; // rsi
  unsigned __int64 PoolWithTagPriority; // rbp
  __int64 v17; // rcx
  unsigned int v18; // r14d
  int v19; // [rsp+30h] [rbp-38h]
  ULONG Taga; // [rsp+80h] [rbp+18h] BYREF

  Taga = Tag;
  VerifierData = 0LL;
  v6 = a5;
  v7 = 0;
  v11 = PoolType;
  if ( (MiFlags & 2) != 0 )
  {
    if ( (PoolType & 0x80u) == 0 )
    {
      v11 = PoolType | 0x80;
    }
    else
    {
      v7 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a5);
      if ( !VerifierData )
        return ExAllocatePoolWithTagPriority(v11, Size, Tag, Priority);
    }
  }
  ExAllocatePoolSanityChecks((unsigned int)v11, Size, &Taga, v6);
  v19 = 0;
  if ( !Size && (unsigned int)VfVerifyMode <= 1 )
  {
    v19 = 1;
    Size = 1LL;
  }
  v13 = Size;
  _InterlockedIncrement(&dword_140331D10);
  if ( (v11 & 2) != 0 )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(194, 154, v11 & 0xFFFFFF7F, Size, Taga);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !v7 )
    {
      v7 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    }
    if ( VerifierData )
    {
      v14 = Taga;
      LODWORD(v14) = Taga & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v14) )
      {
        if ( VfPoolTraces )
          ViPoolLogStackTrace(0LL, Size);
        if ( (v11 & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  if ( (Priority & 9) == 0 && (MmVerifierData & 1) != 0 )
  {
    if ( MmSpecialPoolCatchOverruns == 1 )
      Priority |= 8u;
    else
      Priority |= 9u;
  }
  v15 = 0LL;
  if ( (MmVerifierData & 8) != 0 && (v11 & 0x20) == 0 )
  {
    if ( !v7 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v6);
    if ( VerifierData && Size + 8 >= Size )
    {
      v15 = RtlpInterlockedPopEntrySList(VerifierData + 4);
      if ( v15 || (v15 = (PSLIST_ENTRY)ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        Size += 8LL;
        v11 |= 0x40u;
      }
    }
    else
    {
      ++dword_140331D38;
    }
  }
  PoolWithTagPriority = (unsigned __int64)ExAllocatePoolWithTagPriority(v11, Size, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_140331D28;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(v6, 144LL);
    if ( VfPoolTraces )
      ViPoolLogStackTrace(0LL, Size);
    if ( v15 )
      RtlpInterlockedPushEntrySList(VerifierData + 4, v15);
    if ( (v11 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  if ( v19 )
  {
    v17 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v17) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v17 + 1) = v6;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v17 + 2) = PoolWithTagPriority;
  }
  v18 = 0;
  _InterlockedIncrement(&dword_140331D14);
  if ( (unsigned int)MmIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v18 = 1;
LABEL_50:
    _InterlockedIncrement(&dword_140331D18);
    goto LABEL_51;
  }
  if ( Size > 0xFE0 )
    goto LABEL_50;
LABEL_51:
  if ( v15 )
  {
    *((_QWORD *)&v15->Next + 1) = v6;
    v15->Next = (_SLIST_ENTRY *)(PoolWithTagPriority | v18);
    if ( v18 )
      Size = v13;
    *((_QWORD *)&v15[1].Next + 1) = Taga;
    v15[1].Next = (_SLIST_ENTRY *)Size;
    PoolWithTagPriority = ViPostPoolAllocation(v15, (unsigned int)v11);
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(PoolWithTagPriority, v13);
  if ( v15 && !v18 )
    VfFillAllocatedMemory((void *)PoolWithTagPriority, v13);
  return (PVOID)PoolWithTagPriority;
}
