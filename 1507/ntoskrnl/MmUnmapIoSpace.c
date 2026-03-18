/*
 * XREFs of MmUnmapIoSpace @ 0x1401153C0
 * Callers:
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14015003C (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x14025C0C4 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x1403F0020 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x14052E0E8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x140670600 (HvlDeleteProcessor.c)
 *     MiCopyLargeVad @ 0x1406A9BD0 (MiCopyLargeVad.c)
 *     WmipFindSMBiosStructure @ 0x1406E1550 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1406E164C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1406E1738 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1406E18D4 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1406E1B60 (WmipParseSysIdTable.c)
 *     VerifierMmUnmapIoSpace @ 0x140753EE0 (VerifierMmUnmapIoSpace.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x1400ADA8C (MiMappingHasIoTracker.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MiUnmapLargePages @ 0x14015D84C (MiUnmapLargePages.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiRemovePteTracker @ 0x140226DF4 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v4; // rbp
  int HasIoTracker; // r15d
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rbx
  SIZE_T v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r15
  __int64 v11; // r12

  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_1403D00E0 & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker((unsigned __int64)BaseAddress);
  v6 = (unsigned __int64 *)((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v7 = *v6;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    LOBYTE(v7) = MiReadPteShadow((((unsigned __int64)BaseAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v6);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(BaseAddress, v4);
  if ( (v7 & 0x80u) == 0LL )
  {
    MiReleasePtes(
      (__int64)&qword_14034FC70,
      (_QWORD *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      v4);
  }
  else
  {
    if ( (NumberOfBytes & 0x1FFFFF) != 0 )
      goto LABEL_17;
    v8 = NumberOfBytes >> 21;
    if ( !HasIoTracker )
    {
      v9 = 0;
      if ( (_DWORD)v8 )
      {
        v10 = (unsigned __int64)(v6 + 0x12090482600LL);
        v9 = NumberOfBytes >> 21;
        v11 = (unsigned int)v8;
        do
        {
          *v6 = 0LL;
          if ( v10 <= 0x7F8 )
            MiWritePteShadow(v6, 0LL);
          ++v6;
          v10 += 8LL;
          --v11;
        }
        while ( v11 );
      }
      v6 -= v9;
    }
    if ( (unsigned int)MiInsertCachedPte((__int64)&qword_14034FC70, v6, v8) != 1 )
LABEL_17:
      MiUnmapLargePages(BaseAddress, NumberOfBytes, 9LL);
  }
}
