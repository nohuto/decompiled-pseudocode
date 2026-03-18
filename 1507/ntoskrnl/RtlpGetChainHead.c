/*
 * XREFs of RtlpGetChainHead @ 0x14002D164
 * Callers:
 *     RtlpPopulateContext @ 0x14002CFE4 (RtlpPopulateContext.c)
 *     RtlInsertEntryHashTable @ 0x14002D070 (RtlInsertEntryHashTable.c)
 *     RtlContractHashTable @ 0x14010DE30 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x140135DE8 (RtlExpandHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x14024842C (RtlStronglyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 8) > 0x80u )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (a2 >> 7));
  else
    v2 = *(_QWORD *)(a1 + 32);
  return v2 + 16LL * (a2 & 0x7F);
}
