/*
 * XREFs of ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800018C0
 * Callers:
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180019420 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18002B5C8 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 * Callees:
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004FF4 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800184DC (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

int __fastcall RmpActivityHostQueryByPidOrPsmInfo(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned int a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  int result; // eax
  _DWORD v7[140]; // [rsp+20h] [rbp-488h] BYREF
  _BYTE v8[544]; // [rsp+250h] [rbp-258h] BYREF
  unsigned __int64 v9; // [rsp+470h] [rbp-38h]

  memset_0(v7, 0, 0x228uLL);
  v7[0] = a2;
  if ( (int)((__int64 (__fastcall *)(struct _RM_SERVICE_GLOBALS *, __int64, _DWORD *, struct _RM_ACTIVITY_HOST **))RmpActivityHostFindByTypeAndIdentifier)(
              a1,
              1LL,
              v7,
              a3) >= 0 )
    return 0;
  result = RmpSystemGetProcessPsmInfo(a2, (struct _RM_PSM_HOST_INFO *)v8);
  if ( result >= 0 )
  {
    result = RmpActivityHostFindByHostId(a1, v9, a3);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
