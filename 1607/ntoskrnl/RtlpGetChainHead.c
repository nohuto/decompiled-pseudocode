/*
 * XREFs of RtlpGetChainHead @ 0x14007D144
 * Callers:
 *     RtlpPopulateContext @ 0x14007D0B0 (RtlpPopulateContext.c)
 *     RtlContractHashTable @ 0x140097040 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x14010F0E4 (RtlExpandHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x14021352C (RtlStronglyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ecx

  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v5, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v5);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (v5 - 7));
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
  }
  return v3 + 16LL * a2;
}
