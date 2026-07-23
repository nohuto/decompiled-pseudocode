/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140120514 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14011D884 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x14011FBA4 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1401206A0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1401207D4 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140120948 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  unsigned int Emptiest; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r13d
  char *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v23; // [rsp+34h] [rbp-164h]
  _WORD *v24; // [rsp+38h] [rbp-160h]
  __int64 v25; // [rsp+40h] [rbp-158h] BYREF
  char v26; // [rsp+48h] [rbp-150h] BYREF
  _BYTE v27[256]; // [rsp+60h] [rbp-138h] BYREF

  v3 = 0LL;
  LODWORD(v5) = -1;
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
               a1,
               v27,
               32LL,
               (unsigned int)(*(_DWORD *)(a1 + 816) - *(_DWORD *)(a1 + 820) + 1));
  v9 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v27, Emptiest, &v25);
  v10 = (v25 - *(_QWORD *)(a1 + 1016)) >> 1;
  v23 = v9;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v10, v7, v8) )
  {
    return (unsigned int)-1073740024;
  }
  v11 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v10, 0LL, 32LL);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741739;
  if ( v11 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v13 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v11, v10, v11, v10, a2);
    if ( v13 >= 0 )
    {
      v16 = 1;
      if ( v9 <= 1 )
      {
LABEL_18:
        v13 = 0;
      }
      else
      {
        v17 = &v26;
        while ( 1 )
        {
          v24 = *(_WORD **)v17;
          v5 = (__int64)(*(_QWORD *)v17 - *(_QWORD *)(a1 + 1016)) >> 1;
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v5, v14, v15) )
          {
            goto LABEL_28;
          }
          v18 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v5, 0LL, 32LL);
          v3 = v18;
          if ( !v18 )
            break;
          if ( v18 == -1 )
          {
            v3 = 0LL;
LABEL_28:
            v13 = -1073740024;
            goto LABEL_19;
          }
          if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), (unsigned int)v10, v19, v20) )
          {
            goto LABEL_28;
          }
          v13 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v3, v5, v12, v10, a2);
          if ( (*v24 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v10);
            v12 = v3;
            LODWORD(v10) = v5;
            v3 = 0LL;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v5);
            v3 = 0LL;
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5);
          }
          if ( v13 < 0 )
            goto LABEL_19;
          ++v16;
          v17 += 8;
          if ( v16 >= v23 )
            goto LABEL_18;
        }
        v13 = -1073741739;
      }
    }
LABEL_19:
    if ( v12 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v10);
    if ( v3 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v5);
  }
  return (unsigned int)v13;
}
