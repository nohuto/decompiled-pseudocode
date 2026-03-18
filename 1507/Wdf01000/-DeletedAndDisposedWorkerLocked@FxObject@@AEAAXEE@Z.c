/*
 * XREFs of ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005CBFC
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0015970 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007B988 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::DeletedAndDisposedWorkerLocked(FxObject *this, KIRQL OldIrql, unsigned __int8 Unlock)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rax
  FxObject *p_Blink; // rcx

  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xAu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 10;
  }
  this->m_ObjectState = 10;
  if ( Unlock )
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  p_m_ChildListHead = &this->m_ChildListHead;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    Flink = p_m_ChildListHead->Flink;
    v10 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v10->Blink != Flink )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v10;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v10->Blink = p_m_ChildListHead;
    p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
    p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
    FxObject::ParentDeleteEvent(p_Blink);
  }
  this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
