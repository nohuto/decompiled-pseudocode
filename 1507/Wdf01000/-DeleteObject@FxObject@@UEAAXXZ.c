/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00023C0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0010BF0 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C005BA6C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C00767F0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C00A1DC0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0015818 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C0015A18 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005CBFC (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005CE34 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C007BAC4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  KIRQL v2; // al
  KIRQL v3; // bp
  unsigned int _a3; // ecx
  FxObject *v5; // rdi
  const void *v6; // r13
  KIRQL v7; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v9; // r12
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  bool v14; // zf
  FxObject *v15; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v17; // rsi
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rax
  FxObject *p_Blink; // rcx
  const void *_a2; // r13
  FxObject *m_ParentObject; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v24; // r13
  const void *v25; // rcx
  _FX_DRIVER_GLOBALS *v26; // rcx
  _FX_DRIVER_GLOBALS *v27; // r10
  const void *v28; // rcx
  KIRQL v29; // dl
  KIRQL v30; // di
  _FX_DRIVER_GLOBALS *v31; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 4u;
  v3 = v2;
  _a3 = this->m_ObjectState;
  if ( _a3 != 1 )
  {
    if ( _a3 != 2 )
    {
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        if ( this->m_ObjectSize )
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, 3u);
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
      return;
    }
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        if ( (this->m_ObjectFlags & 0x200) != 0 )
        {
          m_Globals = this->m_Globals;
          if ( m_Globals->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v24 = 0LL;
            WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v24, this->m_ObjectState, 8u);
          }
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 8;
        }
        this->m_ObjectState = 8;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
        return;
      }
      this->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(this, v3, 1u);
    return;
  }
  v5 = this->m_ParentObject;
  v6 = 0LL;
  if ( v5 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&v5->m_SpinLock.m_Lock);
    m_ObjectState = v5->m_ObjectState;
    v9 = v7;
    if ( m_ObjectState != 1 )
    {
      if ( (v5->m_ObjectFlags & 0x200) != 0 )
      {
        if ( v5->m_ObjectSize )
          v25 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v25 = 0LL;
        WPP_IFR_SF_qqLL(v5->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, v5, v25, m_ObjectState, 2u);
      }
      KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v9);
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v26 = this->m_Globals;
        if ( v26->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqLL(v26, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v6, this->m_ObjectState, 7u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 7;
      }
      this->m_ObjectState = 7;
      goto LABEL_76;
    }
    Flink = this->m_ChildEntry.Flink;
    p_m_ChildEntry = &this->m_ChildEntry;
    Blink = this->m_ChildEntry.Blink;
    if ( Flink->Blink != &this->m_ChildEntry || Blink->Flink != p_m_ChildEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    this->m_ChildEntry.Blink = &this->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v9);
    this->m_ParentObject = 0LL;
  }
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v3 )
    goto LABEL_75;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v27 = this->m_Globals;
    if ( v27->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_qqLL(v27, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v28, this->m_ObjectState, 9u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 9;
  }
  v14 = (this->m_ObjectFlags & 0x20) == 0;
  this->m_ObjectState = 9;
  if ( !v14 )
  {
    if ( v3 )
    {
LABEL_75:
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
LABEL_76:
      v29 = v3;
LABEL_77:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v29);
      return;
    }
  }
  v15 = (FxObject *)this->m_ChildListHead.Flink;
  p_m_ChildListHead = &this->m_ChildListHead;
  if ( v15 != (FxObject *)&this->m_ChildListHead )
  {
    while ( !v3 || (v15[-1].m_SpinLock.m_Lock & 0x10) == 0 )
    {
      v15 = (FxObject *)v15->__vftable;
      if ( v15 == (FxObject *)p_m_ChildListHead )
        goto LABEL_13;
    }
    goto LABEL_75;
  }
LABEL_13:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
  v17 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    while ( FxObject::PerformEarlyDispose((FxObject *)&v17[-5].Blink) )
    {
      v17 = v17->Flink;
      if ( v17 == p_m_ChildListHead )
        goto LABEL_14;
    }
    v30 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    v29 = v30;
    goto LABEL_77;
  }
LABEL_14:
  if ( ((this->m_ObjectFlags & 0x800) == 0 || this->Dispose(this)) && (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    v31 = this->m_Globals;
    if ( v31->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(v31, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v6, this->m_ObjectState, 0xAu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 10;
  }
  this->m_ObjectState = 10;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    v18 = p_m_ChildListHead->Flink;
    v19 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v19->Blink != v18 )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v19;
    p_Blink = (FxObject *)&v18[-5].Blink;
    v19->Blink = p_m_ChildListHead;
    p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
    p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
    FxObject::ParentDeleteEvent(p_Blink);
  }
  this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
