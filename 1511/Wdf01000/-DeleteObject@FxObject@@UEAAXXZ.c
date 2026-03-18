/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008CD0
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000BDA0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C001FF60 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0054F8C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C006B250 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C008C620 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0009130 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0009210 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0023300 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0023380 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00569E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0056A54 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0056AC8 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006FEAC (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  KIRQL v2; // al
  KIRQL v3; // bp
  int m_ObjectState; // eax
  const void *v5; // r12
  FxObject *m_ParentObject; // rdi
  KIRQL v7; // r15
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  bool v12; // zf
  FxObject *v13; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v15; // rsi
  _LIST_ENTRY **p_Blink; // rbp
  KIRQL v17; // al
  unsigned int _a3; // ecx
  KIRQL v19; // r13
  __int16 v20; // cx
  unsigned __int8 v21; // al
  FxObject *v22; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  KIRQL v25; // dl
  _FX_DRIVER_GLOBALS *v26; // r10
  const void *v27; // rax
  _FX_DRIVER_GLOBALS *v28; // rcx
  const void *v29; // rax
  _FX_DRIVER_GLOBALS *v30; // r10
  const void *v31; // rcx
  KIRQL v32; // di
  _FX_DRIVER_GLOBALS *v33; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 4u;
  v3 = v2;
  m_ObjectState = this->m_ObjectState;
  if ( m_ObjectState == 1 )
  {
    v5 = 0LL;
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&m_ParentObject->m_SpinLock.m_Lock);
      if ( m_ParentObject->m_ObjectState != 1 )
      {
        FxObject::TraceDroppedEvent(m_ParentObject, FxObjectDroppedEventRemoveChildObjectInternal);
        KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v7);
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
        return;
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
      KeReleaseSpinLock(&m_ParentObject->m_SpinLock.m_Lock, v7);
      this->m_ParentObject = 0LL;
    }
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v3 )
    {
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
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
          WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 9u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 9;
      }
      v12 = (this->m_ObjectFlags & 0x20) == 0;
      this->m_ObjectState = 9;
      if ( !v12 && v3 )
      {
LABEL_54:
        FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
        v25 = v3;
LABEL_55:
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v25);
        return;
      }
      v13 = (FxObject *)this->m_ChildListHead.Flink;
      p_m_ChildListHead = &this->m_ChildListHead;
      if ( v13 != (FxObject *)&this->m_ChildListHead )
      {
        while ( !v3 || (v13[-1].m_SpinLock.m_Lock & 0x10) == 0 )
        {
          v13 = (FxObject *)v13->__vftable;
          if ( v13 == (FxObject *)p_m_ChildListHead )
            goto LABEL_13;
        }
        goto LABEL_54;
      }
LABEL_13:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
      v15 = p_m_ChildListHead->Flink;
      if ( p_m_ChildListHead->Flink != p_m_ChildListHead )
      {
        while ( 1 )
        {
          p_Blink = &v15[-5].Blink;
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v15[-1]);
          _a3 = WORD1(v15[-3].Flink);
          v19 = v17;
          if ( _a3 != 1 )
          {
            switch ( WORD1(v15[-3].Flink) )
            {
              case 5:
                v21 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v15[-5].Blink, v17, 0);
                goto LABEL_33;
              case 7:
                v21 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v15[-5].Blink, v17, 0);
                goto LABEL_33;
              default:
                FxObject::TraceDroppedEvent((FxObject *)&v15[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
                KeReleaseSpinLock((PKSPIN_LOCK)p_Blink + 7, v19);
                goto LABEL_34;
            }
          }
          if ( ((_WORD)p_Blink[3] & 0x200) != 0 )
          {
            v26 = (_FX_DRIVER_GLOBALS *)p_Blink[2];
            if ( v26->FxVerboseOn )
            {
              if ( *((_WORD *)p_Blink + 5) )
                v27 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v27 = 0LL;
              WPP_IFR_SF_qqLL(v26, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v15[-5].Blink, v27, _a3, 3u);
            }
            if ( *((char *)p_Blink + 24) < 0 )
              *((_BYTE *)p_Blink + _InterlockedIncrement((volatile signed __int32 *)&v15[-5]) - 16) = 3;
          }
          *((_WORD *)p_Blink + 13) = 3;
          if ( ((_WORD)p_Blink[3] & 0x200) != 0 )
          {
            v28 = (_FX_DRIVER_GLOBALS *)p_Blink[2];
            if ( v28->FxVerboseOn )
            {
              if ( *((_WORD *)p_Blink + 5) )
                v29 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v29 = 0LL;
              WPP_IFR_SF_qqLL(v28, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v15[-5].Blink, v29, 3u, 4u);
            }
            if ( *((char *)p_Blink + 24) < 0 )
              *((_BYTE *)p_Blink + _InterlockedIncrement((volatile signed __int32 *)&v15[-5]) - 16) = 4;
          }
          *((_WORD *)p_Blink + 13) = 4;
          if ( FxObject::DisposeChildrenWorker((FxObject *)&v15[-5].Blink, FxObjectStateDeferedDisposing, v19, 0) )
          {
            v20 = *((_WORD *)p_Blink + 12);
            if ( (v20 & 0x104) == 0x104 )
            {
              FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v15[-5].Blink, v19, 0);
            }
            else
            {
              if ( (v20 & 0x200) != 0 )
              {
                v30 = (_FX_DRIVER_GLOBALS *)p_Blink[2];
                if ( v30->FxVerboseOn )
                {
                  if ( *((_WORD *)p_Blink + 5) )
                    v31 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v31 = 0LL;
                  WPP_IFR_SF_qqLL(
                    v30,
                    5u,
                    0x14u,
                    0xAu,
                    WPP_FxObject_hpp_Traceguids,
                    &v15[-5].Blink,
                    v31,
                    *((unsigned __int16 *)p_Blink + 13),
                    2u);
                }
                if ( *((char *)p_Blink + 24) < 0 )
                  *((_BYTE *)p_Blink + _InterlockedIncrement((volatile signed __int32 *)&v15[-5]) - 16) = 2;
              }
              *((_WORD *)p_Blink + 13) = 2;
            }
            v21 = 1;
          }
          else
          {
            v21 = 0;
          }
LABEL_33:
          if ( !v21 )
            break;
LABEL_34:
          v15 = v15->Flink;
          if ( v15 == p_m_ChildListHead )
            goto LABEL_14;
        }
        v32 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
        FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
        v25 = v32;
        goto LABEL_55;
      }
LABEL_14:
      if ( ((this->m_ObjectFlags & 0x800) == 0 || this->Dispose(this)) && (this->m_ObjectFlags & 0x400) != 0 )
        FxObject::CallCleanupCallbacks(this);
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v33 = this->m_Globals;
        if ( v33->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqLL(v33, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v5, this->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 10;
      }
      this->m_ObjectState = 10;
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
    }
  }
  else
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(this, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
      return;
    }
    v22 = this->m_ParentObject;
    if ( v22 )
    {
      if ( FxObject::RemoveChildObjectInternal(v22, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v3);
        return;
      }
      this->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(this, v3, 1u);
  }
}
