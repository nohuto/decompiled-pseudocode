/*
 * XREFs of ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C0023F9C
 * Callers:
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C0024F34 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020A64 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxWmiInstance::FxWmiInstance(
        FxWmiInstance *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        FxWmiProvider *Provider)
{
  unsigned int RefCount; // edx
  FxTagTracker *m_TracingHandle; // rcx

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1034, ObjectSize, FxDriverGlobals);
  this->__vftable = (FxWmiInstance_vtbl *)&FxWmiInstance::`vftable';
  this->m_ListEntry.Blink = &this->m_ListEntry;
  this->m_ListEntry.Flink = &this->m_ListEntry;
  this->m_Provider = Provider;
  RefCount = _InterlockedIncrement(&Provider->m_Refcnt);
  if ( SLOBYTE(Provider->m_ObjectFlags) < 0 )
    m_TracingHandle = (FxTagTracker *)Provider[-1].m_TracingHandle;
  else
    m_TracingHandle = 0LL;
  if ( m_TracingHandle )
    FxTagTracker::UpdateTagHistory(
      m_TracingHandle,
      this,
      37,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp",
      TagAddRef,
      RefCount);
  this->m_ObjectFlags |= 0x800u;
}
