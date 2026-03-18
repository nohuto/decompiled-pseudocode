/*
 * XREFs of ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007B988
 * Callers:
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0077AB4 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0004A80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0015970 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0015D30 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005CBFC (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

void __fastcall FxObject::DeferredDisposeWorkItem(FxObject *this)
{
  const void *_a2; // rdi
  KIRQL v3; // al
  KIRQL v4; // bp
  bool v5; // si
  unsigned int v6; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  _a2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v4 = v3;
  if ( this->m_ObjectState == 5 )
  {
    FxObject::PerformDisposingDisposeChildrenLocked(this, v3, 0);
  }
  else if ( this->m_ObjectState == 6 )
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, 6u, 9u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 9;
    }
    this->m_ObjectState = 9;
    FxObject::DisposeChildrenWorker(this, 6u, v4, 0);
    FxObject::DeletedAndDisposedWorkerLocked(this, v4, 0);
  }
  else
  {
    v5 = this->m_ObjectState == 11;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
    if ( v5 )
      FxObject::ProcessDestroy(this, v6);
  }
}
