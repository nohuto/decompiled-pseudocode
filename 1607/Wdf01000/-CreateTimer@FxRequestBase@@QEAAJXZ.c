/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C000CE0C
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000D9D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x1C0074E30 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0016830 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequestTimer *v4; // rax
  FxRequestTimer *v5; // rbx
  unsigned int v6; // edx
  int v7; // ebp
  unsigned int v8; // edx
  void *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( this->m_Timer )
    return 0LL;
  v4 = (FxRequestTimer *)FxPoolAllocator(
                           m_Globals,
                           &m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           0x98uLL,
                           m_Globals->Tag,
                           Caller);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, sizeof(FxRequestTimer));
    v5->Timer.m_Timer.m_TimerContext = 0LL;
    v5->Timer.m_Timer.m_TimerCallback = 0LL;
    v5->Timer.m_Timer.m_Period = 0;
    v5->Timer.m_Timer.m_KernelExTimer = 0LL;
  }
  if ( !v5 )
    return 3221225626LL;
  v7 = MxTimer::Initialize(&v5->Timer, this, FxRequestBase::_TimerDPC, 0);
  if ( v7 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v5, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v5, v6);
    return 0LL;
  }
  WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x13u, WPP_FxRequestBase_cpp_Traceguids, this);
  FxRequestTimer::`scalar deleting destructor'(v5, v8);
  return (unsigned int)v7;
}
