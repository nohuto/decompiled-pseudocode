/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401111E8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140111678 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x1401113F8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140111484 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140111868 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x14011198C (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140111B00 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  unsigned int Emptiest; // eax
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // ebx
  unsigned int v10; // r12d
  char *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v17; // [rsp+34h] [rbp-164h]
  _WORD *v18; // [rsp+38h] [rbp-160h]
  __int64 v19; // [rsp+40h] [rbp-158h] BYREF
  char v20; // [rsp+48h] [rbp-150h] BYREF
  _BYTE v21[256]; // [rsp+60h] [rbp-138h] BYREF

  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
               a1,
               v21,
               32LL,
               (unsigned int)(*(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172) + 1));
  v5 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v21, Emptiest, &v19);
  v6 = (v19 - *(_QWORD *)(a1 + 472)) >> 1;
  v17 = v5;
  if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), (unsigned int)v6) )
  {
    return (unsigned int)-1073740024;
  }
  v7 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v6, 0LL, 0LL);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741739;
  if ( v7 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v9 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v7, v6, v7, v6, a2);
    if ( v9 >= 0 )
    {
      v10 = 1;
      if ( v5 <= 1 )
      {
LABEL_16:
        v9 = 0;
      }
      else
      {
        v11 = &v20;
        while ( 1 )
        {
          v18 = *(_WORD **)v11;
          v12 = (__int64)(*(_QWORD *)v11 - *(_QWORD *)(a1 + 472)) >> 1;
          if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), (unsigned int)v12) )
          {
LABEL_23:
            v9 = -1073740024;
            goto LABEL_17;
          }
          v13 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v12, 0LL, 0LL);
          v14 = v13;
          if ( !v13 )
            break;
          if ( v13 == -1 )
            goto LABEL_23;
          v9 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v13, v12, v8, v6, a2);
          if ( (*v18 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
            v8 = v14;
            LODWORD(v6) = v12;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v12);
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1);
          }
          if ( v9 < 0 )
            goto LABEL_17;
          ++v10;
          v11 += 8;
          if ( v10 >= v17 )
            goto LABEL_16;
        }
        v9 = -1073741739;
      }
    }
LABEL_17:
    if ( v8 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v6);
  }
  return (unsigned int)v9;
}
