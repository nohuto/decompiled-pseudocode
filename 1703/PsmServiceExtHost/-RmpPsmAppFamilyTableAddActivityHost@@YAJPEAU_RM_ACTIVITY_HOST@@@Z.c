/*
 * XREFs of ?RmpPsmAppFamilyTableAddActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016438
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016320 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001649C (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800165E4 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableAddActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // eax
  _QWORD *v3; // rbx
  int v4; // edi
  __int64 v6; // r10
  _QWORD *v7; // rdx
  __int64 v8; // [rsp+68h] [rbp+10h]
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  v2 = RmpPsmAppFamilyTableFindOrCreateByActivityHost(a1, (struct _RM_PSM_APP_FAMILY **)&P);
  v3 = P;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v4 = RmpPsmAppFamilyAddActivityHost((struct _RM_PSM_APP_FAMILY *)P, a1);
    if ( v4 >= 0 )
    {
      v3 = 0LL;
      v4 = 0;
      P = 0LL;
    }
  }
  if ( v3 && !v3[69] )
  {
    v6 = *((_QWORD *)a1 + 5);
    v8 = v3[1] & (-1LL << (*(_DWORD *)(v6 + 1204) & 0x1F));
    v7 = (_QWORD *)(*(_QWORD *)(v6 + 1208)
                  + 8LL
                  * ((37
                    * (BYTE6(v8)
                     + 37
                     * (BYTE5(v8)
                      + 37
                      * (BYTE4(v8)
                       + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                    + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v6 + 1204) >> 5) - 1)));
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v3 = P;
      v7 = (_QWORD *)(*(_QWORD *)(v6 + 1208)
                    + 8LL
                    * ((37
                      * (BYTE6(v8)
                       + 37
                       * (BYTE5(v8)
                        + 37
                        * (BYTE4(v8)
                         + 37
                         * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                      + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v6 + 1204) >> 5) - 1)));
    }
    while ( (*v7 & 1) == 0 )
    {
      if ( (_QWORD *)*v7 == v3 )
      {
        *v7 = *v3;
        --*(_DWORD *)(v6 + 1200);
        *v3 |= 0x8000000000000002uLL;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return (unsigned int)v4;
}
