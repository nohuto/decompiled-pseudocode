/*
 * XREFs of ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C00157EC
 * Callers:
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0010B40 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C007630C (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::IsDisposed(FxObject *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // al
  bool v6; // bl

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn || !m_Globals->FxVerifierHandle )
    return 1;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v6 = this->m_ObjectState != 1;
  KeReleaseSpinLock(p_m_Lock, v5);
  return v6;
}
