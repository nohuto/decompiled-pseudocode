/*
 * XREFs of ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DC44
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14021F9B0 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(_DWORD *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx

  ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, (unsigned int)(*(_DWORD *)(a2 + 24) >> a1[203]));
  v4 = a1[442];
  if ( (v4 & 1) != 0 && (*(_QWORD *)(a2 + 16) | 1LL) == *((_QWORD *)a1 + 221) )
    a1[442] = v4 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag(*(PVOID *)(a2 + 16), 0);
  v5 = a1[444];
  if ( (v5 & 1) != 0 && (a2 | 1) == *((_QWORD *)a1 + 222) )
    a1[444] = v5 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag((PVOID)a2, 0);
}
