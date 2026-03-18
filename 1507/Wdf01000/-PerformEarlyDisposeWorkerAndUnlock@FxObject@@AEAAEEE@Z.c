/*
 * XREFs of ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005CD30
 * Callers:
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C0015A18 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0015970 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C007BAC4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformEarlyDisposeWorkerAndUnlock(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  KIRQL v5; // di
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  unsigned __int16 m_ObjectFlags; // ax

  v5 = OldIrql;
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 3u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      v5 = OldIrql;
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 3;
    }
  }
  this->m_ObjectState = 3;
  if ( !CanDefer )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, v5, CanDefer);
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v5) )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, v5, CanDefer);
  FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
  return 0;
}
