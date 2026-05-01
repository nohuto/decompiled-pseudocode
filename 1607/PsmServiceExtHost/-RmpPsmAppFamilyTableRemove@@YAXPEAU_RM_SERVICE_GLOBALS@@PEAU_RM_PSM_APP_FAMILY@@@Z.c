/*
 * XREFs of ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180004968
 * Callers:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180005004 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x18000554C (RmpPsmAppFamilyTableAddActivityHost.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPsmAppFamilyTableRemove(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  struct _RM_PSM_APP_FAMILY *v3; // rdx
  __int64 v4; // [rsp+50h] [rbp+8h]

  v4 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 755) & 0x1F));
  v3 = (struct _RM_PSM_APP_FAMILY *)(*((_QWORD *)a1 + 378)
                                   + 8LL
                                   * ((37
                                     * (BYTE6(v4)
                                      + 37
                                      * (BYTE5(v4)
                                       + 37
                                       * (BYTE4(v4)
                                        + 37
                                        * (BYTE3(v4)
                                         + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
                                     + HIBYTE(v4)) & (unsigned int)((*((_DWORD *)a1 + 755) >> 5) - 1)));
  if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = (struct _RM_PSM_APP_FAMILY *)(*((_QWORD *)a1 + 378)
                                     + 8LL
                                     * ((37
                                       * (BYTE6(v4)
                                        + 37
                                        * (BYTE5(v4)
                                         + 37
                                         * (BYTE4(v4)
                                          + 37
                                          * (BYTE3(v4)
                                           + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
                                       + HIBYTE(v4)) & (unsigned int)((*((_DWORD *)a1 + 755) >> 5) - 1)));
  while ( (*(_QWORD *)v3 & 1) == 0 )
  {
    if ( *(struct _RM_PSM_APP_FAMILY **)v3 == a2 )
    {
      *(_QWORD *)v3 = *(_QWORD *)a2;
      --*((_DWORD *)a1 + 754);
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
    v3 = *(struct _RM_PSM_APP_FAMILY **)v3;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}
