/*
 * XREFs of ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140140BD0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402542F0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x140255A54 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14025653C (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400DB9F8 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253990 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x140253A44 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x14025420C (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402542F0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x1402552A0 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 *     StEtaIoComplete @ 0x140256C80 (StEtaIoComplete.c)
 *     SmEtwLogRegionOp @ 0x1402572A0 (SmEtwLogRegionOp.c)
 *     SmWdWorkItemUpdate @ 0x1402589B4 (SmWdWorkItemUpdate.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  unsigned int v6; // eax
  __int64 v7; // r12
  unsigned int *v8; // rdx
  __int64 j; // r15
  int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // r14d
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int16 v17; // dx
  int v18; // r13d
  __int16 v19; // dx
  __int64 v20; // rdx
  char v21; // al
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rax
  _DWORD *v26; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v28; // r8
  __int64 i; // rcx
  unsigned __int64 v30; // rax
  unsigned int v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h]

  v3 = a2 + 8;
  v4 = 0;
  v6 = *(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 164);
  v33 = *(_QWORD *)(a1 + 472);
  v32 = v6;
  v7 = v6;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v22 = *(_DWORD *)(a2 + 28);
    if ( (v22 & 8) != 0 )
      StEtaIoComplete(*(_QWORD *)(a1 + 440), v22 >> 5, 0LL, v3);
    v23 = *(_DWORD *)(v3 + 20);
    v24 = 0LL;
    if ( (v23 & 4) == 0 )
      v24 = *(_QWORD *)v3;
    if ( (v23 & 1) != 0 )
    {
      v25 = *(_QWORD *)(v3 + 8);
      if ( v25 )
        v14 = *(_DWORD *)(v25 + 4);
      else
        v14 = *(_DWORD *)v3;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v14);
    }
    else
    {
      v14 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v24, v3);
      v26 = *(_DWORD **)(a1 + 1080);
      if ( v26 )
      {
        if ( v14 >= 0 )
          ++*v26;
        if ( (*(_DWORD *)(v3 + 20) & 4) == 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v28 = *(_QWORD *)(a1 + 1080);
          i = *(_QWORD *)(v28 + 1328);
          v30 = PerformanceCounter.QuadPart - *(_QWORD *)(*(_QWORD *)(v3 + 8) + 4LL);
          if ( *(_QWORD *)i < v30 || i != *(_QWORD *)(v28 + 1344) && *(_QWORD *)(i - 16) >= v30 )
          {
            for ( i = *(_QWORD *)(v28 + 1344); *(_QWORD *)i < v30; i += 16LL )
              ;
            *(_QWORD *)(v28 + 1328) = i;
          }
          ++*(_DWORD *)(i + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(a1, a2);
    if ( v24 )
      SmWdWorkItemUpdate(&unk_140351B48, *(_QWORD *)(a1 + 152), v24, (unsigned int)v14);
  }
  else
  {
    v8 = (unsigned int *)(a1 + 504);
    for ( j = a1 + 504; *(_DWORD *)j != v6; j += 24LL )
      ;
    v10 = 0;
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) && a1 + 504 < (unsigned __int64)(a1 + 648) )
    {
      do
      {
        v11 = *v8;
        if ( (_DWORD)v11 != -1 && (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v11) & 0x8000) != 0 )
          ++v10;
        v8 += 6;
      }
      while ( (unsigned __int64)v8 < a1 + 648 );
      if ( v10 == 1 )
      {
        v12 = ST_STORE<SM_TRAITS>::StDmPickRandomRegion(a1);
        if ( v12 != -1 )
          ST_STORE<SM_TRAITS>::StDmEtaPerformIo(a1, v12, 4096LL);
      }
    }
    StEtaIoComplete(*(_QWORD *)(a1 + 440), *(unsigned int *)(a1 + 136), 1LL, v3);
    if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
    {
      v13 = *(_QWORD *)(v3 + 8);
      if ( v13 )
        v14 = *(_DWORD *)(v13 + 4);
      else
        v14 = *(_DWORD *)v3;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v14);
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 1080);
      v14 = 0;
      if ( v15 )
        ++*v15;
    }
    v16 = v33;
    v17 = *(_WORD *)(v33 + 2 * v7);
    if ( v17 < 0 )
    {
      v18 = 1;
      v19 = v17 & 0x7FFF;
      *(_WORD *)(v33 + 2 * v7) = v19;
      if ( (dword_140353094 & 0x10) != 0 )
      {
        SmEtwLogRegionOp((unsigned int)&qword_140353088, 4, a1, v32, v14, v19, *(_BYTE *)(*(_QWORD *)(a1 + 488) + v7));
        v16 = v33;
      }
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1152);
        if ( (*(_WORD *)(v16 + 2 * v7) & 0x1FFF) != 0 )
          v18 = 0;
      }
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 20) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1156);
        v18 = 1;
      }
      else
      {
        v18 = 0;
      }
      v20 = *(_QWORD *)(a1 + 480);
      v21 = *(_BYTE *)(v7 + v20);
      if ( v21 )
        *(_BYTE *)(v7 + v20) = v21 - 1;
      else
        *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v7) &= ~0x4000u;
    }
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
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
        v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v7) >> 13;
      if ( v32 != *(_DWORD *)(a1 + 16LL * v4 + 648) )
        v4 = 8;
      if ( v4 != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, v4, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v14;
}
