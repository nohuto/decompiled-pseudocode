/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140110250
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140109D44 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011015C (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140203904 (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  unsigned int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  struct _EX_RUNDOWN_REF *v12; // r14
  unsigned __int64 Count; // rdx
  _DWORD *v14; // rcx
  bool v15; // zf
  int v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = *a3;
  v8 = SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate((__int64)a1, a2, &v19, (LONGLONG *)&v18, &v17);
  v9 = v8;
  if ( v8 == 32 )
    return (unsigned int)-1073741275;
  v10 = 0;
  if ( (++a1[2533] & 0xFFF) == 0 && a1[1451] )
    SMKM_STORE_MGR<SM_TRAITS>::SmStoresEtaCheck(a1);
  if ( v18 && v18 > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)(unsigned int)a1[2532] )
    return (unsigned int)-1073741763;
  if ( (unsigned int)v9 >= 0x20 )
    return (unsigned int)-1073741275;
  _mm_lfence();
  v11 = v9 | (32 * (a1[44 * v9 + 6] & 0x7FF));
  v12 = (struct _EX_RUNDOWN_REF *)&a1[44 * (v9 & 0x1F)];
  if ( ExAcquireRundownProtection(v12 + 1) )
  {
    if ( (v12[3].Count & 0x7FF) == v11 >> 5 )
    {
      Count = v12->Count;
      goto LABEL_8;
    }
    ExReleaseRundownProtection_0(v12 + 1);
  }
  Count = 0LL;
LABEL_8:
  if ( !Count )
    return (unsigned int)-1073741275;
  v14 = a5;
  v15 = v17 == 0;
  *a4 = Count;
  *v14 = !v15;
  *a3 = v19;
  return v10;
}
