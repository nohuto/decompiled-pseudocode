/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0
 * Callers:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000A340 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00209B0 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0040D44 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, __int64 **a2, _DWORD *a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  if ( *a2 != (__int64 *)a2 )
  {
    v5 = *a2;
    v6 = **a2;
    if ( (__int64 **)(*a2)[1] != a2 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *a2 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
