/*
 * XREFs of MmUnmapIoSpace @ 0x1400C07D0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C1D4C (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14011BDB8 (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x14020CE00 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x14039DB44 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x140484514 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405482D8 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x1405F683C (HvlDeleteProcessor.c)
 *     MiCopyLargeVad @ 0x14062B30C (MiCopyLargeVad.c)
 *     WmipFindSMBiosStructure @ 0x14065ECA8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14065EDA4 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14065EE90 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14065F02C (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x14065F2B8 (WmipParseSysIdTable.c)
 *     VerifierMmUnmapIoSpace @ 0x1406D0414 (VerifierMmUnmapIoSpace.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 * Callees:
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140068430 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x1400C0920 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiRemovePteTracker @ 0x1401E0BF8 (MiRemovePteTracker.c)
 *     MiUnmapLargePages @ 0x1401E2648 (MiUnmapLargePages.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v4; // rbp
  int HasIoTracker; // r15d
  _QWORD *v6; // rsi
  char v7; // bl
  SIZE_T v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // r15

  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_1403810F0 & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(BaseAddress);
  v6 = (_QWORD *)((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(BaseAddress, v4);
  if ( v7 >= 0 )
  {
    MiReleasePtes(
      (__int64)&qword_1402FF7B0,
      (_QWORD *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      v4);
  }
  else
  {
    if ( (NumberOfBytes & 0x1FFFFF) != 0 )
      goto LABEL_15;
    v8 = NumberOfBytes >> 21;
    if ( !HasIoTracker )
    {
      v9 = 0;
      if ( (_DWORD)v8 )
      {
        v9 = NumberOfBytes >> 21;
        v10 = (unsigned int)v8;
        do
        {
          *v6 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v6) )
            MiWritePteShadow(v6, 0LL);
          ++v6;
          --v10;
        }
        while ( v10 );
      }
      v6 -= v9;
    }
    if ( (unsigned int)MiInsertCachedPte((__int64)&qword_1402FF7B0, v6, v8) != 1 )
LABEL_15:
      MiUnmapLargePages(BaseAddress, NumberOfBytes, 9LL);
  }
}
