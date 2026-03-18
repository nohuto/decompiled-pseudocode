/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0077124
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x1C006E150 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C007702C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxRequestTimer *v3; // rax
  FxRequestTimer *v4; // rbx
  __int64 v6; // rdx
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( !this->m_Timer )
  {
    v3 = (FxRequestTimer *)FxPoolAllocator(
                             m_Globals,
                             (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0x98uLL,
                             m_Globals->Tag,
                             Caller);
    v4 = v3;
    if ( v3 )
    {
      v3->Timer.m_Timer.m_TimerContext = 0LL;
      v3->Timer.m_Timer.m_TimerCallback = 0LL;
      v3->Timer.m_Timer.m_Period = 0;
      v3->Timer.m_Timer.m_KernelExTimer = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
      return 3221225626LL;
    v4->Timer.m_Timer.m_Period = 0;
    v4->Timer.m_Timer.m_TimerCallback = FxRequestBase::_TimerDPC;
    v4->Timer.m_Timer.m_TimerContext = this;
    KeInitializeTimerEx(&v4->Timer.m_Timer.KernelTimer, NotificationTimer);
    KeInitializeDpc(&v4->Timer.m_Timer.TimerDpc, v4->Timer.m_Timer.m_TimerCallback, v4->Timer.m_Timer.m_TimerContext);
    v4->Timer.m_Timer.m_IsExtTimer = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v4, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v4, v6);
  }
  return 0LL;
}
