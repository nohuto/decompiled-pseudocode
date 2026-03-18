/*
 * XREFs of ?SmStoresContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402599D8
 * Callers:
 *     SmEtwEnableCallback @ 0x1405B5B3C (SmEtwEnableCallback.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140259768 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoresContentsRundown(__int64 a1)
{
  unsigned int v1; // edi
  _WORD *v2; // rbp
  unsigned int v4; // esi
  __int64 v5; // r14
  struct _EX_RUNDOWN_REF *v6; // rbx
  unsigned __int64 v7; // rtt
  __int64 v8; // rdx
  unsigned __int64 v9; // rtt

  v1 = 0;
  v2 = (_WORD *)(a1 + 24);
  do
  {
    v4 = v1 | (32 * (*v2 & 0x7FF));
    v5 = 176LL * (v1 & 0x1F);
    v6 = (struct _EX_RUNDOWN_REF *)(v5 + a1);
    _m_prefetchw((const void *)(v5 + a1 + 8));
    v7 = *(_QWORD *)(v5 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + a1 + 8), v7 + 2, v7)
      || ExfAcquireRundownProtection(v6 + 1) )
    {
      if ( (*(_WORD *)(v5 + a1 + 24) & 0x7FF) == v4 >> 5 )
      {
        v8 = *(_QWORD *)(v5 + a1);
        goto LABEL_9;
      }
      _m_prefetchw(&v6[1]);
      v9 = v6[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v6[1], v9 - 2, v9) )
        ExfReleaseRundownProtection(v6 + 1);
    }
    v8 = 0LL;
LABEL_9:
    if ( v8 )
      SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(a1, v8);
    ++v1;
    v2 += 88;
  }
  while ( v1 < 0x20 );
}
