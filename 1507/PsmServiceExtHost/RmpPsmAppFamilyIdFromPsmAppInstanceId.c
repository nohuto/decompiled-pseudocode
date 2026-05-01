/*
 * XREFs of RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x1800193B0
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008B70 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180008D80 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x1800191D8 (RmpPsmAppFamilyIdInitialize.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(__int64 a1, __int64 a2)
{
  LONG v4; // edi
  char v6[464]; // [rsp+20h] [rbp-1E8h] BYREF

  v4 = RmpPsmAppFamilyNameFromPsmKey(a1, v6);
  if ( v4 >= 0 )
    RmpPsmAppFamilyIdInitialize(v6, a1 + 464, *(_DWORD *)(a1 + 532), a2);
  return (unsigned int)v4;
}
