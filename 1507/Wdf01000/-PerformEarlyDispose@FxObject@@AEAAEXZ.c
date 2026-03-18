/*
 * XREFs of ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C0015A18
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0004A80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0015970 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005CD30 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 */

char __fastcall FxObject::PerformEarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // r14
  char v3; // di
  KIRQL v4; // al
  unsigned int _a3; // ecx
  KIRQL v6; // bp
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v11; // rax

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a3 = this->m_ObjectState;
  v6 = v4;
  if ( _a3 == 1 )
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      v11 = 0LL;
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v11, 1u, 3u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 3;
    }
    this->m_ObjectState = 3;
    return FxObject::PerformDisposingDisposeChildrenLocked(this, v6, 0);
  }
  if ( this->m_ObjectState >= 4u )
  {
    if ( _a3 == 5 )
      return FxObject::PerformDisposingDisposeChildrenLocked(this, v6, 0);
    if ( _a3 == 7 )
      return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v4, 0);
  }
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    _a2 = 0LL;
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, 4u);
  }
  KeReleaseSpinLock(p_m_Lock, v6);
  return v3;
}
