/*
 * XREFs of RitPrepDitTakeOver @ 0x1C0144BD8
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C0100DBC (ResetPointerDevices.c)
 *     vRemoveAndCleanupRimClient @ 0x1C0144C58 (vRemoveAndCleanupRimClient.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DD854 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE308 (-UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 RitPrepDitTakeOver()
{
  __int64 v0; // rcx
  __int64 v2; // rcx
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
    EnterDeviceInfoListCrit_(v0);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_QWORD *)(i + 224) && *(_DWORD *)(i + 316) && (*(_BYTE *)(i + 64) & 0x40) == 0 )
      {
        CloseDevice((struct DEVICEINFO *)i);
        UnregisterForDeviceChangeNotifications((struct DEVICEINFO *)i);
        *(_QWORD *)(i + 224) = 0LL;
        *(_DWORD *)(i + 96) |= 2u;
      }
    }
    LeaveDeviceInfoListCrit_(v2);
  }
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}
