/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C00E8EF0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00E5A98 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00E5BB4 (AddRemovePointerDevicePresence.c)
 */

void __fastcall InitializePointerDevicesPresenceState(int a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // r8
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  if ( a1 )
  {
    qword_1C0329698 = (__int64)&gPointerDeviceClients;
    qword_1C0329668 = (__int64)&gActivePointerDeviceList;
    gActivePointerDeviceList = &gActivePointerDeviceList;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
    qword_1C0329688 = (__int64)&gPointerDeviceInfoList;
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
      v4 = v2[1].Flink;
      Blink = v2[1].Blink;
      if ( v4->Blink != &v2[1] || Blink->Flink != &v2[1] )
        __fastfail(3u);
      Blink->Flink = v4;
      v4->Blink = Blink;
      Win32FreePool(v2, Blink, v3);
    }
    if ( ghPntrProcRunningEvent )
      NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      NtClose(ghPntrProcRequestEvent);
  }
}
