/*
 * XREFs of ?Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z @ 0x1C002B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0074BC8 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 */

void __fastcall FxCallbackSpinLock::Initialize(FxCallbackSpinLock *this, FxObject *ParentObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxVerifierLock *v5; // rax
  FxVerifierLock *v6; // rax
  FxVerifierLock *v7; // rbx
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  this->m_Verifier = 0LL;
  if ( m_Globals->FxVerifierLock )
  {
    v5 = (FxVerifierLock *)FxPoolAllocator(
                             m_Globals,
                             (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0xB0uLL,
                             m_Globals->Tag,
                             Caller);
    if ( v5 )
    {
      FxVerifierLock::FxVerifierLock(v5, m_Globals, ParentObject, 0);
      v7 = v6;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      if ( v7->m_UseMutex )
      {
        v7->m_Mutex.m_Lock.Owner = 0LL;
        v7->m_Mutex.m_Lock.Contention = 0;
        v7->m_Mutex.m_Lock.Count = 1;
        KeInitializeEvent(&v7->m_Mutex.m_Lock.Event, SynchronizationEvent, 0);
        v7->m_Mutex.m_DbgFlagIsInitialized = 1;
      }
      this->m_Verifier = v7;
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_hpp_Traceguids_0, -1073741670);
    }
  }
}
