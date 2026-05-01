/*
 * XREFs of RmpSystemNotificationContextStart @ 0x180019970
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemNotificationContextStart(PHPOWERNOTIFY RegistrationHandle)
{
  _QWORD Recipient[3]; // [rsp+20h] [rbp-18h] BYREF

  Recipient[0] = RmpSystemNotificationPowerCallback;
  Recipient[1] = RmSvcGlobals;
  if ( PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, RegistrationHandle) )
    return 3221225473LL;
  else
    return PowerSettingRegisterNotification(&GUID_GLOBAL_USER_PRESENCE, 2u, Recipient, RegistrationHandle + 1) != 0
         ? 0xC0000001
         : 0;
}
