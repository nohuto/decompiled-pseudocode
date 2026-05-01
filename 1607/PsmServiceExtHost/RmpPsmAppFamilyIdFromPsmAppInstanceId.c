/*
 * XREFs of RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x180005C74
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180005734 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     RmpPsmAppFamilyIdInitialize @ 0x180005CF8 (RmpPsmAppFamilyIdInitialize.c)
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180005DC0 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(__int64 a1, __int64 a2)
{
  int v4; // edi
  _BYTE v6[464]; // [rsp+20h] [rbp-1E8h] BYREF

  v4 = RmpPsmAppFamilyNameFromPsmKey(a1, v6);
  if ( v4 >= 0 )
    RmpPsmAppFamilyIdInitialize(v6, a1 + 464, *(unsigned int *)(a1 + 532), a2);
  return (unsigned int)v4;
}
