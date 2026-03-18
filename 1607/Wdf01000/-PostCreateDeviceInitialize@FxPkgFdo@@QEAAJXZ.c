/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C002A430
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020A80 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002826C (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C009C56C (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
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
            1585,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp",
            TagAddRef,
            RefCount);
      }
      m_DeviceBase = this->m_DeviceBase;
      if ( BYTE2(m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        Target = FxDeviceBase::AllocateTarget(m_DeviceBase, &this->m_SelfTarget, 1u);
        if ( Target >= 0 )
          FxObject::AddRef(
            this->m_SelfTarget,
            this,
            1595,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
      }
      return Target;
    }
  }
  return result;
}
