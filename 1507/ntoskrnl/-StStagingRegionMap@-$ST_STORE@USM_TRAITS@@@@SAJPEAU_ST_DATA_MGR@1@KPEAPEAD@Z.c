/*
 * XREFs of ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x140256650
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400DB9F8 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x140255608 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StStagingRegionStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140256858 (-StStagingRegionStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StStagingRegionMap(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // rdi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // r9

  v3 = *(_QWORD *)(a1 + 472);
  v4 = a1 + 504;
  v6 = a2;
  v7 = a1 + 648;
  v9 = 0LL;
  while ( v4 < v7 )
  {
    if ( *(_DWORD *)v4 == -1 )
    {
      if ( !v9 )
        v9 = v4;
    }
    else if ( *(_DWORD *)v4 == a2 )
    {
      goto LABEL_23;
    }
    v4 += 24LL;
  }
  v4 = v9;
  if ( !v9 )
    return (unsigned int)-1073739774;
  if ( (*(_WORD *)(v3 + 2LL * a2) & 0x1FFF) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 184);
    if ( (v11 & 2) != 0 )
    {
      if ( (v11 & 4) != 0 && (*(_DWORD *)(a1 + 1464) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 1448) = 0;
        *(_DWORD *)(a1 + 1448) |= 1u;
        *(_DWORD *)(a1 + 1464) |= 1u;
        SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 152), a1 + 1432, 6);
      }
      return (unsigned int)-1073741535;
    }
    if ( (*(_DWORD *)(a1 + 128) & 0x1000) != 0 )
      return (unsigned int)-1073741535;
  }
  v10 = ST_STORE<SM_TRAITS>::StStagingRegionStart(a1, v9, a2);
  if ( v10 >= 0 )
  {
    if ( (*(_WORD *)(v3 + 2 * v6) & 0x1FFF) != 0
      && (v10 = ST_STORE<SM_TRAITS>::StDmRegionEvict(a1, a1 + 392, v6, v12, *(_DWORD *)(a1 + 160) + 1), v10 < 0) )
    {
      if ( *(_DWORD *)v9 != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(v9 + 16), 0);
      }
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_DWORD *)v9 = -1;
    }
    else
    {
LABEL_23:
      v10 = 0;
      *a3 = *(_QWORD *)(v4 + 8);
    }
  }
  return (unsigned int)v10;
}
