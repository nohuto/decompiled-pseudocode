/*
 * XREFs of RtlpGetChainHead @ 0x18007515C
 * Callers:
 *     RtlpPopulateContext @ 0x18007500C (RtlpPopulateContext.c)
 *     RtlEnumerateEntryHashTable @ 0x1800750A0 (RtlEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x180086840 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x18008B4D0 (RtlExpandHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x1800EB4E0 (RtlStronglyEnumerateEntryHashTable.c)
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
