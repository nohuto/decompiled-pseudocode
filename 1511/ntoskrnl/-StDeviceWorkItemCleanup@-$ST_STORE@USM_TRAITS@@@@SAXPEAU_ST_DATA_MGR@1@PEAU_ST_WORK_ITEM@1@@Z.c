/*
 * XREFs of ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402046E4
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoListBuild@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAXPEAU_PF_QUEUE@@PEAK@Z @ 0x140204C6C (-StDmDeviceIoListBuild@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // al
  int v8; // ecx
  int v9; // ecx

  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 164));
  v5 = v4;
  v6 = *(_QWORD *)(a1 + 480);
  v7 = *(_BYTE *)(v4 + v6);
  if ( v7 )
    *(_BYTE *)(v5 + v6) = v7 - 1;
  else
    *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v5) &= ~0x4000u;
  v8 = *(_DWORD *)(a1 + 1064);
  if ( (v8 & 1) != 0 && (*(_QWORD *)(a2 + 16) | 1LL) == *(_QWORD *)(a1 + 1064) )
    *(_DWORD *)(a1 + 1064) = v8 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag(*(PVOID *)(a2 + 16), 0);
  v9 = *(_DWORD *)(a1 + 1072);
  if ( (v9 & 1) != 0 && (a2 | 1) == *(_QWORD *)(a1 + 1072) )
    *(_DWORD *)(a1 + 1072) = v9 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag((PVOID)a2, 0);
}
