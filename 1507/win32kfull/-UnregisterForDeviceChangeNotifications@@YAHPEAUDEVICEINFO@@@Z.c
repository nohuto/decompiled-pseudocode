/*
 * XREFs of ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE308
 * Callers:
 *     RitTakeOver @ 0x1C01323F8 (RitTakeOver.c)
 *     RitPrepDitTakeOver @ 0x1C0144BD8 (RitPrepDitTakeOver.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnregisterForDeviceChangeNotifications(struct DEVICEINFO *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)a1 + 31);
  if ( v2 )
  {
    if ( IoUnregisterPlugPlayNotification(v2) < 0 )
      return 0LL;
    *((_QWORD *)a1 + 31) = 0LL;
  }
  return 1LL;
}
