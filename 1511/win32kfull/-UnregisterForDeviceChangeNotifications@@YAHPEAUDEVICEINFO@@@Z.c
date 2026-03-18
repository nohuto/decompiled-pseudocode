/*
 * XREFs of ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE910
 * Callers:
 *     RitPrepDitTakeOver @ 0x1C009D8C8 (RitPrepDitTakeOver.c)
 *     RitTakeOver @ 0x1C009F9A4 (RitTakeOver.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnregisterForDeviceChangeNotifications(struct DEVICEINFO *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)a1 + 30);
  if ( v2 )
  {
    if ( IoUnregisterPlugPlayNotification(v2) < 0 )
      return 0LL;
    *((_QWORD *)a1 + 30) = 0LL;
  }
  return 1LL;
}
