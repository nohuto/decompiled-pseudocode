/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14011C75C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400A6598 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A894 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140120598 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14021F270 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x140220258 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // r9
  ULONGLONG *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rdi
  void *v12; // rbx
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1032)) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v6 + 5861) & 4) != 0 )
    {
      v7 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0LL, a4);
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 6056);
      v12 = (void *)(*(_QWORD *)(v11 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v12, 0);
      ExFreePoolWithTag(v12, 0);
      v7 = 0;
      *(_QWORD *)(v11 + 8 * v4) = 0LL;
    }
    if ( v7 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v4, 1LL, v8);
    v9 = SmEtwEnabled(0);
    if ( v9 )
      SmEtwLogRegionOp((_DWORD)v9, 5, a1, v4, 0, *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v4), 0);
    if ( (unsigned int)v4 < *(_DWORD *)(a1 + 1060) )
      *(_DWORD *)(a1 + 1060) = v4;
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v10 = 0;
  else
    v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v4) >> 13;
  --*(_DWORD *)(a1 + 8LL * v10 + 1792);
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v4) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v13, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v13) >= 8 && (*(_DWORD *)(a1 + 2168) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2152) = 0;
      *(_DWORD *)(a1 + 2168) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2136, 6);
    }
  }
}
