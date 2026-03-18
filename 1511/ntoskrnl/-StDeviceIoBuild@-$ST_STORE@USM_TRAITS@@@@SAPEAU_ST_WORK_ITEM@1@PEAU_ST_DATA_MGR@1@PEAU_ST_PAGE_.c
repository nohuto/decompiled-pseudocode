/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1402042A0
 * Callers:
 *     ?StDmDeviceIoListBuild@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAXPEAU_PF_QUEUE@@PEAK@Z @ 0x140204C6C (-StDmDeviceIoListBuild@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KP.c)
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14020505C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x1402067FC (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmCalcIoWorkItemSize @ 0x14020A738 (SmCalcIoWorkItemSize.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  _DWORD *v5; // r13
  unsigned int v6; // r12d
  int v7; // r9d
  int v8; // r11d
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int16 v14; // ax
  __int64 v15; // rcx
  char v16; // al
  int v17; // r15d
  unsigned __int64 PoolWithTag; // rsi
  unsigned int v19; // eax
  size_t v20; // r12
  _DWORD *v21; // rbx
  int v22; // ecx
  __int64 v23; // rdx
  char v24; // al

  v5 = 0LL;
  v6 = 16 * a3 + 12;
  v7 = *(_DWORD *)(a1 + 144);
  v8 = *(_DWORD *)(a1 + 176) + LOWORD(a2[4 * a3 - 3]) + 16 * (a2[4 * a3 - 4] - *a2);
  v9 = *a2 & *(_DWORD *)(a1 + 160);
  v10 = (unsigned int)(*a2 >> *(_DWORD *)(a1 + 164));
  v11 = (unsigned int)v10;
  v12 = *(_QWORD *)(a1 + 472);
  v13 = v7 + ((16 * v9) & (v7 - 1)) - ((v7 - 1) & (v8 + ((16 * v9) & (v7 - 1)) + v7 - 1)) + v8 - 1;
  v14 = *(_WORD *)(v12 + 2 * v10);
  if ( (v14 & 0x4000) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 480);
    v16 = *(_BYTE *)(v10 + v15);
    if ( v16 == -1 )
      return v5;
    *(_BYTE *)(v10 + v15) = v16 + 1;
  }
  else
  {
    *(_WORD *)(v12 + 2 * v10) = v14 | 0x4000;
  }
  v17 = 1;
  if ( *(_QWORD *)(a1 + 1064) )
  {
    PoolWithTag = *(_QWORD *)(a1 + 1064);
    *(_DWORD *)(a1 + 1064) |= 1u;
  }
  else
  {
    PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + v6 + *(_DWORD *)(a1 + 144), 0x74536D73u);
    if ( !PoolWithTag )
    {
LABEL_18:
      v23 = *(_QWORD *)(a1 + 480);
      v24 = *(_BYTE *)(v11 + v23);
      if ( v24 )
        *(_BYTE *)(v11 + v23) = v24 - 1;
      else
        *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v11) &= ~0x4000u;
      return v5;
    }
  }
  memset((void *)PoolWithTag, 0, v6);
  *(_DWORD *)PoolWithTag = a3;
  memmove((void *)(PoolWithTag + 12), a2, 16LL * a3);
  v19 = SmCalcIoWorkItemSize(
          *(_QWORD *)(a1 + 152),
          ~(*(unsigned int *)(a1 + 144) - 1LL) & (PoolWithTag
                                                + *(unsigned int *)(a1 + 144)
                                                + 16LL * *(unsigned int *)PoolWithTag
                                                + 11),
          v13);
  v20 = v19;
  if ( *(_QWORD *)(a1 + 1072) )
  {
    v21 = *(_DWORD **)(a1 + 1072);
    *(_DWORD *)(a1 + 1072) |= 1u;
  }
  else
  {
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x74536D73u);
    if ( !v21 )
      goto LABEL_12;
  }
  memset(v21, 0, v20);
  *v21 |= 7u;
  v5 = v21;
  *((_QWORD *)v21 + 1) = a4;
  *((_QWORD *)v21 + 2) = PoolWithTag;
  PoolWithTag = 0LL;
  v21[6] = *a2;
  v21[7] = v21[7] & 0x1D | (32 * v13) | *(_DWORD *)(a1 + 184) & 2;
  v17 = 0;
LABEL_12:
  if ( PoolWithTag )
  {
    v22 = *(_DWORD *)(a1 + 1064);
    if ( (v22 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1064) )
      *(_DWORD *)(a1 + 1064) = v22 & 0xFFFFFFFE;
    else
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
  }
  if ( v17 )
    goto LABEL_18;
  return v5;
}
