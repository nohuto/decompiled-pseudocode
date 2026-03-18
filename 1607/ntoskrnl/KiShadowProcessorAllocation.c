/*
 * XREFs of KiShadowProcessorAllocation @ 0x1403DE0E8
 * Callers:
 *     KeInitializeBootProcessorShadowState @ 0x1403DD550 (KeInitializeBootProcessorShadowState.c)
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400FA514 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x14065BC98 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, __int64 a2)
{
  int v5; // ebx
  PIMAGE_NT_HEADERS v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // edx

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
      v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                       (unsigned __int64)v6,
                       0x140000000LL,
                       (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      v8 = v7[4];
      if ( v7[2] > v8 )
        v8 = v7[2];
      if ( (unsigned int)MmCreateShadowMapping(0x140000000LL + (unsigned int)v7[3], (v8 + 4095) & 0xFFFFF000) )
        return 1LL;
    }
    MmDeleteShadowMapping(a2, 20480LL);
    if ( v5 )
      MmDeleteShadowMapping(a1 + 28288, 4096LL);
  }
  return 0LL;
}
