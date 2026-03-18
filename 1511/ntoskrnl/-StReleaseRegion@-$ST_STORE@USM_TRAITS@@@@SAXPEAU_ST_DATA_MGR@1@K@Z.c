/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400F6DB0 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401111E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140111484 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140205DC0 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400E4014 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140111764 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140206930 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x14020800C (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r9
  ULONGLONG *v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rdi
  struct _MDL *v10; // rbx
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 488)) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v4 + 4485) & 4) != 0 )
    {
      v5 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 152), a2, 0);
    }
    else
    {
      v9 = *(_QWORD *)(v4 + 4680);
      v10 = (struct _MDL *)(*(_QWORD *)(v9 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MmFreePagesFromMdl(v10);
      ExFreePoolWithTag(v10, 0);
      v5 = 0;
      *(_QWORD *)(v9 + 8 * v2) = 0LL;
    }
    if ( v5 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL, v6);
    v7 = SmEtwEnabled(0);
    if ( v7 )
      SmEtwLogRegionOp((_DWORD)v7, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v2), 0);
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v8 = 0;
  else
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v8 + 1088);
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v2) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v11, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 208) - v11) >= 8 && (*(_DWORD *)(a1 + 1464) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 1448) = 0;
      *(_DWORD *)(a1 + 1464) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 152), a1 + 1432, 6);
    }
  }
}
