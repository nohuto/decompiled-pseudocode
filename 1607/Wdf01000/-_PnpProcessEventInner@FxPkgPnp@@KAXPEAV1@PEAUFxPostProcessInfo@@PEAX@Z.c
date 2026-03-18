/*
 * XREFs of ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00268C0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxPkgPnp::_PnpProcessEventInner(FxPkgPnp *This, FxPostProcessInfo *Info, void *WorkerContext)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rbx

  p_m_StateMachineLock = &This->m_PnpMachine.m_StateMachineLock;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_StateMachineLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_StateMachineLock->m_OwningThread = KeGetCurrentThread();
  FxPkgPnp::PnpProcessEventInner(This, Info);
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
