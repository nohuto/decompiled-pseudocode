/*
 * XREFs of ExQueryPoolBlockSize @ 0x14022CE48
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     ExpGetBilledProcess @ 0x1400F7454 (ExpGetBilledProcess.c)
 *     MmQuerySpecialPoolBlockSize @ 0x1401EC464 (MmQuerySpecialPoolBlockSize.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  SIZE_T result; // rax
  char *v5; // rcx
  unsigned int v6; // ebx
  bool v7; // zf

  if ( (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)PoolBlock) )
  {
    *QuotaCharged = 0;
    return MmQuerySpecialPoolBlockSize((__int64)PoolBlock);
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v5 = (char *)PoolBlock - 16;
    v6 = 16 * (unsigned __int8)*((_WORD *)PoolBlock - 7) - 16;
    v7 = ExpGetBilledProcess((__int64)v5) == 0LL;
    result = v6;
    *QuotaCharged = !v7;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
