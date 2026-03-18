/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x1400DA004
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  return SmKmStoreDelete(
           a1 - 32 - 176LL * (*(_DWORD *)(*(_QWORD *)(a1 - 32) + 4480LL) & 0x1F),
           *(unsigned int *)(*(_QWORD *)(a1 - 32) + 4480LL),
           0LL);
}
