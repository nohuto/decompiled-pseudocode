/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14020505C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x1402067FC (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x1402072E0 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402046E4 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x140204798 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x140204F78 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14020505C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x140206034 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 *     StEtaIoComplete @ 0x140207A24 (StEtaIoComplete.c)
 *     SmEtwLogRegionOp @ 0x14020800C (SmEtwLogRegionOp.c)
 *     SmWdWorkItemUpdate @ 0x1402097D8 (SmWdWorkItemUpdate.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int *v9; // rdx
  __int64 j; // r15
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // r14d
  _DWORD *v16; // rax
  __int16 v17; // r8
  int v18; // r13d
  ULONGLONG *v19; // rax
  __int64 v20; // rdx
  char v21; // r8
  __int64 v22; // rdx
  char v23; // al
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rax
  _DWORD *v28; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 i; // rcx
  unsigned int v36; // [rsp+80h] [rbp+8h]
  __int64 v37; // [rsp+80h] [rbp+8h]
  __int64 v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h]

  v2 = a2 + 8;
  v4 = 0;
  v6 = *(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 164);
  v36 = v6;
  v7 = *(_QWORD *)(a1 + 472);
  v8 = v6;
  v38 = v7;
  v39 = v6;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v24 = *(_DWORD *)(a2 + 28);
    if ( (v24 & 8) != 0 )
      StEtaIoComplete(*(_QWORD *)(a1 + 440), v24 >> 5, 0LL, v2);
    v25 = *(_DWORD *)(v2 + 20);
    v26 = 0LL;
    if ( (v25 & 4) == 0 )
      v26 = *(_QWORD *)v2;
    if ( (v25 & 1) != 0 )
    {
      v27 = *(_QWORD *)(v2 + 8);
      if ( v27 )
        v15 = *(_DWORD *)(v27 + 4);
      else
        v15 = *(_DWORD *)v2;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v15);
    }
    else
    {
      v15 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v26, v2);
      v28 = *(_DWORD **)(a1 + 1080);
      if ( v28 )
      {
        if ( v15 >= 0 )
          ++*v28;
        if ( (*(_DWORD *)(v2 + 20) & 4) == 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v30 = *(_QWORD *)(v2 + 8);
          LODWORD(v37) = *(_DWORD *)(v30 + 4);
          v31 = *(_DWORD *)(v30 + 8);
          v32 = *(_QWORD *)(a1 + 1080);
          HIDWORD(v37) = v31;
          v33 = PerformanceCounter.QuadPart - v37;
          i = *(_QWORD *)(v32 + 1328);
          if ( *(_QWORD *)i < v33 || i != *(_QWORD *)(v32 + 1344) && *(_QWORD *)(i - 16) >= v33 )
          {
            for ( i = *(_QWORD *)(v32 + 1344); *(_QWORD *)i < v33; i += 16LL )
              ;
            *(_QWORD *)(v32 + 1328) = i;
          }
          ++*(_DWORD *)(i + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(a1, a2);
    if ( v26 )
      SmWdWorkItemUpdate(&unk_140303DC8, *(_QWORD *)(a1 + 152), v26, (unsigned int)v15);
  }
  else
  {
    v9 = (unsigned int *)(a1 + 504);
    for ( j = a1 + 504; *(_DWORD *)j != v6; j += 24LL )
      ;
    v11 = 0;
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) && a1 + 504 < (unsigned __int64)(a1 + 648) )
    {
      do
      {
        v12 = *v9;
        if ( (_DWORD)v12 != -1 && (*(_WORD *)(v7 + 2 * v12) & 0x8000) != 0 )
          ++v11;
        v9 += 6;
      }
      while ( (unsigned __int64)v9 < a1 + 648 );
      v8 = v39;
      if ( v11 == 1 )
      {
        v13 = ST_STORE<SM_TRAITS>::StDmPickRandomRegion(a1);
        if ( v13 != -1 )
          ST_STORE<SM_TRAITS>::StDmEtaPerformIo(a1, v13, 4096LL);
      }
    }
    StEtaIoComplete(*(_QWORD *)(a1 + 440), *(unsigned int *)(a1 + 136), 1LL, v2);
    if ( (*(_DWORD *)(v2 + 20) & 1) != 0 )
    {
      v14 = *(_QWORD *)(v2 + 8);
      if ( v14 )
        v15 = *(_DWORD *)(v14 + 4);
      else
        v15 = *(_DWORD *)v2;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v15);
    }
    else
    {
      v16 = *(_DWORD **)(a1 + 1080);
      v15 = 0;
      if ( v16 )
        ++*v16;
    }
    v17 = *(_WORD *)(v38 + 2 * v8);
    if ( v17 < 0 )
    {
      v18 = 1;
      *(_WORD *)(v38 + 2 * v8) = v17 & 0x7FFF;
      v19 = SmEtwEnabled(0);
      if ( v19 )
      {
        SmEtwLogRegionOp((_DWORD)v19, 4, a1, v36, v15, v21, *(_BYTE *)(*(_QWORD *)(a1 + 488) + v8));
        v20 = v38;
      }
      if ( (*(_DWORD *)(v2 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1152);
        if ( (*(_WORD *)(v20 + 2 * v8) & 0x1FFF) != 0 )
          v18 = 0;
      }
    }
    else
    {
      if ( (*(_DWORD *)(v2 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1156);
        v18 = 1;
      }
      else
      {
        v18 = 0;
      }
      v22 = *(_QWORD *)(a1 + 480);
      v23 = *(_BYTE *)(v8 + v22);
      if ( v23 )
        *(_BYTE *)(v8 + v22) = v23 - 1;
      else
        *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v8) &= ~0x4000u;
    }
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    if ( v18 )
    {
      if ( *(_DWORD *)j != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(j + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(j + 16), 0);
      }
      *(_QWORD *)j = 0LL;
      *(_QWORD *)(j + 8) = 0LL;
      *(_QWORD *)(j + 16) = 0LL;
      *(_DWORD *)j = -1;
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
        v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v8) >> 13;
      if ( v36 != *(_DWORD *)(a1 + 16LL * v4 + 648) )
        v4 = 8;
      if ( v4 != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, v4, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v15;
}
