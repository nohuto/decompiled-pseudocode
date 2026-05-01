/*
 * XREFs of RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180005004 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180005734 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpPsmAppFamilyTableFind @ 0x180005920 (RmpPsmAppFamilyTableFind.c)
 *     RmpPsmAppFamilyIdInitialize @ 0x180005CF8 (RmpPsmAppFamilyIdInitialize.c)
 *     RmpPsmAppFamilyNameFromPsmKey @ 0x180005DC0 (RmpPsmAppFamilyNameFromPsmKey.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFindByActivityHost(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  _BYTE v7[544]; // [rsp+20h] [rbp-418h] BYREF
  _BYTE v8[464]; // [rsp+240h] [rbp-1F8h] BYREF

  v4 = RmpPsmAppFamilyNameFromPsmKey(a1 + 56, v8);
  if ( v4 >= 0 )
  {
    RmpPsmAppFamilyIdInitialize(v8, a1 + 520, *(unsigned int *)(a1 + 588), v7);
    v5 = RmpPsmAppFamilyTableFind(*(_QWORD *)(a1 + 40), v7);
    if ( v5 )
    {
      v4 = 0;
      *a2 = v5;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)v4;
}
