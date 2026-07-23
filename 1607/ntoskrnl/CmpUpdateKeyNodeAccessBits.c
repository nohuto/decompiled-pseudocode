/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140401990
 * Callers:
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
