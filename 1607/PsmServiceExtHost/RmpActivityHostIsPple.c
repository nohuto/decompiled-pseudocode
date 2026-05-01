/*
 * XREFs of RmpActivityHostIsPple @ 0x18000564C
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800055B0 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x180005684 (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 */

unsigned __int8 __fastcall RmpActivityHostIsPple(__int64 a1)
{
  unsigned __int8 result; // al
  unsigned __int8 v2; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  v2 = 0;
  if ( !*(_DWORD *)(a1 + 48) && *(_DWORD *)(a1 + 592) == 2 )
  {
    RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(a1 + 56), &v2);
    return v2;
  }
  return result;
}
