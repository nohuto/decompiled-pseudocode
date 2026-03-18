/*
 * XREFs of ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C00202C0
 * Callers:
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0020F68 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0021C28 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C0064008 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0019CB0 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0019D24 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0071FA8 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C0078E6C (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall WDFDEVICE_INIT::~WDFDEVICE_INIT(WDFDEVICE_INIT *this, unsigned int a2)
{
  FxPnpStateCallback *PnpStateCallbacks; // rcx
  FxPowerStateCallback *PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rcx
  FxString *DeviceName; // rcx
  FxString *DeviceID; // rcx
  FxString *InstanceID; // rcx
  FxString *ContainerID; // rcx
  FxDeviceText *Next; // rcx
  FxString *Sddl; // rcx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rdi
  FxCollectionInternal *p_HardwareIDs; // rdi
  _LIST_ENTRY *p_m_ListHead; // rbx
  _LIST_ENTRY **Entry; // rax
  _LIST_ENTRY **v17; // r14
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // rax
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v21; // rax
  FxIrpPreprocessInfo *v22; // rcx

  PnpStateCallbacks = this->PnpPower.PnpStateCallbacks;
  if ( PnpStateCallbacks )
    FxPoolFree(PnpStateCallbacks);
  PowerStateCallbacks = this->PnpPower.PowerStateCallbacks;
  if ( PowerStateCallbacks )
    FxPoolFree(PowerStateCallbacks);
  PowerPolicyStateCallbacks = this->PnpPower.PowerPolicyStateCallbacks;
  if ( PowerPolicyStateCallbacks )
    FxPoolFree(PowerPolicyStateCallbacks);
  DeviceName = this->DeviceName;
  if ( DeviceName )
    DeviceName->DeleteObject(DeviceName);
  DeviceID = this->Pdo.DeviceID;
  if ( DeviceID )
    DeviceID->DeleteObject(DeviceID);
  InstanceID = this->Pdo.InstanceID;
  if ( InstanceID )
    InstanceID->DeleteObject(InstanceID);
  ContainerID = this->Pdo.ContainerID;
  if ( ContainerID )
    ContainerID->DeleteObject(ContainerID);
  Next = (FxDeviceText *)this->Pdo.DeviceText.Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    FxDeviceText::`scalar deleting destructor'(Next, a2);
  }
  this->Pdo.DeviceText.Next = 0LL;
  Sddl = this->Security.Sddl;
  if ( Sddl )
    Sddl->DeleteObject(Sddl);
  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo, a2);
  p_CxDeviceInitListHead = &this->CxDeviceInitListHead;
  while ( p_CxDeviceInitListHead->Flink != p_CxDeviceInitListHead )
  {
    Flink = p_CxDeviceInitListHead->Flink;
    v21 = p_CxDeviceInitListHead->Flink->Flink;
    if ( p_CxDeviceInitListHead->Flink->Blink != p_CxDeviceInitListHead || v21->Blink != Flink )
      __fastfail(3u);
    p_CxDeviceInitListHead->Flink = v21;
    v21->Blink = p_CxDeviceInitListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v22 = (FxIrpPreprocessInfo *)Flink[2].Flink;
    if ( v22 )
      FxIrpPreprocessInfo::`scalar deleting destructor'(v22, a2);
    FxPoolFree(Flink);
  }
  while ( this->Pdo.CompatibleIDs.m_ListHead.Flink != &this->Pdo.CompatibleIDs.m_ListHead )
  {
    Entry = FxCollectionInternal::FindEntry(&this->Pdo.CompatibleIDs, 0);
    v17 = Entry;
    if ( Entry )
    {
      ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))(*Entry)->Flink[1].Flink)(
        *Entry,
        &this->Pdo.CompatibleIDs,
        127LL,
        "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
      v18 = v17[1];
      v19 = v17[2];
      if ( (_LIST_ENTRY **)v18->Blink != v17 + 1 || (_LIST_ENTRY **)v19->Flink != v17 + 1 )
        __fastfail(3u);
      v19->Flink = v18;
      v18->Blink = v19;
      FxPoolFree(v17);
      --this->Pdo.CompatibleIDs.m_Count;
    }
  }
  p_HardwareIDs = &this->Pdo.HardwareIDs;
  p_m_ListHead = &this->Pdo.HardwareIDs.m_ListHead;
  while ( p_m_ListHead->Flink != p_m_ListHead )
    FxCollectionInternal::Remove(p_HardwareIDs, 0);
}
