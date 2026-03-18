/*
 * XREFs of MiDoReplacement @ 0x1402135E8
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 * Callees:
 *     MiWorkingSetVeryLarge @ 0x140213D20 (MiWorkingSetVeryLarge.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x14021AEB8 (MiReplaceWorkingSetEntryIfNecessary.c)
 */

unsigned __int64 __fastcall MiDoReplacement(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx

  result = a1[12];
  v4 = a1;
  if ( a1[13] >= result )
  {
    if ( a1[26] )
    {
      v5 = 0LL;
    }
    else
    {
      if ( (unsigned int)MiWorkingSetVeryLarge(a1, 1LL) != 1 )
        return MiReplaceWorkingSetEntryIfNecessary(v4, a2);
      v5 = 1LL;
      a1 = v4;
    }
    MiForcedTrim(a1, v5);
    return MiReplaceWorkingSetEntryIfNecessary(v4, a2);
  }
  return result;
}
