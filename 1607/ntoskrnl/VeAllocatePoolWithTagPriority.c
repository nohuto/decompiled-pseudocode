/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x140701DA8
 * Callers:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IovAllocateMdl @ 0x1407007B0 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140700890 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140705728 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C14C (ViIrpAllocateLockedPacket.c)
 *     ViRtlReplaceStringBuffer @ 0x14071B59C (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x140702640 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x1407026E4 (ViPostPoolAllocation.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x14070FF4C (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 *     VfFillAllocatedMemory @ 0x140710920 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140710D70 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140710F24 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x140721210 (ExAllocatePoolSanityChecks.c)
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
  _InterlockedIncrement(&dword_140307250);
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
      ++dword_140307278;
    }
  }
  PoolWithTagPriority = (unsigned __int64)ExAllocatePoolWithTagPriority(v11, Size, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_140307268;
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
  _InterlockedIncrement(&dword_140307254);
  if ( (unsigned int)MmIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v18 = 1;
LABEL_50:
    _InterlockedIncrement(&dword_140307258);
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
