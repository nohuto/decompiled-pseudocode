/*
 * XREFs of ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800165E4
 * Callers:
 *     ?RmpPsmAppFamilyTableAddActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016438 (-RmpPsmAppFamilyTableAddActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800177E0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180017860 (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180017934 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

int __fastcall RmpPsmAppFamilyTableFindOrCreateByActivityHost(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_PSM_APP_FAMILY **a2)
{
  int result; // eax
  char *Heap; // rax
  char *v6; // rbx
  __int64 v7; // r8
  _OWORD *v8; // rdx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  _BYTE v19[544]; // [rsp+20h] [rbp-238h] BYREF

  result = RmpPsmAppFamilyTableFindByActivityHost(a1, a2);
  if ( result == -1073741275 )
  {
    result = RmpPsmAppFamilyIdFromPsmAppInstanceId(
               (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
               (struct _RM_PSM_APP_FAMILY_ID *)v19);
    if ( result >= 0 )
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x240uLL);
      v6 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, 0x240uLL);
        v7 = 4LL;
        v8 = v6 + 16;
        v9 = v19;
        do
        {
          v10 = v9[1];
          *v8 = *v9;
          v11 = v9[2];
          v8[1] = v10;
          v12 = v9[3];
          v8[2] = v11;
          v13 = v9[4];
          v8[3] = v12;
          v14 = v9[5];
          v8[4] = v13;
          v15 = v9[6];
          v8[5] = v14;
          v16 = v9[7];
          v9 += 8;
          v8[6] = v15;
          v8 += 8;
          *(v8 - 1) = v16;
          --v7;
        }
        while ( v7 );
        v17 = *v9;
        v18 = *((_QWORD *)v9 + 2);
        *v8 = v17;
        *((_QWORD *)v8 + 2) = v18;
        *((_QWORD *)v6 + 1) = RmpPsmAppFamilyIdHash((struct _RM_PSM_APP_FAMILY_ID *)(v6 + 16));
        RmpPsmAppFamilyTableAdd(*((struct _RM_SERVICE_GLOBALS **)a1 + 5), (struct _RM_PSM_APP_FAMILY *)v6);
        result = 0;
        *a2 = (struct _RM_PSM_APP_FAMILY *)v6;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
