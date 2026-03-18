/*
 * XREFs of ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402037FC
 * Callers:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140202CD4 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmProcessResizeRequest @ 0x1406578DC (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402038C8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // r14
  struct _EX_RUNDOWN_REF *v10; // rdi
  int v11; // ecx
  __int64 v12; // rbx
  int v13; // edi

  v7 = 176LL * (a2 & 0x1F);
  v10 = (struct _EX_RUNDOWN_REF *)(v7 + a1);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + a1 + 8)) )
  {
    if ( (*(_WORD *)(v7 + a1 + 24) & 0x7FF) == a2 >> 5 )
    {
      v12 = *(_QWORD *)(v7 + a1);
      goto LABEL_6;
    }
    ExReleaseRundownProtection_0(v10 + 1);
  }
  v12 = 0LL;
LABEL_6:
  if ( v12 )
  {
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v11, v12, a3, a4, a5);
    if ( v13 >= 0 )
      v12 = 0LL;
    if ( v12 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + a1 + 8));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
