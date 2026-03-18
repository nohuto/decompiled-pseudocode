/*
 * XREFs of ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035650
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0038540 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchThreadThunk(char *Parameter, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int8 v5; // al
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  FxVerifierLock *v9; // rcx
  FxVerifierLock *v10; // rcx
  FxVerifierLock *v11; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Parameter + 2);
  if ( v4->FxVerboseOn )
    WPP_IFR_SF_(v4, 5u, 0xDu, 0x68u, WPP_FxIoQueue_cpp_Traceguids);
  if ( Parameter[24] < 0 && (v9 = (FxVerifierLock *)*((_QWORD *)Parameter - 5)) != 0LL )
  {
    FxVerifierLock::Lock(v9, &PreviousIrql, a3);
    v5 = PreviousIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 14);
    PreviousIrql = v5;
  }
  Parameter[866] = 0;
  FxIoQueue::DispatchEvents((FxIoQueue *)Parameter, v5, 0LL, v6);
  if ( Parameter[24] < 0 && (v10 = (FxVerifierLock *)*((_QWORD *)Parameter - 5)) != 0LL )
    FxVerifierLock::Lock(v10, &PreviousIrql, v7);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 14);
  if ( Parameter[142]
    || !Parameter[866]
    || !FxSystemWorkItem::EnqueueWorker(
          *((FxSystemWorkItem **)Parameter + 107),
          FxIoQueue::_DeferredDispatchThreadThunk,
          Parameter,
          1u) )
  {
    *(_WORD *)(Parameter + 865) = 0;
  }
  if ( Parameter[24] < 0 && (v11 = (FxVerifierLock *)*((_QWORD *)Parameter - 5)) != 0LL )
    FxVerifierLock::Unlock(v11, PreviousIrql, v8);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 14, PreviousIrql);
}
