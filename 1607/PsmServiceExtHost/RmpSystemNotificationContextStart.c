/*
 * XREFs of RmpSystemNotificationContextStart @ 0x18001AFE4
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001AE98 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemNotificationContextStart(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD Recipient[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1904;
  Recipient[1] = a1;
  Recipient[0] = RmpSystemNotificationPowerCallback;
  if ( PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, (PHPOWERNOTIFY)(a1 + 1904)) )
    return 3221225473LL;
  else
    return PowerSettingRegisterNotification(&GUID_GLOBAL_USER_PRESENCE, 2u, Recipient, (PHPOWERNOTIFY)(v1 + 8)) != 0
         ? 0xC0000001
         : 0;
}
