/*
 * XREFs of ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14025653C
 * Callers:
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140255C60 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StStagingRegionReuse@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@@Z @ 0x1402567C0 (-StStagingRegionReuse@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     StEtaIoStart @ 0x140256CD8 (StEtaIoStart.c)
 *     SmIssueIo @ 0x140259C70 (SmIssueIo.c)
 *     SmWaitForSyncIo @ 0x140259ECC (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StStagingRegionIssueIo(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 472);
  v5 = *((_QWORD *)a2 + 2);
  v6 = *a2;
  v7 = *a2 << *(_DWORD *)(a1 + 164);
  v8 = *(_DWORD *)(v5 + 28);
  *(_DWORD *)(v5 + 24) = v7;
  *(_DWORD *)(v5 + 28) ^= (*(_DWORD *)(a1 + 184) ^ v8) & 2;
  *(_WORD *)(v2 + 2 * v6) |= 0x8000u;
  *(_DWORD *)(v5 + 28) ^= (*(_DWORD *)(v5 + 28) ^ (*(_DWORD *)(a1 + 184) >> 2)) & 4;
  StEtaIoStart(*(_QWORD *)(a1 + 440), *(unsigned int *)(a1 + 136), 1LL, v5 + 8);
  v9 = SmIssueIo(*(_QWORD *)(a1 + 152), v6, 0, *(_DWORD *)(a1 + 136), *((_QWORD *)a2 + 1), v5);
  if ( v9 >= 0 )
  {
    if ( (*(_DWORD *)(v5 + 28) & 4) != 0 )
    {
      SmWaitForSyncIo(*(_QWORD *)(a1 + 152));
      return (unsigned int)ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v5);
    }
  }
  else
  {
    *(_DWORD *)(v5 + 28) |= 1u;
    v10 = *(_QWORD *)(v5 + 16);
    if ( v10 )
      *(_DWORD *)(v10 + 4) = v9;
    else
      *(_DWORD *)(v5 + 8) = v9;
    ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v5);
  }
  return (unsigned int)v9;
}
