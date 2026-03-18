/*
 * XREFs of ?ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C001ED84
 * Callers:
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C0126360 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 * Callees:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C001F020 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateFloor(KSPIN_LOCK *this, unsigned int a2)
{
  bool v4; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 < *(_DWORD *)this[2] || a2 == -1 )
  {
    KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
    if ( a2 == -1 )
    {
      *((_DWORD *)this + 23) = 0;
    }
    else
    {
      v4 = *((_BYTE *)this + 88) == 1;
      *((_DWORD *)this + 23) = 3;
      *((_DWORD *)this + 24) = a2;
      if ( !v4 && *((_DWORD *)this + 15) > a2 )
        DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, a2);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
