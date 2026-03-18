/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C0007F60
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C000F9D0 (VidSchiCreateContextInternal.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0020DEC (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0038994 (VidSchiCreateDeviceInternal.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchiCreateNode @ 0x1C006396C (VidSchiCreateNode.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  *a3 = a2;
  a3[1] = v7;
  if ( *v7 != a2 )
    __fastfail(3u);
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
