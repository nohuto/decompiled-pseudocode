/*
 * XREFs of MmInitNucleus @ 0x140748C60
 * Callers:
 *     MmInitSystem @ 0x14074C514 (MmInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     MiInitializeNumaRanges @ 0x140132088 (MiInitializeNumaRanges.c)
 *     MiComputeHash64 @ 0x1401321E0 (MiComputeHash64.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     MiInitializeCommitment @ 0x14013A1E4 (MiInitializeCommitment.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeKvaShadowingActive @ 0x1401CA5E0 (KeKvaShadowingActive.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MmInitializeProcessor @ 0x1403A91A8 (MmInitializeProcessor.c)
 *     MiInitializeSpecialPool @ 0x1404FF0AC (MiInitializeSpecialPool.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiCreateNodeLists @ 0x1405200A4 (MiCreateNodeLists.c)
 *     MiInitializeSections @ 0x140520684 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14052075C (MiInitializeWsSwapping.c)
 *     MiSplitLargePfnBitMap @ 0x140520918 (MiSplitLargePfnBitMap.c)
 *     MiComputeNodeMemory @ 0x140546CC0 (MiComputeNodeMemory.c)
 *     MiConvertInitialMemoryBlock @ 0x14054B2F8 (MiConvertInitialMemoryBlock.c)
 *     MiZeroBootMappings @ 0x140745DDC (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140745E40 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x140745ED8 (MxRelocatePageTables.c)
 *     MiInitializeDummyPages @ 0x1407460E4 (MiInitializeDummyPages.c)
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140746E7C (MiFindLargestLoaderDescriptor.c)
 *     MiCreatePfnDatabase @ 0x14074882C (MiCreatePfnDatabase.c)
 *     MiMarkLargePageRanges @ 0x140749388 (MiMarkLargePageRanges.c)
 *     MiBuildPagedPool @ 0x140749564 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1407496B4 (InitializePool.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 *     MmInitializeMemoryLimits @ 0x140761084 (MmInitializeMemoryLimits.c)
 *     MiInitializeKernelStacks @ 0x140762E08 (MiInitializeKernelStacks.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 *     MiFillPfnGaps @ 0x140767B20 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 *     MiInitializeDecayPfns @ 0x140767E90 (MiInitializeDecayPfns.c)
 *     sub_140769A7C @ 0x140769A7C (sub_140769A7C.c)
 *     MiCheckLargePageOk @ 0x14076BC88 (MiCheckLargePageOk.c)
 *     MiInitMachineDependent @ 0x14076BF8C (MiInitMachineDependent.c)
 *     MiInitializeCacheOverrides @ 0x14076EF1C (MiInitializeCacheOverrides.c)
 *     MiInitializeBootDefaults @ 0x14076F498 (MiInitializeBootDefaults.c)
 *     MiExamineHalVa @ 0x1407709F8 (MiExamineHalVa.c)
 *     MiComputeUserWorkingSetSpan @ 0x140770E34 (MiComputeUserWorkingSetSpan.c)
 *     MiMapDummyPages @ 0x140771604 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140771744 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRanges @ 0x14077235C (MiInitializeChannelRanges.c)
 */

char __fastcall MmInitNucleus(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v7; // rdx
  char v8; // cl
  int v9; // eax
  unsigned int SecondLevelCacheSize; // ecx
  unsigned __int8 SecondLevelCacheAssociativity; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int CacheCount; // eax
  _CACHE_DESCRIPTOR *Cache; // rcx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdi
  _DWORD *v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // r8
  ULONG_PTR v26; // rax
  unsigned __int64 v27; // r14
  _DWORD *v28; // rsi
  unsigned __int64 v29; // r8
  ULONG_PTR v30; // rax
  __int64 v31; // r9
  __int64 v32; // rsi
  unsigned __int64 ValidKernelPte; // rax
  __int64 v34; // rdi
  unsigned __int8 v35[16]; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-59h]
  _QWORD v37[4]; // [rsp+C8h] [rbp+7h] BYREF
  __int16 v38; // [rsp+E8h] [rbp+27h]

  dword_1402FE6F4 = 48;
  v2 = (MiFlags ^ ((unsigned int)KeKvaShadowingActive() << 21)) & 0x600000 ^ MiFlags;
  MiFlags = v2;
  if ( ((v2 >> 21) & 3) != 0 )
  {
    if ( ((v2 >> 21) & 3) == 1 )
    {
      word_1402FE760 = 0;
    }
    else if ( ((v2 >> 21) & 3) == 2 )
    {
      word_1402FE760 = 256;
    }
  }
  else
  {
    word_1402FE760 = 1;
  }
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    MiFlags = v2 | 0x800;
  }
  else if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
  {
    MiFlags |= 0x800u;
  }
  MiLowHalVa = MiExamineHalVa();
  MiInitializeCacheOverrides();
  MiInitializeBootDefaults(a1);
  InitializeSListHead(&stru_1402FF000);
  qword_1402FF010 = 0LL;
  v3 = 16LL;
  v4 = &unk_1402FFB90;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v3;
  }
  while ( v3 );
  qword_1402FF180 = 0LL;
  qword_1402FF1A8 = (__int64)&qword_1402FF1A0;
  qword_1402FF1A0 = (__int64)&qword_1402FF1A0;
  qword_1402FF188[0] = 0LL;
  qword_1402FF190 = 0LL;
  qword_1402FF198 = 0LL;
  MiComputeUserWorkingSetSpan();
  qword_1402FE9C0 = 0LL;
  stru_1402FE9A8.Header.WaitListHead.Blink = &stru_1402FE9A8.Header.WaitListHead;
  stru_1402FE9A8.Header.WaitListHead.Flink = &stru_1402FE9A8.Header.WaitListHead;
  LOWORD(stru_1402FE9A8.Header.Lock) = 0;
  stru_1402FE9A8.Header.Size = 6;
  stru_1402FE9A8.Header.SignalState = 0;
  if ( dword_140381118 == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_140381118 = 0;
  }
  else
  {
    v5 = 2;
    if ( dword_140381118 != 6357068 )
      v5 = 3;
    MEMORY[0xFFFFF78000000264] = v5;
    dword_140381118 = 1;
  }
  MiInitializeNumaRanges();
  MiInitializeChannelRanges();
  MmDynamicPfn = 0x1000000000LL;
  sub_140769A7C(a1);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(a1) )
  {
    byte_1402FED75 = 3;
    return 0;
  }
  MiInitMachineDependent();
  if ( HvlpVsmVtlCallVa && HvlpEnterIumSecureMode(1u, 231, 0, v35) >= 0 )
  {
    v7 = v36;
    v8 = 4;
    if ( (v36 & 1) != 0 )
      v8 = 6;
    if ( (v36 & 2) != 0 )
      v8 |= 0x20u;
    if ( (v36 & 4) == 0 )
      v8 |= 0x10u;
    v9 = MiFlags | 0x8000;
    MiFlags |= 0x8000u;
    if ( (v8 & 4) != 0 )
    {
      v9 |= 0x180000u;
      MiFlags = v9;
    }
    if ( (v8 & 1) != 0 )
    {
      v9 |= 0x50000u;
    }
    else
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_37;
      v9 |= 0x10000u;
    }
    MiFlags = v9;
LABEL_37:
    if ( (v8 & 0x10) == 0 )
      MiFlags = v9 | 0x20000;
  }
  qword_1402FE720 = -1LL;
  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_1402FE6EC = SecondLevelCacheSize;
  if ( !dword_1402FE70C )
  {
    dword_1402FE70C = SecondLevelCacheSize;
    SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
    if ( SecondLevelCacheAssociativity )
    {
      v7 = dword_1402FE70C % (unsigned int)SecondLevelCacheAssociativity;
      dword_1402FE70C /= (unsigned int)SecondLevelCacheAssociativity;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( CacheCount )
  {
    v7 = CacheCount;
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_1402FE6F0 = Cache->Size;
      ++Cache;
      --v7;
    }
    while ( v7 );
  }
  if ( (unsigned int)dword_1402FE6F0 < 0x4000 )
    dword_1402FE6F0 = 0x4000;
  dword_1402FE71C = 256;
  MiProtectSharedUserPage(Cache, v7);
  v15 = MiCheckLargePageOk(a1);
  if ( !(unsigned int)MiCreatePfnDatabase(a1) )
  {
    byte_1402FED75 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(a1);
  MiSwitchToPfns(a1);
  MxRelocatePageTables(a1);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  MiInitializeSections((__int64)MiSystemPartition);
  MiInitializeCommitment((unsigned __int64)MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_1402FED75 = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_1402FED75 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_1402FED75 = 5;
    return 0;
  }
  v16 = 0LL;
  if ( (MiFlags & 0x10000) != 0 )
    v16 = 2048LL;
  if ( !(unsigned int)InitializePool(0LL, v16) )
  {
    byte_1402FED75 = 2;
    return 0;
  }
  MiInitializeKernelStacks();
  if ( !(unsigned int)MmInitializeProcessor((__int64)CurrentPrcb, v17, v18) )
  {
    byte_1402FED75 = 10;
    return 0;
  }
  v20 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 1u, v19);
  qword_1402FEE08 = (__int64)v20;
  v21 = (__int64)v20;
  if ( !v20 )
  {
    byte_1402FED75 = 11;
    return 0;
  }
  *v20 = 0LL;
  if ( MiPteInShadowRange((__int64)v20) )
    MiWritePteShadow(v21, 0LL);
  MiFreeUnusedPfnPages(0LL);
  v37[0] = 0x100010100010101LL;
  v37[3] = 0x10101010101LL;
  v37[2] = 0x10101010101LL;
  v38 = 0;
  v37[1] = 0x101010101010101LL;
  v22 = (_DWORD *)MmInitializeMemoryLimits(a1, v37);
  if ( !v22 || (v23 = MiConvertInitialMemoryBlock((__int64)MiSystemPartition, v22)) == 0LL )
  {
    byte_1402FED75 = 12;
    return 0;
  }
  if ( v15 == 1 && (MiFlags & 0x10000) == 0 )
    MxConvertKernelHal();
  qword_1402FFD78 = (__int64)MiCreateNodeLists((__int64)MiSystemPartition, (__int64)v23);
  if ( !qword_1402FFD78 )
  {
    byte_1402FED75 = 13;
    return 0;
  }
  MiComputeNodeMemory();
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_1402FED75 = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_1402FF268) )
  {
    byte_1402FED75 = 19;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MiInitializeSpecialPool(0);
  MmPhysicalMemoryBlock = v23;
  v24 = (((qword_1402FE758 + 1) & 0x1FF) != 0) + ((unsigned __int64)(qword_1402FE758 + 1) >> 9);
  v26 = MiReservePtes((__int64)&qword_1402FF7B0, (((unsigned __int64)(v24 + 7) >> 3) + 4095) >> 12, v25);
  if ( !v26 || !(unsigned int)MiInitializeDynamicBitmap(&qword_1402FF6E0, (__int64)(v26 << 25) >> 16, v24, 24) )
  {
LABEL_82:
    byte_1402FED75 = 15;
    return 0;
  }
  qword_1402FF6E0 = 0LL;
  v27 = 0LL;
  if ( *v23 )
  {
    v28 = v23 + 4;
    while ( (unsigned int)MiSplitLargePfnBitMap(*(_QWORD *)v28, *((_QWORD *)v28 + 1)) )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= (unsigned int)*v23 )
        goto LABEL_88;
    }
    goto LABEL_82;
  }
LABEL_88:
  MiMarkLargePageRanges();
  v30 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v29);
  v32 = v30;
  if ( !v30 )
  {
    byte_1402FED75 = 4;
    return 0;
  }
  ValidKernelPte = MiMakeValidKernelPte(qword_1402FF250, 1, v30, v31);
  *(_QWORD *)v32 = ValidKernelPte;
  v34 = ValidKernelPte;
  if ( MiPteInShadowRange(v32) )
    MiWritePteShadow(v32, v34);
  qword_1402FEA50 = MiComputeHash64(v32 << 25 >> 16);
  MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v32, 1u);
  MiInitializeWsSwapping(MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x90uLL, 0x6B4C6D4Du, 0);
  return 1;
}
