/*
 * XREFs of ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140252A0C
 * Callers:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140251F38 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmProcessResizeRequest @ 0x1406D9C08 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140252B10 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // r14
  struct _EX_RUNDOWN_REF *v10; // rbx
  unsigned __int64 v11; // rtt
  __int64 v12; // rbx
  unsigned __int64 v13; // rtt
  int v14; // edi
  struct _EX_RUNDOWN_REF *v15; // rcx
  unsigned __int64 v16; // rtt

  v7 = 176LL * (a2 & 0x1F);
  v10 = (struct _EX_RUNDOWN_REF *)(v7 + a1);
  _m_prefetchw((const void *)(v7 + a1 + 8));
  v11 = *(_QWORD *)(v7 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 == _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + a1 + 8), v11 + 2, v11)
    || ExfAcquireRundownProtection(v10 + 1) )
  {
    if ( (*(_WORD *)(v7 + a1 + 24) & 0x7FF) == a2 >> 5 )
    {
      v12 = *(_QWORD *)(v7 + a1);
      goto LABEL_8;
    }
    _m_prefetchw(&v10[1]);
    v13 = v10[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&v10[1], v13 - 2, v13) )
      ExfReleaseRundownProtection(v10 + 1);
  }
  v12 = 0LL;
LABEL_8:
  if ( v12 )
  {
    v14 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(a1, v12, a3, a4, a5);
    if ( v14 >= 0 )
      v12 = 0LL;
    if ( v12 )
    {
      v15 = (struct _EX_RUNDOWN_REF *)(v7 + a1 + 8);
      _m_prefetchw(v15);
      v16 = v15->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v15, v16 - 2, v16) )
        ExfReleaseRundownProtection(v15);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v14;
}
