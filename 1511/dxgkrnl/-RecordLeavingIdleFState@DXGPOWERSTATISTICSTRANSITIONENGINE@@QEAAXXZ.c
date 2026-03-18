/*
 * XREFs of ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001EE30
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00189B8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0019700 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C001EF0C (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState(KSPIN_LOCK *this)
{
  int v2; // eax
  unsigned int v3; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  v2 = *((_DWORD *)this + 23);
  *((_BYTE *)this + 88) = 0;
  if ( v2 == 1 && (v3 = *((_DWORD *)this + 24), v3 != *((_DWORD *)this + 15))
    || v2 == 2 && (v3 = *((_DWORD *)this + 24), v3 > *((_DWORD *)this + 15))
    || v2 == 3 && (v3 = *((_DWORD *)this + 24), v3 < *((_DWORD *)this + 15)) )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v3);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
