/*
 * XREFs of ndisCreateWakeUpPatternEntry @ 0x1C00C2F88
 * Callers:
 *     ndisSetAddWakeUpPattern @ 0x1C00C4AC8 (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C00C50B0 (ndisSetOpenAddWakeUpPattern.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisGetWakeUpPatternSize @ 0x1C0045AF0 (ndisGetWakeUpPatternSize.c)
 */

_DWORD *__fastcall ndisCreateWakeUpPatternEntry(unsigned int *Src, int a2)
{
  unsigned int WakeUpPatternSize; // eax
  size_t v5; // rsi
  unsigned int v6; // ebp
  SIZE_T v7; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  _DWORD *result; // rax

  WakeUpPatternSize = ndisGetWakeUpPatternSize(Src);
  v5 = WakeUpPatternSize;
  v6 = WakeUpPatternSize + 280;
  v7 = WakeUpPatternSize + 280;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6B70444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    memmove(v9 + 12, Src, v5);
    v9[4] = v6;
    v9[8] = *Src;
    result = v9;
    v9[11] = a2;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x1Eu, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    return 0LL;
  }
  return result;
}
