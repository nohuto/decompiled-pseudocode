/*
 * XREFs of ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C001D0BC
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0066104 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000C1C0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003E158 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 */

void __fastcall FxObject::DeleteEarlyDisposedObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v5; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  this->m_ObjectFlags |= 4u;
  if ( this->m_ParentObject )
  {
    p_m_Lock = &this->m_SpinLock.m_Lock;
    v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    m_ParentObject = this->m_ParentObject;
    v5 = v3;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, 8u);
        KeReleaseSpinLock(p_m_Lock, v5);
        return;
      }
      this->m_ParentObject = 0LL;
    }
    KeReleaseSpinLock(p_m_Lock, v5);
  }
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xAu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 10;
  }
  this->m_ObjectState = 10;
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
