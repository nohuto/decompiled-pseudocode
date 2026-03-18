/*
 * XREFs of ?ProcessFirstFrameTimer@DXGADAPTER@@QEAAXXZ @ 0x1C001A328
 * Callers:
 *     ?DxgkpFirstFrameTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00193C0 (-DxgkpFirstFrameTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C001F020 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::ProcessFirstFrameTimer(KSPIN_LOCK *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  KSPIN_LOCK v4; // rax
  KSPIN_LOCK v5; // rsi
  struct _KLOCK_QUEUE_HANDLE v6; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 387, &LockHandle);
  v2 = 0;
  for ( *((_BYTE *)this + 3104) = 0; v2 < *((_DWORD *)this + 730); ++v2 )
  {
    v3 = 248LL * v2;
    v4 = this[364];
    if ( *(_BYTE *)(v4 + v3 + 240) )
    {
      *(_BYTE *)(v4 + v3 + 240) = 0;
      v5 = v3 + this[364];
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 160), &v6);
      if ( *(_BYTE *)(v5 + 224) != 1 && *(_QWORD *)(v5 + 168) > *(_QWORD *)(v5 + 176) )
        DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136), 0);
      KeReleaseInStackQueuedSpinLock(&v6);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
