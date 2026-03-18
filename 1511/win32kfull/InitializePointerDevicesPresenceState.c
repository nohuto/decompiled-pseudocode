/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C0099CD0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C009601C (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C0096138 (AddRemovePointerDevicePresence.c)
 */

void __fastcall InitializePointerDevicesPresenceState(int a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v2; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  if ( a1 )
  {
    qword_1C0323FC8 = (__int64)&gPointerDeviceClients;
    gActivePointerDeviceList.Blink = &gActivePointerDeviceList;
    gActivePointerDeviceList.Flink = &gActivePointerDeviceList;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
    qword_1C0323FB8 = (__int64)&gPointerDeviceInfoList;
    gPointerDeviceInfoList.Flink = &gPointerDeviceInfoList;
    AddRemovePointerDeviceSystemMetricKey(0, 1);
    AddRemovePointerDeviceSystemMetricKey(0, 0);
    AddRemovePointerDevicePresence(0);
  }
  else
  {
    Flink = gPointerDeviceClients.Flink;
    while ( Flink != &gPointerDeviceClients )
    {
      v2 = Flink - 1;
      HMAssignmentUnlock(&Flink[-1]);
      Flink = Flink->Flink;
      v3 = v2[1].Flink;
      Blink = v2[1].Blink;
      if ( v3->Blink != &v2[1] || Blink->Flink != &v2[1] )
        __fastfail(3u);
      Blink->Flink = v3;
      v3->Blink = Blink;
      Win32FreePool(v2);
    }
    if ( ghPntrProcRunningEvent )
      NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      NtClose(ghPntrProcRequestEvent);
  }
}
