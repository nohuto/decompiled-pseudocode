/*
 * XREFs of RtlpGetChainHead @ 0x18006FD6C
 * Callers:
 *     RtlExpandHashTable @ 0x18006F900 (RtlExpandHashTable.c)
 *     RtlpPopulateContext @ 0x18006FC1C (RtlpPopulateContext.c)
 *     RtlEnumerateEntryHashTable @ 0x18006FCB0 (RtlEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x180080880 (RtlContractHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x1800E21F0 (RtlStronglyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 8) <= 0x80u )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    _BitScanReverse(&v3, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v3);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (v3 - 7));
  }
  return v4 + 16LL * a2;
}
