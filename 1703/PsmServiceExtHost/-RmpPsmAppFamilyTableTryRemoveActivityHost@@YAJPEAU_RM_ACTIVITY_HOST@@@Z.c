/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018068
 * Callers:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001824C (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800181C0 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r10
  _QWORD *v5; // rdx
  __int64 v6; // [rsp+58h] [rbp+10h]
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  result = RmpPsmAppFamilyTableFindByActivityHost(a1, (struct _RM_PSM_APP_FAMILY **)&P);
  if ( (int)result >= 0 )
  {
    v3 = P;
    result = RmpPsmAppFamilyTryRemoveActivityHost((struct _RM_PSM_APP_FAMILY *)P, a1);
    if ( (int)result >= 0 )
    {
      if ( !v3[69] )
      {
        v4 = *((_QWORD *)a1 + 5);
        v6 = v3[1] & (-1LL << (*(_DWORD *)(v4 + 1204) & 0x1F));
        v5 = (_QWORD *)(*(_QWORD *)(v4 + 1208)
                      + 8LL
                      * ((37
                        * (BYTE6(v6)
                         + 37
                         * (BYTE5(v6)
                          + 37
                          * (BYTE4(v6)
                           + 37
                           * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                        + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(v4 + 1204) >> 5) - 1)));
        if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v3 = P;
          v5 = (_QWORD *)(*(_QWORD *)(v4 + 1208)
                        + 8LL
                        * ((37
                          * (BYTE6(v6)
                           + 37
                           * (BYTE5(v6)
                            + 37
                            * (BYTE4(v6)
                             + 37
                             * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                          + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(v4 + 1204) >> 5) - 1)));
        }
        while ( (*v5 & 1) == 0 )
        {
          if ( (_QWORD *)*v5 == v3 )
          {
            *v5 = *v3;
            --*(_DWORD *)(v4 + 1200);
            *v3 |= 0x8000000000000002uLL;
            break;
          }
          v5 = (_QWORD *)*v5;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      }
      return 0LL;
    }
  }
  return result;
}
