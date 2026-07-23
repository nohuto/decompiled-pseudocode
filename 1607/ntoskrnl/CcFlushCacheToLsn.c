/*
 * XREFs of CcFlushCacheToLsn @ 0x14010F320
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(__int64 a1, _QWORD *a2, int *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}
