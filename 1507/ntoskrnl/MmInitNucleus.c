/*
 * XREFs of MmInitNucleus @ 0x1407D42F4
 * Callers:
 *     MmInitSystem @ 0x1407C8B48 (MmInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     MiInitializeNumaRanges @ 0x1401639AC (MiInitializeNumaRanges.c)
 *     MiComputeHash64 @ 0x140163B48 (MiComputeHash64.c)
 *     MiInitializeCommitment @ 0x14016BB7C (MiInitializeCommitment.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     KeKvaShadowingActive @ 0x140209EF0 (KeKvaShadowingActive.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmInitializeProcessor @ 0x1403FA854 (MmInitializeProcessor.c)
 *     MiInitializeSpecialPool @ 0x140579AAC (MiInitializeSpecialPool.c)
 *     MiCreateNodeLists @ 0x140596AF8 (MiCreateNodeLists.c)
 *     MiInitializeSections @ 0x140597028 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14059711C (MiInitializeWsSwapping.c)
 *     MiComputeNodeMemory @ 0x14059AD7C (MiComputeNodeMemory.c)
 *     MiConvertInitialMemoryBlock @ 0x14059AF34 (MiConvertInitialMemoryBlock.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     MiCreatePfnDatabase @ 0x1407C444C (MiCreatePfnDatabase.c)
 *     MiInitializePfnsForValidMappings @ 0x1407C47D0 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x1407C4868 (MxRelocatePageTables.c)
 *     MiSwitchToPfns @ 0x1407C4AD4 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x1407C558C (MiFindLargestLoaderDescriptor.c)
 *     MiInitializeDummyPages @ 0x1407C6220 (MiInitializeDummyPages.c)
 *     MxZeroBootMappings @ 0x1407C6688 (MxZeroBootMappings.c)
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1407C9DC4 (InitializePool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 *     MiInitializeKernelStacks @ 0x1407D3770 (MiInitializeKernelStacks.c)
 *     MiMarkLargePageRange @ 0x1407D4CB4 (MiMarkLargePageRange.c)
 *     MiUpdatePoolLargePages @ 0x1407D4E20 (MiUpdatePoolLargePages.c)
 *     MiFillPfnGaps @ 0x1407D4FC4 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 *     MmInitializeMemoryLimits @ 0x1407D5674 (MmInitializeMemoryLimits.c)
 *     sub_1407DBFEC @ 0x1407DBFEC (sub_1407DBFEC.c)
 *     MiCheckLargePageOk @ 0x1407E074C (MiCheckLargePageOk.c)
 *     MiInitMachineDependent @ 0x1407E11AC (MiInitMachineDependent.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 *     MiInitializeCacheTracker @ 0x1407E2C1C (MiInitializeCacheTracker.c)
 *     MiInitializeSystemPteTracker @ 0x1407E2C50 (MiInitializeSystemPteTracker.c)
 *     MiExamineHalVa @ 0x1407E6624 (MiExamineHalVa.c)
 *     MiMapDummyPages @ 0x1407E6AE8 (MiMapDummyPages.c)
 *     MiComputeUserWorkingSetSpan @ 0x1407E7364 (MiComputeUserWorkingSetSpan.c)
 *     MiProtectSharedUserPage @ 0x1407E8138 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRanges @ 0x1407E8EE0 (MiInitializeChannelRanges.c)
 *     MxConsumeLargePageSlush @ 0x1407FB3AC (MxConsumeLargePageSlush.c)
 */

char __fastcall MmInitNucleus(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v5; // rdx
  char v6; // cl
  unsigned int v7; // eax
  unsigned __int64 i; // rax
  unsigned int SecondLevelCacheSize; // ecx
  unsigned __int8 SecondLevelCacheAssociativity; // cl
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int CacheCount; // eax
  _CACHE_DESCRIPTOR *Cache; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  __int64 *v23; // rax
  _DWORD *v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int8 v37[16]; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-59h]
  _QWORD v39[4]; // [rsp+C8h] [rbp+7h] BYREF
  char v40; // [rsp+E8h] [rbp+27h]

  dword_14034EBA4 = 48;
  MiFlags ^= (MiFlags ^ ((unsigned int)KeKvaShadowingActive() << 21)) & 0x600000;
  if ( (((unsigned int)MiFlags >> 21) & 3) != 0 )
  {
    if ( (((unsigned int)MiFlags >> 21) & 3) == 1 )
    {
      word_14034EC18 = 0;
    }
    else if ( (((unsigned int)MiFlags >> 21) & 3) == 2 )
    {
      word_14034EC18 = 256;
    }
  }
  else
  {
    word_14034EC18 = 1;
  }
  if ( (((unsigned int)MiFlags >> 21) & 3) != 0 && KiImplementedPhysicalBits > 0 )
    qword_14034EBC0 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    MiFlags |= 0x800u;
  }
  else if ( strstr(*(const char **)(BugCheckParameter2 + 216), "NOACCESSBITREPLACEMENT") )
  {
    MiFlags |= 0x800u;
  }
  MiLowHalVa = MiExamineHalVa();
  off_140321B18();
  MiInitializeBootDefaults(BugCheckParameter2, v2, 7LL);
  MiInitializeSystemPteTracker();
  MiInitializeCacheTracker();
  MiComputeUserWorkingSetSpan();
  qword_14034EE80 = 0LL;
  stru_14034EE68.Header.WaitListHead.Blink = &stru_14034EE68.Header.WaitListHead;
  stru_14034EE68.Header.WaitListHead.Flink = &stru_14034EE68.Header.WaitListHead;
  LOWORD(stru_14034EE68.Header.Lock) = 0;
  stru_14034EE68.Header.Size = 6;
  stru_14034EE68.Header.SignalState = 0;
  if ( dword_1403D0108 == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_1403D0108 = 0;
  }
  else
  {
    v3 = 2;
    if ( dword_1403D0108 != 6357068 )
      v3 = 3;
    MEMORY[0xFFFFF78000000264] = v3;
    dword_1403D0108 = 1;
  }
  MiInitializeNumaRanges();
  MiInitializeChannelRanges();
  sub_1407DBFEC(BugCheckParameter2);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_14034F219 = 3;
    return 0;
  }
  MiInitMachineDependent();
  if ( !HvlpVsmVtlCallVa || HvlpEnterIumSecureMode(1u, 231, 0, v37) < 0 )
  {
    v7 = MiFlags;
    goto LABEL_41;
  }
  v5 = v38;
  v6 = 4;
  if ( (v38 & 1) != 0 )
    v6 = 6;
  if ( (v38 & 2) != 0 )
    v6 |= 0x20u;
  if ( (v38 & 4) == 0 )
    v6 |= 0x10u;
  v7 = MiFlags | 0x8000;
  MiFlags |= 0x8000u;
  if ( (v6 & 4) != 0 )
  {
    v7 |= 0x180000u;
    MiFlags = v7;
  }
  if ( (v6 & 1) != 0 )
  {
    v7 |= 0x30000u;
  }
  else
  {
    if ( (v6 & 2) == 0 )
      goto LABEL_38;
    v7 = v7 & 0xFFFCFFFF | 0x10000;
  }
  MiFlags = v7;
LABEL_38:
  if ( (v6 & 0x10) == 0 )
  {
    v7 |= 0x40000u;
    MiFlags = v7;
  }
LABEL_41:
  if ( (v7 & 0x30000) > 0x10000 )
  {
    for ( i = 0LL; i < 0x40; ++i )
    {
      if ( (i & 2) != 0 )
        MmProtectToPteMask[i] |= 0x400uLL;
    }
  }
  qword_14034EBD8 = -1LL;
  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_14034EB9C = SecondLevelCacheSize;
  if ( !dword_14034EBBC )
  {
    dword_14034EBBC = SecondLevelCacheSize;
    SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
    if ( SecondLevelCacheAssociativity )
    {
      v5 = dword_14034EBBC % (unsigned int)SecondLevelCacheAssociativity;
      dword_14034EBBC /= (unsigned int)SecondLevelCacheAssociativity;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( CacheCount )
  {
    v5 = CacheCount;
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_14034EBA0 = Cache->Size;
      ++Cache;
      --v5;
    }
    while ( v5 );
  }
  if ( (unsigned int)dword_14034EBA0 < 0x4000 )
    dword_14034EBA0 = 0x4000;
  dword_14034EBD4 = 256;
  MiProtectSharedUserPage(Cache, v5);
  if ( (unsigned int)MiCheckLargePageOk(BugCheckParameter2) )
    MiFlags |= 4u;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_14034F219 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  MiSwitchToPfns(BugCheckParameter2);
  MxRelocatePageTables(BugCheckParameter2);
  v14 = 0xFFFFF68000000000uLL;
  v15 = 3LL;
  v16 = 0xFFFFF6C000000000uLL;
  do
  {
    v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v15;
  }
  while ( v15 );
  MxZeroBootMappings(v14, v16, 3u);
  KeFlushCurrentTbOnly(1);
  InitializeSListHead(&stru_14034F430);
  v17 = 2048LL;
  v18 = 48 * qword_14034F420 - 0x57FFFFE8030LL;
  *(_QWORD *)(v18 + 40) = *(_QWORD *)(v18 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    RtlpInterlockedPushEntrySList(&stru_14034F430, (PSLIST_ENTRY)v18);
    v18 -= 48LL;
    --v17;
  }
  while ( v17 );
  MiInitializeSections((__int64)MiSystemPartition);
  MiInitializeCommitment((__int64)MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_14034F219 = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_14034F219 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_14034F219 = 5;
    return 0;
  }
  v19 = 0;
  if ( (MiFlags & 0x30000) != 0 )
    v19 = 2048;
  if ( !(unsigned int)InitializePool(0, v19) )
  {
    byte_14034F219 = 2;
    return 0;
  }
  MiInitializeKernelStacks();
  if ( !(unsigned int)MmInitializeProcessor((__int64)CurrentPrcb, v20, v21) )
  {
    byte_14034F219 = 10;
    return 0;
  }
  v23 = MiReservePtes((__int64)&qword_14034FC70, 1u, v22);
  qword_14034F2C8 = (__int64)v23;
  if ( !v23 )
  {
    byte_14034F219 = 11;
    return 0;
  }
  *v23 = 0LL;
  if ( (unsigned __int64)(v23 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)v23, 0LL);
  v39[3] = 0x10101010101LL;
  v39[0] = 0x100010100010101LL;
  v39[2] = 0x10101010101LL;
  v40 = 0;
  v39[1] = 0x101010101010101LL;
  v24 = (_DWORD *)MmInitializeMemoryLimits(BugCheckParameter2, v39);
  if ( !v24 || (v25 = MiConvertInitialMemoryBlock((__int64)MiSystemPartition, v24)) == 0LL )
  {
    byte_14034F219 = 12;
    return 0;
  }
  MxConsumeLargePageSlush();
  qword_140353D38 = (__int64)MiCreateNodeLists((__int64)v25);
  if ( !qword_140353D38 )
  {
    byte_14034F219 = 13;
    return 0;
  }
  MiComputeNodeMemory(v27, v26, v28, v29);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_14034F219 = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &qword_14034F728) )
  {
    byte_14034F219 = 19;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MiInitializeSpecialPool(0);
  MmPhysicalMemoryBlock = v25;
  v30 = (((qword_14034EC10 + 1) & 0x1FF) != 0) + ((unsigned __int64)(qword_14034EC10 + 1) >> 9);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (((v30 & 0x3F) != 0) + (v30 >> 6)), 0x704C6D4Du);
  if ( !PoolWithTag )
  {
    byte_14034F219 = 15;
    return 0;
  }
  qword_14034FBA8[0] = (__int64)PoolWithTag;
  qword_14034FBA0 = v30;
  memset(PoolWithTag, 0, 4 * ((v30 >> 5) + ((v30 & 0x1F) != 0)));
  MiMarkLargePageRange(MmPfnDatabase, MmPfnDatabase + (((MxPfnAllocation << 12) + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL));
  if ( (MiFlags & 4) != 0 )
  {
    MiMarkLargePageRange(PsNtosImageBase, (PsNtosImageEnd + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
    MiMarkLargePageRange(PsHalImageBase, (PsHalImageEnd + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
  }
  MiUpdatePoolLargePages();
  v33 = MiReservePtes((__int64)&qword_14034FC70, 1u, v32);
  v34 = (__int64)v33;
  if ( !v33 )
  {
    byte_14034F219 = 4;
    return 0;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v33) )
    v35 |= 0x100uLL;
  v36 = v35 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  *(_QWORD *)v34 = v36;
  if ( (unsigned __int64)(v34 + 0x90482413000LL) <= 0x7F8 )
    MiWritePteShadow(v34, v36);
  qword_14034EF10 = MiComputeHash64(v34 << 25 >> 16);
  MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)v34, 1u);
  MiInitializeWsSwapping(MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x90uLL, 0x6B4C6D4Du, 0);
  return 1;
}
