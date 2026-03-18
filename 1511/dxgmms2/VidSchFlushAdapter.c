/*
 * XREFs of VidSchFlushAdapter @ 0x1C008B2F0
 * Callers:
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C000AD90 (VidSchiGetSchedulerStatus.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00106DC (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0010990 (VidSchiClearFlipDevice.c)
 *     VidSchIsWorkerThread @ 0x1C0012180 (VidSchIsWorkerThread.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0021EE0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0022098 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C003C6BC (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x1C005FDD0 (VidSchResumeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C006182C (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0061A5C (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C008A40C (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C008CD18 (VidSchiCleanupQueuedCommand.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  int v7; // r13d
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDSCH_GLOBAL *i; // r14
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[20]; // [rsp+38h] [rbp-69h] BYREF

  v4 = 0;
  v5 = a2;
  v7 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 16) && CurrentThread != *((struct _KTHREAD **)a1 + 17) )
        *((_BYTE *)a1 + 2468) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( v5 )
      {
        VidSchIsTDRPending((__int64)a1);
        if ( !VidSchIsTDRPending((__int64)a1) )
          VidSchiWaitForEmptyHwQueue((__int64)a1);
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 26);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 208);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice((__int64)i - 88);
        }
        VidSchResumeAdapter(a1);
        VidSchiCleanupQueuedCommand(a1);
        if ( VidSchIsTDRPending((__int64)a1) )
          VidSchiClearFlipDevice(a1, 0LL, 9);
        if ( *((_DWORD *)a1 + 57) != 2 )
          VidSchiHandleControlEvent((__int64)a1);
      }
    }
    else
    {
      if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 3 )
        VidSchResumeAdapter(v12);
      if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
      {
        v7 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v13, (__int64)a1, v5);
        if ( v7 >= 0 && (v5 & 1) != 0 )
        {
          if ( *((_DWORD *)a1 + 234) )
          {
            memset(v14, 0, sizeof(v14));
            LODWORD(v14[4]) |= 4u;
            LODWORD(v14[2]) = 1;
            v14[5] = (char *)a1 + 936;
            VidSchiWaitFlushCompletion((__int64)a1, (__int64)v14, 0x1Eu);
          }
          if ( *((_DWORD *)a1 + 226) )
          {
            memset(v14, 0, sizeof(v14));
            LODWORD(v14[4]) |= 4u;
            LODWORD(v14[2]) = 1;
            v14[5] = (char *)a1 + 904;
            VidSchiWaitFlushCompletion((__int64)a1, (__int64)v14, 0x1Au);
          }
          if ( *((_DWORD *)a1 + 229) )
          {
            memset(v14, 0, sizeof(v14));
            LODWORD(v14[4]) |= 4u;
            LODWORD(v14[2]) = 3;
            v14[5] = (char *)a1 + 916;
            VidSchiWaitFlushCompletion((__int64)a1, (__int64)v14, 0x19u);
          }
          if ( v5 != 5 )
          {
            VidSchiClearFlipDevice(a1, 0LL, 9);
            VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 231, (_DWORD *)a1 + 229);
          }
        }
      }
    }
    LOBYTE(v4) = v5 == 15;
    _InterlockedOr((volatile signed __int32 *)a1 + 1319, v4);
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
