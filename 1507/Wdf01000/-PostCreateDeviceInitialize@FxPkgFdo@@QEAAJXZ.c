/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00139FC
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000EBA4 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C001CCC4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C00A374C (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 */

int __fastcall FxPkgFdo::PostCreateDeviceInitialize(FxPkgFdo *this)
{
  int result; // eax
  FxIoTarget **p_m_DefaultTarget; // rsi
  int Target; // edi
  FxIoTarget *v5; // rax
  unsigned int RefCount; // edx
  FxTagTracker *v7; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  FxIoTargetSelf **p_m_SelfTarget; // rsi
  FxIoTargetSelf *v10; // rcx
  unsigned int v11; // edx
  FxTagTracker *m_TargetFileObject; // rcx

  result = FxPkgPnp::PostCreateDeviceInitialize(this);
  if ( result >= 0 )
  {
    if ( !this->m_Globals->FxDsfOn || (result = FxPkgFdo::QueryForDsfInterface(this), result >= 0) )
    {
      p_m_DefaultTarget = &this->m_DefaultTarget;
      Target = FxDeviceBase::AllocateTarget(this->m_DeviceBase, &this->m_DefaultTarget, 0);
      if ( Target >= 0 )
      {
        v5 = *p_m_DefaultTarget;
        RefCount = _InterlockedIncrement(&(*p_m_DefaultTarget)->m_Refcnt);
        v7 = SLOBYTE(v5->m_ObjectFlags) < 0 ? (FxTagTracker *)v5[-1].m_TargetPdo : 0LL;
        if ( v7 )
          FxTagTracker::UpdateTagHistory(
            v7,
            this,
            1552,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp",
            TagAddRef,
            RefCount);
      }
      m_DeviceBase = this->m_DeviceBase;
      if ( BYTE2(m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        p_m_SelfTarget = &this->m_SelfTarget;
        Target = FxDeviceBase::AllocateTarget(m_DeviceBase, &this->m_SelfTarget, 1u);
        if ( Target >= 0 )
        {
          v10 = *p_m_SelfTarget;
          v11 = _InterlockedIncrement(&(*p_m_SelfTarget)->m_Refcnt);
          if ( SLOBYTE(v10->m_ObjectFlags) >= 0 )
            m_TargetFileObject = 0LL;
          else
            m_TargetFileObject = (FxTagTracker *)v10[-1].m_TargetFileObject;
          if ( m_TargetFileObject )
            FxTagTracker::UpdateTagHistory(
              m_TargetFileObject,
              this,
              1562,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp",
              TagAddRef,
              v11);
        }
      }
      return Target;
    }
  }
  return result;
}
