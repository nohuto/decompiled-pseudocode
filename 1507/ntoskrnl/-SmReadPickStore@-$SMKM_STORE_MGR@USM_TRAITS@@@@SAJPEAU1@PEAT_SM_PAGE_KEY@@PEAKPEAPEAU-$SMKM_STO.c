/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14013C834
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14013C960 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252B4C (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
        _DWORD *a1,
        int a2,
        int *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  unsigned int Initiate; // eax
  __int64 v9; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  struct _EX_RUNDOWN_REF *v12; // r14
  struct _EX_RUNDOWN_REF *v13; // rdi
  unsigned __int64 v14; // rtt
  unsigned __int64 Count; // rdx
  _DWORD *v16; // rcx
  bool v17; // zf
  unsigned __int64 v19; // rtt
  int v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF

  v22 = *a3;
  Initiate = SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(
               (_DWORD)a1,
               a2,
               (unsigned int)&v22,
               (unsigned int)&v21,
               (__int64)&v20);
  v9 = Initiate;
  if ( Initiate == 32 )
    return (unsigned int)-1073741275;
  v10 = 0;
  if ( (++a1[2529] & 0xFFF) == 0 && a1[1451] )
    SMKM_STORE_MGR<SM_TRAITS>::SmStoresEtaCheck(a1);
  if ( v21 && v21 > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)(unsigned int)a1[2528] )
    return (unsigned int)-1073741763;
  if ( (unsigned int)v9 >= 0x20 )
    return (unsigned int)-1073741275;
  _mm_lfence();
  v11 = v9 | (32 * (a1[44 * v9 + 6] & 0x7FF));
  v12 = (struct _EX_RUNDOWN_REF *)&a1[44 * (v9 & 0x1F)];
  v13 = v12 + 1;
  _m_prefetchw(&v12[1]);
  v14 = v12[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v14 == _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1], v14 + 2, v14)
    || ExfAcquireRundownProtection(v12 + 1) )
  {
    if ( (v12[3].Count & 0x7FF) == v11 >> 5 )
    {
      Count = v12->Count;
      goto LABEL_8;
    }
    _m_prefetchw(v13);
    v19 = v13->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v19 - 2, v19) )
      ExfReleaseRundownProtection(v12 + 1);
  }
  Count = 0LL;
LABEL_8:
  if ( !Count )
    return (unsigned int)-1073741275;
  v16 = a5;
  v17 = v20 == 0;
  *a4 = Count;
  *v16 = !v17;
  *a3 = v22;
  return v10;
}
