/*
 * XREFs of KeFindFirstSetLeftAffinityEx @ 0x1401C4C78
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x1401E8FB0 (PpmUpdatePlatformIdleVeto.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftAffinityEx(__int16 *a1)
{
  __int16 v1; // r8
  unsigned __int64 v3; // rdx

  v1 = *a1;
  do
  {
    if ( --v1 < 0 )
      return 0xFFFFFFFFLL;
  }
  while ( !*(_QWORD *)&a1[4 * v1 + 4] );
  _BitScanReverse64(&v3, *(_QWORD *)&a1[4 * v1 + 4]);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v3 + (v1 << 6))];
}
