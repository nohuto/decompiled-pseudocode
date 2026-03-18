/*
 * XREFs of VidSchFlushAdapter @ 0x1C00A0BE0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006894C (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C0002000 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00020BC (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0002C18 (VidSchiClearFlipDevice.c)
 *     VidSchiGetSchedulerStatus @ 0x1C0007F28 (VidSchiGetSchedulerStatus.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C00258D4 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0025D40 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0025FB4 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C00273D0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00413E0 (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x1C00677D0 (VidSchResumeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C006894C (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0068B54 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0069BF8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C009FBD4 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiBlockDriverCallback @ 0x1C00A26DC (VidSchiBlockDriverCallback.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C00A2734 (VidSchiCleanupQueuedCommand.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v3; // r14d
  int v5; // r13d
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v9; // esi
  struct _VIDSCH_GLOBAL *i; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD v13[20]; // [rsp+38h] [rbp-69h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 17) && CurrentThread != *((struct _KTHREAD **)a1 + 18) )
        *((_BYTE *)a1 + 2828) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( v3 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || (v9 = 0, v3 == 15) )
          v9 = 1;
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          if ( *((_DWORD *)a1 + 700) == 3 )
          {
            VidSchiBlockDriverCallback(a1);
            *((_DWORD *)a1 + 9) = 23;
            *((_QWORD *)a1 + 50) = 0LL;
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue((__int64)a1);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 30);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 240);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice((__int64)i - 80);
        }
        VidSchResumeAdapter(a1, 0);
        if ( v9 )
        {
          VidSchiUnwaitAllContexts((__int64)a1);
          VidSchiClearFlipDevice(a1, 0LL, 9);
        }
        VidSchiCleanupQueuedCommand(a1);
        if ( ((*((_DWORD *)a1 + 65) - 2) & 0xFFFFFFFD) != 0 )
          VidSchiHandleControlEvent((__int64)a1);
      }
    }
    else
    {
      if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 3 )
        VidSchResumeAdapter(v11, 0);
      if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 634LL) )
      {
        v5 = VidSchiRequestSchedulerStatus((__int64)a1, 4, 1);
      }
      else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
      {
        v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v12, (__int64)a1, v3);
        if ( v5 >= 0 && (v3 & 1) != 0 )
        {
          if ( VidSchIsTDRPending((__int64)a1) || v3 == 15 )
            VidSchiUnwaitAllContexts((__int64)a1);
          if ( *((_DWORD *)a1 + 235) )
          {
            memset(v13, 0, sizeof(v13));
            LODWORD(v13[4]) |= 4u;
            LODWORD(v13[2]) = 1;
            v13[5] = (char *)a1 + 940;
            VidSchiWaitFlushCompletion((__int64)a1, (__int64)v13, 0x1Au);
          }
          if ( *((_DWORD *)a1 + 238) )
          {
            memset(v13, 0, sizeof(v13));
            LODWORD(v13[4]) |= 4u;
            LODWORD(v13[2]) = 3;
            v13[5] = (char *)a1 + 952;
            VidSchiWaitFlushCompletion((__int64)a1, (__int64)v13, 0x19u);
          }
          if ( v3 != 5 )
          {
            VidSchiClearFlipDevice(a1, 0LL, 9);
            VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 235, (_DWORD *)a1 + 238);
          }
        }
      }
    }
    LOBYTE(v2) = v3 == 15;
    _InterlockedOr((volatile signed __int32 *)a1 + 1413, v2);
    return (unsigned int)v5;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
