/*
 * XREFs of RitPrepDitTakeOver @ 0x1C009D8C8
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     vRemoveAndCleanupRimClient @ 0x1C009CED4 (vRemoveAndCleanupRimClient.c)
 *     ResetPointerDevices @ 0x1C009D940 (ResetPointerDevices.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DDE54 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE910 (-UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 RitPrepDitTakeOver()
{
  __int64 i; // rbx

  if ( !*(_DWORD *)(gpDitInfo + 52) )
  {
    SetThreadBasePriority(*(_QWORD *)gptiDit, 16LL);
    if ( gptiManipulationThread )
      SetThreadBasePriority(*(_QWORD *)gptiManipulationThread, 16LL);
  }
  ResetPointerDevices();
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    vRemoveAndCleanupRimClient();
  }
  else
  {
    EnterDeviceInfoListCrit_();
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_QWORD *)(i + 216) && *(_DWORD *)(i + 308) && (*(_BYTE *)(i + 64) & 0x40) == 0 )
      {
        CloseDevice((struct DEVICEINFO *)i);
        UnregisterForDeviceChangeNotifications((struct DEVICEINFO *)i);
        *(_QWORD *)(i + 216) = 0LL;
        *(_DWORD *)(i + 88) |= 2u;
      }
    }
    LeaveDeviceInfoListCrit_();
  }
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}
