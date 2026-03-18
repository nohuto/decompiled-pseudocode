/*
 * XREFs of ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0015F90
 * Callers:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0020744 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005CE34 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 */

void __fastcall FxObject::DeleteEarlyDisposedObject(FxObject *this)
{
  const void *_a2; // rdi
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v5; // rax
  FxObject *p_Blink; // rcx
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v8; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v10; // r14
  _FX_DRIVER_GLOBALS *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  this->m_ObjectFlags |= 4u;
  _a2 = 0LL;
  if ( !this->m_ParentObject )
    goto LABEL_2;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v8 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ParentObject = this->m_ParentObject;
  v10 = v8;
  if ( !m_ParentObject )
  {
LABEL_21:
    KeReleaseSpinLock(p_m_Lock, v10);
LABEL_2:
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 10;
    }
    this->m_ObjectState = 10;
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
    {
      Flink = p_m_ChildListHead->Flink;
      v5 = p_m_ChildListHead->Flink->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v5->Blink != Flink )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v5;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v5->Blink = p_m_ChildListHead;
      p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
      p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
      FxObject::ParentDeleteEvent(p_Blink);
    }
    this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
    return;
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_21;
  }
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    v11 = this->m_Globals;
    if ( v11->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(v11, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 8u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 8;
  }
  this->m_ObjectState = 8;
  KeReleaseSpinLock(p_m_Lock, v10);
}
