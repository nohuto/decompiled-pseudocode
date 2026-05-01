/*
 * XREFs of IsRmRpsHostEmptyNotificationPresent @ 0x1800205BC
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     RmpRpExtStart @ 0x18001E870 (RmpRpExtStart.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180028A80 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800206F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRmRpsHostEmptyNotificationPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18004C660 == 1 )
    return 1;
  if ( dword_18004C660 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"VX", &v1) < 0 )
    return 0;
  result = v1;
  dword_18004C660 = 2 - (v1 != 0);
  return result;
}
