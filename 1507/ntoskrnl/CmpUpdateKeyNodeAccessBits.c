/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140427A00
 * Callers:
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 && (*(_DWORD *)(a2 + 12) & CmpAccessBitForPhase) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
      *(_DWORD *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
