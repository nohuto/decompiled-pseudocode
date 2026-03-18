/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140423B38
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 && (*(_DWORD *)(a2 + 12) & CmpAccessBitForPhase) == 0 )
  {
    if ( HvpMarkCellDirty(a1, a3, 0) )
      *(_DWORD *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
