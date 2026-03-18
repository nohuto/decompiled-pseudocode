/*
 * XREFs of MiWsSwapPageFileNumber @ 0x1400DCEE4
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x1400DCE70 (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x14022C9F8 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x1404FB15C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWsSwapPageFileNumber(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 i; // r8

  v1 = *(_DWORD *)(a1 + 5336);
  v2 = 0;
  if ( !v1 )
    return 16LL;
  for ( i = a1 + 5344; (*(_BYTE *)(*(_QWORD *)i + 164LL) & 0x10) == 0; i += 8LL )
  {
    if ( ++v2 >= v1 )
      return 16LL;
  }
  return v2;
}
