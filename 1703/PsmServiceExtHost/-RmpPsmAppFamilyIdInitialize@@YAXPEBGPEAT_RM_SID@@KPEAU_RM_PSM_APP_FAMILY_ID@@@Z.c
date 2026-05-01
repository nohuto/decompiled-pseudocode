/*
 * XREFs of ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800167C0
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800177E0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpPsmAppFamilyIdInitialize(char *a1, union _RM_SID *a2, int a3, struct _RM_PSM_APP_FAMILY_ID *a4)
{
  __int64 v8; // r10
  struct _RM_PSM_APP_FAMILY_ID *v9; // rax
  signed __int64 v10; // rbx
  __int16 v11; // cx
  int v12; // eax

  memset_0(a4, 0, 0x218uLL);
  v8 = 232LL;
  v9 = a4;
  v10 = a1 - (char *)a4;
  while ( v8 != -2147483414 )
  {
    v11 = *(_WORD *)((char *)v9 + v10);
    if ( !v11 )
      break;
    *(_WORD *)v9 = v11;
    v9 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)v9 + 2);
    if ( !--v8 )
    {
      v9 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)v9 - 2);
      break;
    }
  }
  *(_WORD *)v9 = 0;
  *((_OWORD *)a4 + 29) = *(_OWORD *)a2;
  *((_OWORD *)a4 + 30) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a4 + 31) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a4 + 32) = *((_OWORD *)a2 + 3);
  v12 = *((_DWORD *)a2 + 16);
  *((_DWORD *)a4 + 133) = a3;
  *((_DWORD *)a4 + 132) = v12;
}
