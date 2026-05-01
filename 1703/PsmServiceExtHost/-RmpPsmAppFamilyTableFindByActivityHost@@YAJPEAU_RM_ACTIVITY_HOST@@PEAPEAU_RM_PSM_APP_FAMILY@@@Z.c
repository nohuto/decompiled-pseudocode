/*
 * XREFs of ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718
 * Callers:
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800020C0 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800165E4 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018068 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018330 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x180018468 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x18002D6D8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800167C0 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyNameFromPsmKey@@YAJPEBGPEAG@Z @ 0x180016890 (-RmpPsmAppFamilyNameFromPsmKey@@YAJPEBGPEAG@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800169D0 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFindByActivityHost(struct _RM_ACTIVITY_HOST *a1, struct _RM_PSM_APP_FAMILY **a2)
{
  int v4; // ebx
  struct _RM_PSM_APP_FAMILY *v5; // rax
  _BYTE v7[544]; // [rsp+20h] [rbp-418h] BYREF
  unsigned __int16 v8[232]; // [rsp+240h] [rbp-1F8h] BYREF

  v4 = RmpPsmAppFamilyNameFromPsmKey((const unsigned __int16 *)a1 + 32, v8);
  if ( v4 >= 0 )
  {
    RmpPsmAppFamilyIdInitialize(
      v8,
      (struct _RM_ACTIVITY_HOST *)((char *)a1 + 528),
      *((_DWORD *)a1 + 149),
      (struct _RM_PSM_APP_FAMILY_ID *)v7);
    v5 = RmpPsmAppFamilyTableFind(*((struct _RM_SERVICE_GLOBALS **)a1 + 5), (struct _RM_PSM_APP_FAMILY_ID *)v7);
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
