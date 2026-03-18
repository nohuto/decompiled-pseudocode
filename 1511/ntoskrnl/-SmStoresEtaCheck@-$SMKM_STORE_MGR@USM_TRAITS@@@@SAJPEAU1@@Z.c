/*
 * XREFs of ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140203904
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140110250 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     StEtaCheckForRefresh @ 0x14020799C (StEtaCheckForRefresh.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoresEtaCheck(__int64 a1)
{
  unsigned int v1; // edi
  _WORD *v2; // r14
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // r9d
  PVOID PoolWithTag; // rax
  __int64 v9; // rsi
  int v10; // edx
  unsigned int v11; // edi

  v1 = 0;
  v2 = (_WORD *)(a1 + 24);
  while ( 1 )
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
      break;
LABEL_13:
    ++v1;
    v2 += 88;
    if ( v1 >= 0x20 )
    {
      v11 = 0;
      goto LABEL_15;
    }
  }
  if ( !(unsigned int)StEtaCheckForRefresh(*(_QWORD *)(v6 + 2448), 0LL, 0LL, 0LL) )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v6 + 4480) & 0x1F) + a1 + 8));
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v7 + 40), 0x54456D73u);
  v9 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v10 = *(_DWORD *)v9;
    *(_DWORD *)(v9 + 8) &= 0xFFFFFFF8;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)v9 = v10 & 0xFFFFFFF8 | 5;
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v6, v9, 0);
LABEL_12:
    v6 = 0LL;
    goto LABEL_13;
  }
  v11 = -1073741670;
LABEL_15:
  if ( v6 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 176LL * (*(_DWORD *)(v6 + 4480) & 0x1F) + 8));
  return v11;
}
