/*
 * XREFs of MiDoReplacement @ 0x1401D27D4
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 * Callees:
 *     MiWorkingSetVeryLarge @ 0x1401D29F0 (MiWorkingSetVeryLarge.c)
 *     MiForcedTrim @ 0x1401D7A98 (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401D80D8 (MiReplaceWorkingSetEntryIfNecessary.c)
 */

unsigned __int64 __fastcall MiDoReplacement(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 96);
  if ( *(_QWORD *)(a1 + 104) >= result )
  {
    if ( (unsigned int)MiWorkingSetVeryLarge(a1, 1LL) == 1 )
      MiForcedTrim(a1);
    return MiReplaceWorkingSetEntryIfNecessary(a1, a2);
  }
  return result;
}
