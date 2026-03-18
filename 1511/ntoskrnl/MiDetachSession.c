/*
 * XREFs of MiDetachSession @ 0x1400E923C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 MiDetachSession()
{
  __int64 result; // rax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  MEMORY[0xFFFFF6FB7DBEDF90] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF90uLL) )
    MiWritePteShadow(0xFFFFF6FB7DBEDF90uLL, 0LL);
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = 0LL;
  _InterlockedOr(v1, 0);
  result = (unsigned int)KiTbFlushTimeStamp;
  dword_1402FE618 = KiTbFlushTimeStamp;
  return result;
}
