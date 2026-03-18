/*
 * XREFs of VidSchFlushAdapter @ 0x1C00780D0
 * Callers:
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C00035EC (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0003658 (VidSchiClearFlipDevice.c)
 *     VidSchiGetSchedulerStatus @ 0x1C0004BA0 (VidSchiGetSchedulerStatus.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C001B6DC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001B9C4 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C0076534 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiHandleControlEvent @ 0x1C00768E0 (VidSchiHandleControlEvent.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0077804 (VidSchiWaitFlushCompletion.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00779E4 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchResumeAdapter @ 0x1C00792D0 (VidSchResumeAdapter.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C007AA48 (VidSchiCleanupQueuedCommand.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  int v7; // r13d
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _VIDSCH_GLOBAL *i; // r14
  _QWORD v16[20]; // [rsp+38h] [rbp-69h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+108h] [rbp+67h] BYREF

  v4 = 0;
  v5 = a2;
  v7 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 13 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 16) )
      {
        v11 = (struct _KTHREAD *)*((_QWORD *)a1 + 17);
        if ( CurrentThread != v11 )
        {
          *((_BYTE *)a1 + 2508) |= 3u;
          if ( v11 )
          {
            do
            {
              Interval.QuadPart = -1000000LL;
              KeDelayExecutionThread(0, 0, &Interval);
            }
            while ( *((_QWORD *)a1 + 17) );
          }
        }
      }
    }
    v12 = KeGetCurrentThread();
    if ( v12 == *((struct _KTHREAD **)a1 + 16) || v12 == *((struct _KTHREAD **)a1 + 17) )
    {
      if ( v5 )
      {
        VidSchIsTDRPending((__int64)a1);
        if ( !VidSchIsTDRPending((__int64)a1) )
          VidSchiWaitForEmptyHwQueue(a1);
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 25);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 200);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice((__int64)i - 88);
        }
        VidSchResumeAdapter(a1);
        VidSchiCleanupQueuedCommand(a1);
        if ( VidSchIsTDRPending((__int64)a1) )
          VidSchiClearFlipDevice(a1, 0LL, 9);
        if ( *((_DWORD *)a1 + 55) != 2 )
          VidSchiHandleControlEvent((__int64)a1);
      }
    }
    else
    {
      if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 3 )
        VidSchResumeAdapter(v13);
      if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
      {
        v7 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v14, (__int64)a1, v5);
        if ( v7 >= 0 && (v5 & 1) != 0 )
        {
          if ( *((_DWORD *)a1 + 232) )
          {
            memset(v16, 0, sizeof(v16));
            LODWORD(v16[4]) |= 8u;
            LODWORD(v16[2]) = 1;
            v16[5] = (char *)a1 + 928;
            VidSchiWaitFlushCompletion(a1, (__int64)v16);
          }
          if ( *((_DWORD *)a1 + 224) )
          {
            memset(v16, 0, sizeof(v16));
            LODWORD(v16[4]) |= 8u;
            LODWORD(v16[2]) = 1;
            v16[5] = (char *)a1 + 896;
            VidSchiWaitFlushCompletion(a1, (__int64)v16);
          }
          if ( *((_DWORD *)a1 + 227) )
          {
            memset(v16, 0, sizeof(v16));
            LODWORD(v16[4]) |= 8u;
            LODWORD(v16[2]) = 3;
            v16[5] = (char *)a1 + 908;
            VidSchiWaitFlushCompletion(a1, (__int64)v16);
          }
          if ( v5 != 3 )
          {
            VidSchiClearFlipDevice(a1, 0LL, 9);
            VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 237, (_DWORD *)a1 + 227);
          }
        }
      }
    }
    LOBYTE(v4) = v5 == 13;
    _InterlockedOr((volatile signed __int32 *)a1 + 1331, v4);
    return (unsigned int)v7;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
