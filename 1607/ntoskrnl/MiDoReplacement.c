/*
 * XREFs of MiDoReplacement @ 0x1401E282C
 * Callers:
 *     MiAllocateWsle @ 0x14003C0F0 (MiAllocateWsle.c)
 * Callees:
 *     MiWorkingSetVeryLarge @ 0x1401E2AAC (MiWorkingSetVeryLarge.c)
 *     MiForcedTrim @ 0x1401E97D0 (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401E9EA0 (MiReplaceWorkingSetEntryIfNecessary.c)
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
