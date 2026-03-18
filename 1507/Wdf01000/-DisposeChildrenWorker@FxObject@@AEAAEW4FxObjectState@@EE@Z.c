/*
 * XREFs of ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0004A80
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0015970 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007B988 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0015818 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C0015A18 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C007BAC4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        unsigned __int32 NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  unsigned __int16 m_ObjectFlags; // r8
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v11; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *v15; // r10
  const void *v16; // rcx
  KIRQL v17; // di
  _FX_DRIVER_GLOBALS *v18; // r10
  const void *v19; // rcx

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
    if ( CanDefer )
    {
      FxObject::QueueDeferredDisposeLocked(this, (FxObjectState)NewDeferedState);
    }
    else
    {
      if ( (m_ObjectFlags & 0x200) != 0 )
      {
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a2 = 0LL;
          WPP_IFR_SF_qqLL(
            m_Globals,
            5u,
            0x14u,
            0xAu,
            WPP_FxObject_hpp_Traceguids,
            this,
            _a2,
            this->m_ObjectState,
            NewDeferedState);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = NewDeferedState;
      }
      this->m_ObjectState = NewDeferedState;
    }
LABEL_26:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
    return 0;
  }
  p_m_ChildListHead = &this->m_ChildListHead;
  Flink = this->m_ChildListHead.Flink;
  if ( Flink != p_m_ChildListHead )
  {
    while ( !OldIrql || ((__int64)Flink[-3].Flink & 0x10) == 0 )
    {
      Flink = Flink->Flink;
      if ( Flink == p_m_ChildListHead )
        goto LABEL_3;
    }
    if ( CanDefer )
    {
      FxObject::QueueDeferredDisposeLocked(this, (FxObjectState)NewDeferedState);
    }
    else
    {
      if ( (m_ObjectFlags & 0x200) != 0 )
      {
        v15 = this->m_Globals;
        if ( v15->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v16 = 0LL;
          WPP_IFR_SF_qqLL(
            v15,
            5u,
            0x14u,
            0xAu,
            WPP_FxObject_hpp_Traceguids,
            this,
            v16,
            this->m_ObjectState,
            NewDeferedState);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = NewDeferedState;
      }
      this->m_ObjectState = NewDeferedState;
    }
    goto LABEL_26;
  }
LABEL_3:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  v11 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_4:
    if ( ((this->m_ObjectFlags & 0x800) == 0 || this->Dispose(this)) && (this->m_ObjectFlags & 0x400) != 0 )
      FxObject::CallCleanupCallbacks(this);
    return 1;
  }
  else
  {
    while ( FxObject::PerformEarlyDispose((FxObject *)&v11[-5].Blink) )
    {
      v11 = v11->Flink;
      if ( v11 == p_m_ChildListHead )
        goto LABEL_4;
    }
    v17 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    if ( CanDefer )
    {
      FxObject::QueueDeferredDisposeLocked(this, (FxObjectState)NewDeferedState);
    }
    else
    {
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v18 = this->m_Globals;
        if ( v18->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v19 = 0LL;
          WPP_IFR_SF_qqLL(
            v18,
            5u,
            0x14u,
            0xAu,
            WPP_FxObject_hpp_Traceguids,
            this,
            v19,
            this->m_ObjectState,
            NewDeferedState);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = NewDeferedState;
      }
      this->m_ObjectState = NewDeferedState;
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v17);
    return 0;
  }
}
