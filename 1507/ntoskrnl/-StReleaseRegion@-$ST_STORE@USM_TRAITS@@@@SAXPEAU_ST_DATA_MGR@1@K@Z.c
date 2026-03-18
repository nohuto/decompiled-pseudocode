/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400DB9F8 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1401440E4 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmPageMove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z @ 0x140255040 (-StDmPageMove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@K@Z.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401231B8 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14014753C (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140255B88 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x1402572A0 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rdi
  struct _MDL *v9; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

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
      v5 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 152), a2, 0LL);
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 4680);
      v9 = (struct _MDL *)(*(_QWORD *)(v8 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MmFreePagesFromMdl(v9);
      ExFreePoolWithTag(v9, 0);
      v5 = 0;
      *(_QWORD *)(v8 + 8 * v2) = 0LL;
    }
    if ( v5 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL, v6);
    if ( (dword_140353094 & 0x10) != 0 )
      SmEtwLogRegionOp((unsigned int)&qword_140353088, 5, a1, v2, 0, *(_BYTE *)(*(_QWORD *)(a1 + 472) + 2 * v2), 0);
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v7 = 0;
  else
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v7 + 1088);
  if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v2) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, v10, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 208) - v10[0]) >= 8 && (*(_DWORD *)(a1 + 1464) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 1448) = 0;
      *(_DWORD *)(a1 + 1464) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 152), a1 + 1432, 6);
    }
  }
}
