/*
 * XREFs of ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013124
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000E204 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0010900 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00130A0 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0016680 (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84 (VidSchiUnwaitWaitQueuePacket.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 */

void __fastcall VidSchiUnblockUnorderedWaitQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1, unsigned __int8 a2)
{
  __int64 v2; // r11
  _QWORD *v3; // rax
  __int64 v4; // r9
  _QWORD *v6; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8

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
  *(_QWORD *)(v2 + 96) = v3;
  *((_DWORD *)a1 + 64) &= ~4u;
  --*(_DWORD *)(v2 + 36);
  --*(_DWORD *)(*((_QWORD *)a1 + 10) + 772LL);
  --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 1148LL);
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 32LL);
  --*(_DWORD *)(v9 + 940);
  if ( a2 )
  {
    VidSchiUnwaitWaitQueuePacket((__int64)a1, a2, (__int64)a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v10, &EventPerformanceWarning, v11, 15LL);
    }
    _InterlockedIncrement(&gulSyncObjTimeouted);
  }
}
