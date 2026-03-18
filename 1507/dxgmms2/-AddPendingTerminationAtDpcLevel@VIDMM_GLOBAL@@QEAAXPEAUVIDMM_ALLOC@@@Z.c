/*
 * XREFs of ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0003A30
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0003AA4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rbx
  VIDMM_GLOBAL **v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 5101, &LockHandle);
  v4 = (struct VIDMM_ALLOC *)((char *)a2 + 200);
  v5 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5103);
  *(_QWORD *)v4 = (char *)this + 40816;
  *((_QWORD *)v4 + 1) = v5;
  if ( *v5 != (VIDMM_GLOBAL *)((char *)this + 40816) )
    __fastfail(3u);
  *v5 = v4;
  *((_QWORD *)this + 5103) = v4;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*((PRKEVENT *)this + 5100), 0, 0);
}
