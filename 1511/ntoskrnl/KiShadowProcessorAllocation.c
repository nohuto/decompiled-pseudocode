/*
 * XREFs of KiShadowProcessorAllocation @ 0x1403B19D4
 * Callers:
 *     KeInitializeBootProcessorShadowState @ 0x1403B105C (KeInitializeBootProcessorShadowState.c)
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400DD890 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x1406264D0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, __int64 a2)
{
  int v5; // ebx
  _IMAGE_NT_HEADERS64 *v6; // rax
  PIMAGE_SECTION_HEADER v7; // rax
  unsigned int SizeOfRawData; // edx

  if ( !KiKvaShadow )
    return 1LL;
  if ( (unsigned int)MmCreateShadowMapping(a2, 20480LL) )
  {
    v5 = 0;
    if ( (unsigned int)MmCreateShadowMapping(a1 + 28288, 4096LL) )
    {
      v5 = 1;
      if ( *(_DWORD *)(a1 + 36) )
        return 1LL;
      v6 = RtlImageNtHeader((PVOID)0x140000000LL);
      v7 = RtlSectionTableFromVirtualAddress(
             v6,
             (PVOID)0x140000000LL,
             (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      SizeOfRawData = v7->SizeOfRawData;
      if ( v7->Misc.PhysicalAddress > SizeOfRawData )
        SizeOfRawData = v7->Misc.PhysicalAddress;
      if ( (unsigned int)MmCreateShadowMapping(0x140000000LL + v7->VirtualAddress, (SizeOfRawData + 4095) & 0xFFFFF000) )
        return 1LL;
    }
    MmDeleteShadowMapping(a2, 20480LL);
    if ( v5 )
      MmDeleteShadowMapping(a1 + 28288, 4096LL);
  }
  return 0LL;
}
