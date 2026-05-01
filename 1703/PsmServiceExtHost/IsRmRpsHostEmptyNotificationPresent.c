/*
 * XREFs of IsRmRpsHostEmptyNotificationPresent @ 0x180021414
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B920 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001CC3C (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180021470 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRmRpsHostEmptyNotificationPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18004D668 == 1 )
    return 1;
  if ( dword_18004D668 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"VX", &v1) < 0 )
    return 0;
  result = v1;
  dword_18004D668 = 2 - (v1 != 0);
  return result;
}
