/*
 * XREFs of MiFindBestOutswapPagefile @ 0x1400DCE70
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiWsSwapPageFileNumber @ 0x1400DCEE4 (MiWsSwapPageFileNumber.c)
 */

__int64 MiFindBestOutswapPagefile()
{
  unsigned int v0; // eax
  __int64 v1; // rcx
  __int64 v2; // r11
  unsigned int v3; // edi
  unsigned int v4; // r8d
  unsigned int *v5; // r10
  unsigned int v6; // edx
  __int64 v7; // r9

  v0 = MiWsSwapPageFileNumber();
  v3 = *(_DWORD *)(v1 + 5336);
  v4 = 0;
  *v5 = v0;
  v6 = 16;
  if ( !v3 )
    return v0;
  v7 = v1 + 5344;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v7 + 164LL) & 0xD0) == 0x80
      && (v6 == 16 || *(_QWORD *)(*(_QWORD *)v7 + 56LL) > *(_QWORD *)(*(_QWORD *)(v2 + 8LL * v6 + 5344) + 56LL)) )
    {
      v6 = v4;
    }
    ++v4;
    v7 += 8LL;
  }
  while ( v4 < v3 );
  if ( v6 == 16 )
    return v0;
  return v6;
}
