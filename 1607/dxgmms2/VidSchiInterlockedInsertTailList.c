/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C0007050
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006320 (VidSchWaitForSingleSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E270 (VidSchiFreeQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000E6D8 (VidSchiCreateContextInternal.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00209B0 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0024584 (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0040484 (VidSchiCreateDeviceInternal.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiCreateNode @ 0x1C006B9A8 (VidSchiCreateNode.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
