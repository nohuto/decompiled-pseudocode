/*
 * XREFs of CcUnmapAndPurge @ 0x1400865D8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  signed __int64 *v2; // rdi
  __int64 v5; // rdx
  ULONG_PTR v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  v2 = (signed __int64 *)(a1 + 96);
  v6 = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !v6 )
    v6 = CcSlowReferenceSharedCacheMapFileObject(a1, v5, v7, v8);
  LOBYTE(v8) = a2;
  CcUnmapVacbArray(a1, 0, 0, v8, 1);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  _m_prefetchw(v2);
  v9 = *v2;
  while ( (v6 ^ v9) < 0xF )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange64(v2, v9 + 1, v9);
    if ( v10 == v9 )
      return;
  }
  ObDereferenceObjectDeferDeleteWithTag((PVOID)v6, 0x746C6644u);
}
