/*
 * XREFs of MiDoReplacement @ 0x1401E2658
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 * Callees:
 *     MiWorkingSetVeryLarge @ 0x1401E28D8 (MiWorkingSetVeryLarge.c)
 *     MiForcedTrim @ 0x1401E95FC (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401E9CCC (MiReplaceWorkingSetEntryIfNecessary.c)
 */

unsigned __int64 __fastcall MiDoReplacement(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 112) >= result )
  {
    if ( (unsigned int)MiWorkingSetVeryLarge(a1, 1LL) == 1 )
      MiForcedTrim(a1);
    return MiReplaceWorkingSetEntryIfNecessary(a1, a2);
  }
  return result;
}
