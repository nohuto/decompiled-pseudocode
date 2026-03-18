/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140402AD0
 * Callers:
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140402930 (CmpGetKeyNodeForKcb.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1406026C8 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
