/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140036FD0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiFillPteWithProto @ 0x14009F84C (MiFillPteWithProto.c)
 *     MiExpandSharedZeroCluster @ 0x1400B72E8 (MiExpandSharedZeroCluster.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
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
