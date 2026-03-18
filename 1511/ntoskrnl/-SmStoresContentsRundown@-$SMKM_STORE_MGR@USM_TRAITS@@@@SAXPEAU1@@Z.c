/*
 * XREFs of ?SmStoresContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020A534
 * Callers:
 *     SmEtwEnableCallback @ 0x14054053C (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14020A300 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoresContentsRundown(__int64 a1)
{
  unsigned int v1; // ebx
  _WORD *v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rdx

  v1 = 0;
  v2 = (_WORD *)(a1 + 24);
  do
  {
    v4 = v1 | (32 * (*v2 & 0x7FF));
    v5 = a1 + 176LL * (v1 & 0x1F);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v5 + 8)) )
    {
      if ( (*(_WORD *)(v5 + 24) & 0x7FF) == v4 >> 5 )
      {
        v6 = *(_QWORD *)v5;
        goto LABEL_7;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 8));
    }
    v6 = 0LL;
LABEL_7:
    if ( v6 )
      SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(a1, v6);
    ++v1;
    v2 += 88;
  }
  while ( v1 < 0x20 );
}
