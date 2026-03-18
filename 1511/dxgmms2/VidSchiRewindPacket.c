/*
 * XREFs of VidSchiRewindPacket @ 0x1C000F53C
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCompleteRewindPacket @ 0x1C000E330 (VidSchiCompleteRewindPacket.c)
 */

void __fastcall VidSchiRewindPacket(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v7; // edi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  v7 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
  if ( !(_DWORD)a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1824), &LockHandle);
  if ( (*(_DWORD *)(v4 + 176) & 4) == 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v10[3] = v9;
    v10[4] = v4;
    v10[5] = *(unsigned int *)(a1 + 96);
    WdLogEvent5_WdEvent(v10);
    *(_DWORD *)(v4 + 176) |= 4u;
    *(_QWORD *)(v4 + 656) = a1;
  }
  if ( a3 )
    VidSchiCompleteRewindPacket(v4, a4);
  if ( !v7 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
