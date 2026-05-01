/*
 * XREFs of RmpSystemNotificationContextCleanup @ 0x18003C0F0
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall RmpSystemNotificationContextCleanup(__int64 a1)
{
  void *v2; // rcx
  DWORD result; // eax
  void *v4; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    result = PowerSettingUnregisterNotification(v2);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    return PowerSettingUnregisterNotification(v4);
  return result;
}
