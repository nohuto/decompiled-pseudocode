/*
 * XREFs of MmUnmapIoSpace @ 0x14009ACB0
 * Callers:
 *     MmFreeContiguousMemory @ 0x14009A3B8 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14012754C (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x140224798 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1404AA510 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x1406204A0 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x14069D378 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14069D49C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14069D588 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14069D774 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x14069DA24 (WmipParseSysIdTable.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140025988 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiUnmapLargePages @ 0x1401F5770 (MiUnmapLargePages.c)
 *     MiRemovePteTracker @ 0x1401FC81C (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v4; // rbx
  int HasIoTracker; // ebp
  int v6; // r14d
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  SIZE_T v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r9

  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_1403A913C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker((__int64)BaseAddress);
  v6 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)BaseAddress);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(BaseAddress, v4);
  v7 = 0x7FFFFFFFF8LL;
  v8 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 )
  {
    if ( (NumberOfBytes & 0x1FFFFF) != 0 )
      goto LABEL_17;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v6;
    }
    while ( v6 );
    v9 = NumberOfBytes >> 21;
    if ( !HasIoTracker )
    {
      v10 = 0;
      if ( (_DWORD)v9 )
      {
        v11 = (unsigned int)v9;
        do
        {
          *(_QWORD *)v8 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v8, v7) )
            MiWritePteShadow(v12, 0LL);
          v8 = v13 + 8;
          --v11;
        }
        while ( v11 );
      }
      v8 -= 8LL * v10;
    }
    if ( (unsigned int)MiInsertCachedPte((__int64)&qword_1403278B0, (_QWORD *)v8, v9) != 1 )
LABEL_17:
      MiUnmapLargePages(BaseAddress, NumberOfBytes, 9LL, v8);
  }
  else
  {
    MiReleasePtes(
      (__int64)&qword_1403278B0,
      (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      v4);
  }
}
