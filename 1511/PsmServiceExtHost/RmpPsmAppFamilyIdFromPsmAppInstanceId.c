/*
 * XREFs of RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x18000655C
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008568 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     RmpPsmAppFamilyIdInitialize @ 0x180006A18 (RmpPsmAppFamilyIdInitialize.c)
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180008778 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(__int64 a1)
{
  int v1; // edi
  unsigned __int16 v3[232]; // [rsp+20h] [rbp-1E8h] BYREF

  v1 = RmpPsmAppFamilyNameFromPsmKey(a1, v3);
  if ( v1 >= 0 )
    RmpPsmAppFamilyIdInitialize(v3);
  return (unsigned int)v1;
}
