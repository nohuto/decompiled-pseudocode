/*
 * XREFs of ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800177E0
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800165E4 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800167C0 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyNameFromPsmKey@@YAJPEBGPEAG@Z @ 0x180016890 (-RmpPsmAppFamilyNameFromPsmKey@@YAJPEBGPEAG@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(
        struct _RM_PSM_HOST_INFO *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  LONG v4; // edi
  unsigned __int16 v6[232]; // [rsp+20h] [rbp-1E8h] BYREF

  v4 = RmpPsmAppFamilyNameFromPsmKey((const unsigned __int16 *)a1, v6);
  if ( v4 >= 0 )
    RmpPsmAppFamilyIdInitialize((char *)v6, (struct _RM_PSM_HOST_INFO *)((char *)a1 + 464), *((_DWORD *)a1 + 133), a2);
  return (unsigned int)v4;
}
