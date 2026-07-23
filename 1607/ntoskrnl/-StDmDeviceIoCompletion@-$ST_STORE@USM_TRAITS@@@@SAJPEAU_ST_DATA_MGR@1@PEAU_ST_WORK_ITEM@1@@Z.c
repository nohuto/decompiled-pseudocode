/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011D580 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14021E1F8 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14021F160 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14021FA40 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x14021DA78 (-StDeviceIoIsFailed@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DC44 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14021DCD4 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x14021E100 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14021E884 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14021F9B0 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     StEtaIoComplete @ 0x14021FDE4 (StEtaIoComplete.c)
 *     SmEtwLogRegionOp @ 0x140220258 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  bool v6; // zf
  __int64 v7; // r12
  __int64 i; // r14
  int v9; // ebp
  _DWORD *v10; // rax
  __int16 v11; // r8
  int v12; // r12d
  ULONGLONG *v13; // rax
  char v14; // r8
  unsigned int IsCurrentRegion; // eax
  unsigned int v16; // edx
  __int64 v17; // r9
  _DWORD *v18; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 j; // rcx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h]

  v3 = a2 + 8;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812));
  v6 = *(_QWORD *)(a2 + 16) == 0LL;
  v7 = *(_QWORD *)(a1 + 1016);
  v27 = v7;
  if ( v6 )
  {
    for ( i = a1 + 1072; *(_DWORD *)i != (_DWORD)v5; i += 24LL )
      ;
    StEtaIoComplete(*(_QWORD *)(a1 + 984), *(unsigned int *)(a1 + 784), 1LL, v3);
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed((int *)v3, &v26) )
    {
      v9 = v26;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v26);
    }
    else
    {
      v10 = *(_DWORD **)(a1 + 1784);
      v9 = 0;
      if ( v10 )
        ++*v10;
    }
    v11 = *(_WORD *)(v7 + 2 * v5);
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1860);
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, (unsigned int)v5);
    }
    else
    {
      *(_WORD *)(v7 + 2 * v5) = v11 & 0x7FFF;
      v12 = 1;
      v13 = SmEtwEnabled(0);
      if ( v13 )
        SmEtwLogRegionOp((_DWORD)v13, 4, a1, v5, v9, v14, *(_BYTE *)(*(_QWORD *)(a1 + 1032) + v5));
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1856);
        if ( (*(_WORD *)(v27 + 2 * v5) & 0x1FFF) != 0 )
          v12 = 0;
      }
    }
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    if ( v12 )
    {
      if ( *(_DWORD *)i != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(i + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(i + 16), 0);
      }
      *(_QWORD *)i = 0LL;
      *(_QWORD *)(i + 8) = 0LL;
      *(_QWORD *)(i + 16) = 0LL;
      *(_DWORD *)i = -1;
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, (unsigned int)v5);
      if ( IsCurrentRegion != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF);
    }
  }
  else
  {
    v16 = *(_DWORD *)(a2 + 28);
    if ( (v16 & 8) != 0 )
      StEtaIoComplete(*(_QWORD *)(a1 + 984), v16 >> 5, 0LL, v3);
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed((int *)v3, &v26) )
    {
      v9 = v26;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v26);
    }
    else
    {
      v9 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v17, v3);
      v18 = *(_DWORD **)(a1 + 1784);
      if ( v18 )
      {
        if ( v9 >= 0 )
          ++*v18;
        if ( (*(_DWORD *)(v3 + 20) & 4) == 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v20 = *(_QWORD *)(v3 + 8);
          LODWORD(v26) = *(_DWORD *)(v20 + 4);
          v21 = *(_DWORD *)(v20 + 8);
          v22 = *(_QWORD *)(a1 + 1784);
          HIDWORD(v26) = v21;
          v23 = PerformanceCounter.QuadPart - v26;
          j = *(_QWORD *)(v22 + 1328);
          if ( *(_QWORD *)j < v23 || j != *(_QWORD *)(v22 + 1344) && *(_QWORD *)(j - 16) >= v23 )
          {
            for ( j = *(_QWORD *)(v22 + 1344); *(_QWORD *)j < v23; j += 16LL )
              ;
            *(_QWORD *)(v22 + 1328) = j;
          }
          ++*(_DWORD *)(j + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup((_DWORD *)a1, a2);
  }
  return (unsigned int)v9;
}
