/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14010E2F4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140111678 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140203C50 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140203E18 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x14010E474 (-StDmComputeSpaceUsageForPriority@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, char a2)
{
  int v2; // ebp
  unsigned int v5; // edi
  int v6; // r8d
  unsigned int v7; // esi
  _BYTE *v8; // r15
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v11; // rax
  BOOL v12; // edx
  unsigned int v13; // r9d
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 1160) & 3;
  v5 = 2;
  if ( (a2 & 3) != 0 || v2 != 2 )
  {
    v6 = (unsigned __int8)*(_DWORD *)(a1 + 128);
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    {
      if ( v2 == 3 )
      {
        v15 = *(_DWORD *)(a1 + 208);
        v7 = v15 - 256;
        v16 = v15 >> 2;
        if ( v16 < v7 )
          v7 = v16;
      }
      else
      {
        v17 = *(_DWORD *)(a1 + 208);
        v7 = v17 - 128;
        if ( 3 * (v17 >> 2) < v17 - 128 )
          v7 = 3 * (v17 >> 2);
      }
      v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableFile;
      if ( v7 < 2 )
        v7 = 2;
    }
    else
    {
      v7 = 3;
      v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem;
    }
    v20 = 0;
    v9 = 0;
    v18 = 0;
    v19 = 0;
    v10 = 8;
    if ( v6 )
      v10 = 1;
    do
      ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
        a1,
        v9++,
        (unsigned int)&v19,
        (unsigned int)&v20,
        (__int64)&v18);
    while ( v9 < v10 );
    v11 = *(_QWORD *)(a1 + 152);
    if ( (a2 & 2) != 0 )
    {
      if ( !*(_BYTE *)(v11 + 4486) && v19 * ((unsigned __int64)*(unsigned int *)(a1 + 136) >> 12) > *(_QWORD *)(a1 + 8) )
        return v5;
    }
    else if ( !*(_QWORD *)(v11 + 5016) && v19 >= v7 )
    {
      v12 = (a2 & 1) == 0
         && (v2 == 1
          || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 4564LL) >> 8)
           + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 5032LL)
           + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4560LL)
          || (unsigned __int8)*(_DWORD *)(a1 + 128) == 1
          && MEMORY[0xFFFFF78000000008] - *(_QWORD *)(*(_QWORD *)(a1 + 440) + 40LL) < 0x3D0900uLL);
      v13 = v20 >> v8[2 * v12];
      if ( v2 == 3 )
        v13 -= v20 >> v8[2 * v12 + 1];
      if ( v18 <= v13 )
        return v2 != 1 && v12 > 0 && v18 > v20 >> *v8;
      return v5;
    }
  }
  return 0LL;
}
