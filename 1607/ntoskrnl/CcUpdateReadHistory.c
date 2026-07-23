/*
 * XREFs of CcUpdateReadHistory @ 0x14006E24C
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14006DBE0 (CcAsyncReadPrefetch.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 * Callees:
 *     <none>
 */

void __fastcall CcUpdateReadHistory(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  _InterlockedExchange64((volatile __int64 *)(v3 + 16), *(_QWORD *)(v3 + 32));
  _InterlockedExchange64((volatile __int64 *)(v3 + 24), *(_QWORD *)(v3 + 40));
  _InterlockedExchange64((volatile __int64 *)(v3 + 32), *a2);
  _InterlockedExchange64((volatile __int64 *)(v3 + 40), *a2 + a3);
  if ( (*(_DWORD *)(v4 + 152) & 0x200000) != 0
    && (unsigned int)((*(_DWORD *)(v3 + 32) >> 12) - (*(_DWORD *)(v3 + 24) >> 12)) > 1 )
  {
    CcUpdateSharedCacheMapFlag(v4, 0x200000, 0);
  }
}
