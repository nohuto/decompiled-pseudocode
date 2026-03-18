/*
 * XREFs of ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE10C
 * Callers:
 *     RitTakeOver @ 0x1C01323F8 (RitTakeOver.c)
 *     RitAdjustForDitTakeOver @ 0x1C0146338 (RitAdjustForDitTakeOver.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
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
    v3 = (void *)*((_QWORD *)Context + 29);
    if ( !v3
      || IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           v3,
           gpWin32kDriverObject,
           DeviceNotify,
           Context,
           (PVOID *)Context + 31) < 0 )
    {
      return 0;
    }
  }
  return v2;
}
