/*
 * XREFs of ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252B4C
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14013C834 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     memset @ 0x140195A80 (memset.c)
 *     StEtaCheckForRefresh @ 0x140256BF8 (StEtaCheckForRefresh.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoresEtaCheck(__int64 a1)
{
  unsigned int v1; // esi
  _WORD *v2; // r15
  unsigned int v4; // edi
  __int64 v5; // r14
  struct _EX_RUNDOWN_REF *v6; // rbx
  unsigned __int64 v7; // rtt
  __int64 v8; // rbx
  unsigned __int64 v9; // rtt
  int v10; // r9d
  PVOID PoolWithTag; // rax
  __int64 v12; // rdi
  int v13; // edx
  struct _EX_RUNDOWN_REF *v14; // rcx
  unsigned __int64 v15; // rtt
  unsigned int v16; // edi
  struct _EX_RUNDOWN_REF *v17; // rcx
  unsigned __int64 v18; // rtt

  v1 = 0;
  v2 = (_WORD *)(a1 + 24);
  while ( 1 )
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
      break;
LABEL_16:
    ++v1;
    v2 += 88;
    if ( v1 >= 0x20 )
    {
      v16 = 0;
      goto LABEL_18;
    }
  }
  if ( !(unsigned int)StEtaCheckForRefresh(*(_QWORD *)(v8 + 2448), 0LL, 0LL, 0LL) )
  {
    v14 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v8 + 4480) & 0x1F) + a1 + 8);
    _m_prefetchw(v14);
    v15 = v14->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v15 - 2, v15) )
      ExfReleaseRundownProtection(v14);
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v10 + 40), 0x54456D73u);
  v12 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v13 = *(_DWORD *)v12;
    *(_DWORD *)(v12 + 8) &= 0xFFFFFFF8;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_DWORD *)v12 = v13 & 0xFFFFFFF8 | 5;
    SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v8, v12, 0);
LABEL_15:
    v8 = 0LL;
    goto LABEL_16;
  }
  v16 = -1073741670;
LABEL_18:
  if ( v8 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v8 + 4480) & 0x1F) + a1 + 8);
    _m_prefetchw(v17);
    v18 = v17->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v17, v18 - 2, v18) )
      ExfReleaseRundownProtection(v17);
  }
  return v16;
}
