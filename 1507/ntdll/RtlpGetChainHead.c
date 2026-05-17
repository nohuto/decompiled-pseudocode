/*
 * XREFs of RtlpGetChainHead @ 0x180065834
 * Callers:
 *     RtlExpandHashTable @ 0x1800653C0 (RtlExpandHashTable.c)
 *     RtlpPopulateContext @ 0x1800656EC (RtlpPopulateContext.c)
 *     RtlEnumerateEntryHashTable @ 0x180065780 (RtlEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x180074EC0 (RtlContractHashTable.c)
 *     RtlStronglyEnumerateEntryHashTable @ 0x1800DBB80 (RtlStronglyEnumerateEntryHashTable.c)
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
