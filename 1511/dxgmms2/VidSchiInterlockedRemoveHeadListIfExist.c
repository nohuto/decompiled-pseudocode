/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00392E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitPagingCommand @ 0x1C003AA00 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchiAllocateDmaPacket @ 0x1C005F4A8 (VidSchiAllocateDmaPacket.c)
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
