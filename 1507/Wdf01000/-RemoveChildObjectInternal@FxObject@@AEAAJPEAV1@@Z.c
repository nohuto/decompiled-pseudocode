/*
 * XREFs of ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005CE34
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0015EE0 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0015F90 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 */

__int64 __fastcall FxObject::RemoveChildObjectInternal(FxObject *this, FxObject *ChildObject)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // si
  unsigned __int16 m_ObjectState; // ax
  const void *_a2; // rcx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  if ( m_ObjectState == 1 )
  {
    p_m_ChildEntry = &ChildObject->m_ChildEntry;
    Flink = ChildObject->m_ChildEntry.Flink;
    Blink = ChildObject->m_ChildEntry.Blink;
    if ( Flink->Blink != &ChildObject->m_ChildEntry || Blink->Flink != p_m_ChildEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    ChildObject->m_ChildEntry.Blink = &ChildObject->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(p_m_Lock, v5);
    return 0LL;
  }
  else
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      _a2 = 0LL;
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, m_ObjectState, 2u);
    }
    KeReleaseSpinLock(p_m_Lock, v5);
    return 3221225558LL;
  }
}
