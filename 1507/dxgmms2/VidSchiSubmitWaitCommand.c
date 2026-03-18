/*
 * XREFs of VidSchiSubmitWaitCommand @ 0x1C001AED0
 * Callers:
 *     VidSchiSubmitQueueCommand @ 0x1C002E270 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001858 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00137C4 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     VidSchiRewindPacket @ 0x1C001A004 (VidSchiRewindPacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiSubmitWaitCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r14
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1872), &LockHandle);
  if ( (*(_BYTE *)(v5 + 2508) & 1) != 0
    || *(_DWORD *)(v5 + 2480)
    || *(_BYTE *)(v4 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 168), 0, 0) )
  {
    v7 = *((_DWORD *)a1 + 64);
    if ( (v7 & 1) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (v7 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(a1, 1);
      else
        VidSchiUnwaitWaitQueuePacket(a1, v6);
    }
  }
  if ( (*((_DWORD *)a1 + 64) & 1) != 0 )
  {
    v3 = 1;
  }
  else
  {
    VidSchiRewindPacket((__int64)a1, 1LL, 1, 1u);
    VidSchiUpdateContextStatus(v1, (_QWORD *)4, (__int64 *)0x4B41);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
    VidSchiProcessCompletedQueuePacket(a1);
}
