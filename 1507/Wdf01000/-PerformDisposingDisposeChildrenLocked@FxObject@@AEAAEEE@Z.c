/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0015970
 * Callers:
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C0015A18 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0015EE0 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005CD30 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007B988 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0004A80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005CBFC (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  const void *v3; // rdi
  unsigned __int16 m_ObjectFlags; // cx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v11; // rcx

  v3 = 0LL;
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 4u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 4;
  }
  this->m_ObjectState = 4;
  if ( !FxObject::DisposeChildrenWorker(this, 5u, OldIrql, CanDefer) )
    return 0;
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x104) == 0x104 )
  {
    FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
  }
  else
  {
    if ( (m_ObjectFlags & 0x200) != 0 )
    {
      v11 = this->m_Globals;
      if ( v11->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(v11, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v3, this->m_ObjectState, 2u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 2;
    }
    this->m_ObjectState = 2;
  }
  return 1;
}
