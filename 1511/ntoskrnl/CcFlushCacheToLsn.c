/*
 * XREFs of CcFlushCacheToLsn @ 0x140107474
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}
