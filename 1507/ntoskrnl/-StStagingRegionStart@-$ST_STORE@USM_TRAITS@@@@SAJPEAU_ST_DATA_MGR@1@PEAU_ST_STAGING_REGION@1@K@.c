/*
 * XREFs of ?StStagingRegionStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140256858
 * Callers:
 *     ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x140256650 (-StStagingRegionMap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     SmCalcIoWorkItemSize @ 0x140259C40 (SmCalcIoWorkItemSize.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StStagingRegionStart(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rax
  void *v7; // rdi
  unsigned int v8; // ebx
  SIZE_T v9; // rbp
  _DWORD *v10; // rax
  _DWORD *v11; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(a1 + 136), 0x74536D73u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 136));
    v9 = (unsigned int)SmCalcIoWorkItemSize(*(_QWORD *)(a1 + 152), v7, *(unsigned int *)(a1 + 136));
    v10 = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x74536D73u);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, v9);
      *v11 |= 7u;
      *(_QWORD *)(a2 + 8) = v7;
      v7 = 0LL;
      *(_QWORD *)(a2 + 16) = v11;
      v8 = 0;
      *(_DWORD *)a2 = a3;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
