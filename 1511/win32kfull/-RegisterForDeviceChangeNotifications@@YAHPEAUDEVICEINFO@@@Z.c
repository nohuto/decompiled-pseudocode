/*
 * XREFs of ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE710
 * Callers:
 *     RitAdjustForDitTakeOver @ 0x1C009E150 (RitAdjustForDitTakeOver.c)
 *     RitTakeOver @ 0x1C009F9A4 (RitTakeOver.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterForDeviceChangeNotifications(PVOID Context)
{
  unsigned int v2; // ebx
  void *v3; // r8

  if ( gProtocolType )
    return 1LL;
  v2 = 1;
  if ( (*((_BYTE *)Context + 64) & 1) == 0 )
  {
    v3 = (void *)*((_QWORD *)Context + 28);
    if ( !v3
      || IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           v3,
           gpWin32kDriverObject,
           DeviceNotify,
           Context,
           (PVOID *)Context + 30) < 0 )
    {
      return 0;
    }
  }
  return v2;
}
