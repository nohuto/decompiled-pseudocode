/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140037450
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiFillPteWithProto @ 0x1400A0F24 (MiFillPteWithProto.c)
 *     MiExpandSharedZeroCluster @ 0x1400B9458 (MiExpandSharedZeroCluster.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x1400374B0 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1401EF7E0 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v2; // r8
  __int64 UsedPtesHandle; // rax
  unsigned int v4; // r9d

  v1 = 0;
  v2 = a1;
  do
  {
    if ( v2 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, v4);
      return 1LL;
    }
    ++v1;
    v2 = (__int64)(v2 << 25) >> 16;
  }
  while ( v1 < 3 );
  return 0LL;
}
