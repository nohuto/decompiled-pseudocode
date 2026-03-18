/*
 * XREFs of ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00137C4
 * Callers:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0003770 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0007F70 (VidSchiRundownUnorderedWaiterContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C001AED0 (VidSchiSubmitWaitCommand.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C001B0A8 (VidSchiUnblockUnorderedWaiter.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiUnblockUnorderedWaitQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1, char a2)
{
  __int64 v2; // r11
  _QWORD *v3; // rax
  __int64 v4; // r9
  _QWORD *v6; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8

  v2 = *((_QWORD *)a1 + 33);
  v3 = (_QWORD *)((char *)a1 + 272);
  v4 = *((_QWORD *)a1 + 34);
  v6 = (_QWORD *)*((_QWORD *)a1 + 35);
  if ( *(_QWORD **)(v4 + 8) != v3 || (_QWORD *)*v6 != v3 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v8 = *(_QWORD **)(v2 + 96);
  *v3 = v2 + 88;
  v3[1] = v8;
  if ( *v8 != v2 + 88 )
    __fastfail(3u);
  *v8 = v3;
  v9 = 0xFFFFFFFFLL;
  *(_QWORD *)(v2 + 96) = v3;
  *((_DWORD *)a1 + 64) &= ~4u;
  --*(_DWORD *)(v2 + 36);
  --*(_DWORD *)(*((_QWORD *)a1 + 10) + 772LL);
  --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 1016LL);
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 32LL);
  --*(_DWORD *)(v10 + 932);
  if ( a2 )
  {
    LOBYTE(v9) = a2;
    VidSchiUnwaitWaitQueuePacket(a1, v9);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v11, &EventPerformanceWarning, v12, 15);
    }
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
}
