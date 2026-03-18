/*
 * XREFs of MiInitNucleus @ 0x1407D06B4
 * Callers:
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiInitializeCommitment @ 0x140087100 (MiInitializeCommitment.c)
 *     MiComputeHash64 @ 0x1400B3044 (MiComputeHash64.c)
 *     MiInitializeNumaRanges @ 0x1400B5C68 (MiInitializeNumaRanges.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     ExInitializeNPagedLookasideList @ 0x140110BFC (ExInitializeNPagedLookasideList.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D140 (VslGetNestedPageProtectionFlags.c)
 *     MiFreeUnusedPfnPages @ 0x14013E234 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     strstr @ 0x14014CF38 (strstr.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MmInitializeProcessor @ 0x1403D3D40 (MmInitializeProcessor.c)
 *     MiInitializeSpecialPool @ 0x140535D5C (MiInitializeSpecialPool.c)
 *     MiInitializeSections @ 0x14054F190 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14054F2CC (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x14054F460 (MiCreateNodeLists.c)
 *     MiCreateLargePfnBitMaps @ 0x140575FB0 (MiCreateLargePfnBitMaps.c)
 *     MiConvertInitialMemoryBlock @ 0x1405793F8 (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x14057ADAC (MiComputeNodeMemory.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     MiInitializeKernelStacks @ 0x14078E3DC (MiInitializeKernelStacks.c)
 *     MiInitializeDecayPfns @ 0x14078E618 (MiInitializeDecayPfns.c)
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     MiFindLargestLoaderDescriptor @ 0x14078E83C (MiFindLargestLoaderDescriptor.c)
 *     MiMemoryLicense @ 0x14078EC84 (MiMemoryLicense.c)
 *     MiMapDummyPages @ 0x14078EE84 (MiMapDummyPages.c)
 *     MiInitMachineDependent @ 0x14078EF74 (MiInitMachineDependent.c)
 *     MiFillPfnGaps @ 0x14078F034 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 *     MiInitializeCacheOverrides @ 0x14078F594 (MiInitializeCacheOverrides.c)
 *     MiInitializeZeroingAttributes @ 0x14078F630 (MiInitializeZeroingAttributes.c)
 *     MxRelocatePageTables @ 0x14078F670 (MxRelocatePageTables.c)
 *     MiExamineHalVa @ 0x14078F7F4 (MiExamineHalVa.c)
 *     MiInitializePfnsForValidMappings @ 0x14078F8AC (MiInitializePfnsForValidMappings.c)
 *     MiComputeUserWorkingSetSpan @ 0x14078F94C (MiComputeUserWorkingSetSpan.c)
 *     MiZeroBootMappings @ 0x14078F9DC (MiZeroBootMappings.c)
 *     MiProtectSharedUserPage @ 0x14078FA44 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRanges @ 0x14078FBD4 (MiInitializeChannelRanges.c)
 *     MiInitializeDummyPages @ 0x140796198 (MiInitializeDummyPages.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 *     MmInitializeMemoryLimits @ 0x1407AB404 (MmInitializeMemoryLimits.c)
 *     MiMarkLargePageRanges @ 0x1407AF36C (MiMarkLargePageRanges.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 *     MiCheckLargePageOk @ 0x1407B5CD4 (MiCheckLargePageOk.c)
 *     MxConsumeLargePageSlush @ 0x1407D0D5C (MxConsumeLargePageSlush.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int NestedPageProtectionFlags; // eax
  char v8; // cl
  int v9; // eax
  unsigned int SecondLevelCacheSize; // ecx
  unsigned __int8 SecondLevelCacheAssociativity; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int CacheCount; // eax
  _CACHE_DESCRIPTOR *Cache; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned int *v25; // rax
  char *v26; // rdi
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  _QWORD *v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD v37[4]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v38[8]; // [rsp+68h] [rbp-18h]

  dword_1403269E4 = 48;
  MiFlags ^= (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000;
  if ( (((unsigned int)MiFlags >> 22) & 3) != 0 )
  {
    if ( (((unsigned int)MiFlags >> 22) & 3) == 1 )
    {
      word_140326AA8 = 0;
    }
    else if ( (((unsigned int)MiFlags >> 22) & 3) == 2 )
    {
      word_140326AA8 = 256;
    }
  }
  else
  {
    word_140326AA8 = 1;
  }
  if ( (((unsigned int)MiFlags >> 22) & 3) != 0 && KiImplementedPhysicalBits > 0 )
    qword_140326A00 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    v2 = MiFlags | 0x1000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_16;
    v2 = MiFlags | 0x800;
  }
  MiFlags = v2;
LABEL_16:
  if ( strstr(*(const char **)(BugCheckParameter2 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags |= 0x800u;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeCacheOverrides();
  MiInitializeZeroingAttributes();
  MiInitializeBootDefaults(BugCheckParameter2);
  InitializeSListHead(&stru_140327400);
  v3 = &unk_140327D90;
  qword_140327410 = 0LL;
  v4 = 16LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  qword_1403275C0 = 0LL;
  qword_1403275E8 = (__int64)&qword_1403275E0;
  qword_1403275E0 = (__int64)&qword_1403275E0;
  qword_1403275C8[0] = 0LL;
  qword_1403275D0 = 0LL;
  qword_1403275D8 = 0LL;
  qword_140327620 = 0LL;
  MiComputeUserWorkingSetSpan();
  qword_140326D30 = 0LL;
  stru_140326D18.Header.WaitListHead.Blink = &stru_140326D18.Header.WaitListHead;
  stru_140326D18.Header.WaitListHead.Flink = &stru_140326D18.Header.WaitListHead;
  LOWORD(stru_140326D18.Header.Lock) = 0;
  stru_140326D18.Header.Size = 6;
  stru_140326D18.Header.SignalState = 0;
  if ( dword_1403A9160 == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_1403A9160 = 0;
  }
  else
  {
    v5 = 2;
    if ( dword_1403A9160 != 6357068 )
      v5 = 3;
    MEMORY[0xFFFFF78000000264] = v5;
    dword_1403A9160 = 1;
  }
  MiInitializeNumaRanges();
  MiInitializeChannelRanges();
  MmDynamicPfn = 0x1000000000LL;
  MiMemoryLicense(BugCheckParameter2);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140327145 = 3;
    return 0;
  }
  MiInitMachineDependent();
  NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
  v8 = NestedPageProtectionFlags;
  if ( NestedPageProtectionFlags )
  {
    v9 = MiFlags | 0x2000;
    MiFlags |= 0x2000u;
    if ( (v8 & 4) != 0 )
    {
      v9 |= 0xA0000u;
      MiFlags = v9;
    }
    if ( (v8 & 1) != 0 )
    {
      v9 |= 0x14000u;
    }
    else
    {
      if ( (v8 & 2) == 0 )
      {
LABEL_36:
        if ( (v8 & 0x10) == 0 )
        {
          v9 |= 0x8000u;
          MiFlags = v9;
        }
        if ( (v8 & 0x40) != 0 )
          MiFlags = v9 | 0x40000;
        goto LABEL_40;
      }
      v9 |= 0x4000u;
    }
    MiFlags = v9;
    goto LABEL_36;
  }
LABEL_40:
  qword_140326A18 = -1LL;
  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_1403269DC = SecondLevelCacheSize;
  if ( !dword_1403269FC )
  {
    dword_1403269FC = SecondLevelCacheSize;
    SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
    if ( SecondLevelCacheAssociativity )
      dword_1403269FC /= (unsigned int)SecondLevelCacheAssociativity;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( CacheCount )
  {
    v15 = CacheCount;
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_1403269E0 = Cache->Size;
      ++Cache;
      --v15;
    }
    while ( v15 );
  }
  if ( (unsigned int)dword_1403269E0 < 0x4000 )
    dword_1403269E0 = 0x4000;
  dword_140326A14 = 256;
  MiProtectSharedUserPage();
  if ( (unsigned int)MiCheckLargePageOk(BugCheckParameter2) )
    MiFlags |= 4u;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140327145 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  MiSwitchToPfns(BugCheckParameter2);
  MxRelocatePageTables(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  MiInitializeSections((__int64)MiSystemPartition);
  MiInitializeCommitment((__int64)MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140327145 = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140327145 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages(v17, v16, v18) )
  {
    byte_140327145 = 5;
    return 0;
  }
  v19 = 0;
  if ( (MiFlags & 0x4000) != 0 )
    v19 = 1024;
  if ( !(unsigned int)InitializePool(512, v19) )
  {
    byte_140327145 = 2;
    return 0;
  }
  MiInitializeKernelStacks();
  if ( !(unsigned int)MmInitializeProcessor((__int64)CurrentPrcb, v20, v21) )
  {
    byte_140327145 = 10;
    return 0;
  }
  v23 = (_QWORD *)MiReservePtes((__int64)&qword_140327870, 1uLL, v22);
  qword_140327208 = (__int64)v23;
  if ( !v23 )
  {
    byte_140327145 = 11;
    return 0;
  }
  *v23 = 0LL;
  if ( MiPteInShadowRange((unsigned __int64)v23) )
    MiWritePteShadow(v24, 0LL);
  MiFreeUnusedPfnPages(0LL);
  v37[0] = 0x100010100010101LL;
  v37[2] = 0x10101010101LL;
  v37[3] = 0x10101010101LL;
  *(_WORD *)&v38[1] = 256;
  v38[0] = 0;
  v37[1] = 0x101010101010101LL;
  v25 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v37);
  if ( !v25 || (v26 = MiConvertInitialMemoryBlock((__int64)MiSystemPartition, v25)) == 0LL )
  {
    byte_140327145 = 12;
    return 0;
  }
  MxConsumeLargePageSlush();
  qword_140323580 = (__int64)MiCreateNodeLists((__int64)MiSystemPartition, (__int64)v26);
  if ( !qword_140323580 )
  {
    byte_140327145 = 13;
    return 0;
  }
  MiComputeNodeMemory((__int64)MiSystemPartition);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140327145 = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, qword_1403276C8) )
  {
    byte_140327145 = 19;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() || !(unsigned int)MiInitializeSpecialPool(0) )
    return 0;
  MmPhysicalMemoryBlock = v26;
  if ( !(unsigned int)MiCreateLargePfnBitMaps((__int64)MiSystemPartition, v26, v27) )
  {
    byte_140327145 = 15;
    return 0;
  }
  MiMarkLargePageRanges(v29, v28, v30, v31);
  v33 = (_QWORD *)MiReservePtes((__int64)&qword_140327870, 1uLL, v32);
  v34 = (unsigned __int64)v33;
  if ( !v33 )
  {
    byte_140327145 = 4;
    return 0;
  }
  *v33 = MiMakeValidKernelPte(qword_1403276A0, 1, (unsigned __int64)v33);
  if ( MiPteInShadowRange(v34) )
    MiWritePteShadow(v36, v35);
  qword_140326E10 = MiComputeHash64((__int64)(v34 << 25) >> 16);
  MiReleasePtes((__int64)&qword_140327870, v34, 1u);
  MiInitializeWsSwapping(MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x90uLL, 0x6B4C6D4Du, 0);
  return 1;
}
