/*
 * XREFs of CiSchedulerUpdateTimer @ 0x1C0001E10
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001030 (CiSchedulerProcessDeadlines.c)
 *     CiProcessSuspend @ 0x1C0001A50 (CiProcessSuspend.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001D50 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerThreadFunction @ 0x1C0001E90 (CiSchedulerThreadFunction.c)
 * Callees:
 *     <none>
 */

struct _DEVOBJ_EXTENSION *CiSchedulerUpdateTimer()
{
  struct _DEVOBJ_EXTENSION *result; // rax
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rcx
  __int64 v2; // rdx

  result = WPP_MAIN_CB.DeviceObjectExtension;
  if ( WPP_MAIN_CB.DeviceObjectExtension )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)CiSchedulerTimerNode )
    {
      Dope = WPP_MAIN_CB.DeviceObjectExtension->Dope;
      if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)Dope )
      {
        v2 = 0LL;
      }
      else
      {
        v2 = MEMORY[0xFFFFF78000000008] - (_QWORD)Dope;
        if ( (__int64)(MEMORY[0xFFFFF78000000008] - (_QWORD)Dope) < -2000 )
          v2 += 2000LL;
      }
      CiSchedulerTimerNode = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
      return (struct _DEVOBJ_EXTENSION *)ExSetTimer(
                                           *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                           v2,
                                           0LL,
                                           &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
  }
  else if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    return (struct _DEVOBJ_EXTENSION *)ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
  return result;
}
