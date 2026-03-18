/*
 * XREFs of ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C002CCAC
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029310 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C002E444 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 * Callees:
 *     <none>
 */

void __fastcall FxChildList::Initialize(FxChildList *this, _WDF_CHILD_LIST_CONFIG *Config)
{
  KIRQL v4; // al
  FxDeviceBase *m_DeviceBase; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
  m_DeviceBase = this->m_DeviceBase;
  this->m_IdentificationDescriptionSize = Config->IdentificationDescriptionSize;
  this->m_AddressDescriptionSize = Config->AddressDescriptionSize;
  this->m_EvtCreateDevice.m_Method = Config->EvtChildListCreateDevice;
  this->m_EvtScanForChildren.m_Method = Config->EvtChildListScanForChildren;
  this->m_EvtIdentificationDescriptionDuplicate = Config->EvtChildListIdentificationDescriptionDuplicate;
  this->m_EvtIdentificationDescriptionCopy = Config->EvtChildListIdentificationDescriptionCopy;
  this->m_EvtIdentificationDescriptionCleanup = Config->EvtChildListIdentificationDescriptionCleanup;
  this->m_EvtIdentificationDescriptionCompare = Config->EvtChildListIdentificationDescriptionCompare;
  this->m_EvtAddressDescriptionDuplicate = Config->EvtChildListAddressDescriptionDuplicate;
  this->m_EvtAddressDescriptionCopy = Config->EvtChildListAddressDescriptionCopy;
  this->m_EvtAddressDescriptionCleanup = Config->EvtChildListAddressDescriptionCleanup;
  this->m_EvtChildListDeviceReenumerated = Config->EvtChildListDeviceReenumerated;
  m_DeviceBase->AddChildList(m_DeviceBase, this);
  this->m_IsAdded = 1;
}
