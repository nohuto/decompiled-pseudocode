/*
 * XREFs of CsTerminate @ 0x1C000BF94
 * Callers:
 *     CiDriverUnload @ 0x1C000BF40 (CiDriverUnload.c)
 *     GsDriverEntry @ 0x1C000D000 (GsDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 *     CiFreeMemory @ 0x1C00042BC (CiFreeMemory.c)
 *     CiSystemTerminate @ 0x1C000C30C (CiSystemTerminate.c)
 *     CiSchedulerTerminate @ 0x1C000C348 (CiSchedulerTerminate.c)
 */

NTSTATUS CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax
  NTSTATUS result; // eax
  PDEVICE_OBJECT v3; // rbx

  if ( CiThreadCallbackRegistered )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
    CiThreadCallbackRegistered = 0;
  }
  CiSchedulerTerminate();
  while ( 1 )
  {
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      break;
    v1 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead
      || v1->Blink != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    CiFreeMemory(Flink[1].Flink);
    CiFreeMemory(&Flink[-1].Blink);
  }
  result = CiSystemTerminate();
  if ( CiLoggerContext )
  {
    result = EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = WPPTraceSuite;
    if ( WPPTraceSuite == 4 )
    {
      if ( WPP_GLOBAL_Control )
      {
        do
        {
          if ( v3->Vpb )
            result = ((__int64 (*)(void))pfnEtwUnregister)();
          v3 = v3->NextDevice;
        }
        while ( v3 );
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      result = IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
  return result;
}
