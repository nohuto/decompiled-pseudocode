/*
 * XREFs of MiAttachSession @ 0x140007380
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400073F4 (MiCompareTbFlushTimeStamp.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  v1 = *(_QWORD *)(a1 + 7680);
  MEMORY[0xFFFFF6FB7DBEDF90] = v1;
  if ( (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF90uLL) )
    MiWritePteShadow(0xFFFFF6FB7DBEDF90uLL, v1);
  result = MiCompareTbFlushTimeStamp((unsigned int)dword_1402FE618, 0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1LL);
  return result;
}
