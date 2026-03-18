/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140144474 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140140460 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140144058 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1401440E4 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x140144930 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140144AA0 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140147C9C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2)
{
  unsigned int v4; // r15d
  unsigned int Emptiest; // eax
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ebx
  unsigned int v11; // r12d
  char *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v17; // [rsp+30h] [rbp-178h]
  unsigned int v18; // [rsp+34h] [rbp-174h]
  _WORD *v20; // [rsp+40h] [rbp-168h]
  __int64 v21; // [rsp+48h] [rbp-160h] BYREF
  char v22; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v23[256]; // [rsp+70h] [rbp-138h] BYREF

  v4 = (*(_DWORD *)(a1 + 128) >> 18) & 1;
  v17 = v4;
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
               a1,
               v23,
               32LL,
               (unsigned int)(*(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 172) + 1));
  v6 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v23, Emptiest, &v21);
  v7 = (v21 - *(_QWORD *)(a1 + 472)) >> 1;
  v18 = v6;
  if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), (unsigned int)v7) )
  {
    return (unsigned int)-1073740024;
  }
  v8 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v7, 0LL, v4);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1073741739;
  if ( v8 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v10 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v8, v7, v8, v7, a2);
    if ( v10 >= 0 )
    {
      v11 = 1;
      if ( v6 <= 1 )
      {
LABEL_18:
        v10 = 0;
      }
      else
      {
        v12 = &v22;
        while ( 1 )
        {
          v20 = *(_WORD **)v12;
          v13 = (__int64)(*(_QWORD *)v12 - *(_QWORD *)(a1 + 472)) >> 1;
          if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0
            && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), (unsigned int)v13) )
          {
LABEL_24:
            v10 = -1073740024;
            goto LABEL_19;
          }
          v14 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, (unsigned int)v13, 0LL, v4);
          v15 = v14;
          if ( !v14 )
            break;
          if ( v14 == -1 )
            goto LABEL_24;
          v10 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v14, v13, v9, v7, a2);
          if ( (*v20 & 0x1FFF) != 0 )
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v7);
            v9 = v15;
            LODWORD(v7) = v13;
          }
          else
          {
            ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v13);
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v13);
          }
          if ( v10 < 0 )
            goto LABEL_19;
          ++v11;
          v12 += 8;
          if ( v11 >= v18 )
            goto LABEL_18;
          v4 = v17;
        }
        v10 = -1073741739;
      }
    }
LABEL_19:
    if ( v9 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, (unsigned int)v7);
  }
  return (unsigned int)v10;
}
