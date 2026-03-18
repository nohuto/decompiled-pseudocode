/*
 * XREFs of ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0030CD0
 * Callers:
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002118C (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C00673C0 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00309BC (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0075BD0 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C007CCE8 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
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
  _LIST_ENTRY *p_m_ListHead; // rdi
  _LIST_ENTRY *v15; // rax
  FxCollectionInternal *p_HardwareIDs; // rdi
  _LIST_ENTRY *v17; // rbx
  _LIST_ENTRY **p_Blink; // r14
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v22; // rax
  FxIrpPreprocessInfo *v23; // rcx

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
    v22 = p_CxDeviceInitListHead->Flink->Flink;
    if ( p_CxDeviceInitListHead->Flink->Blink != p_CxDeviceInitListHead || v22->Blink != Flink )
      __fastfail(3u);
    p_CxDeviceInitListHead->Flink = v22;
    v22->Blink = p_CxDeviceInitListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v23 = (FxIrpPreprocessInfo *)Flink[2].Flink;
    if ( v23 )
      FxIrpPreprocessInfo::`scalar deleting destructor'(v23, a2);
    FxPoolFree(Flink);
  }
  p_m_ListHead = &this->Pdo.CompatibleIDs.m_ListHead;
  while ( 1 )
  {
    v15 = p_m_ListHead->Flink;
    if ( p_m_ListHead->Flink == p_m_ListHead )
      break;
    if ( this->Pdo.CompatibleIDs.m_Count )
    {
      p_Blink = &v15[-1].Blink;
      if ( v15 != (_LIST_ENTRY *)8 )
      {
        ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))(*p_Blink)->Flink[1].Flink)(
          *p_Blink,
          &this->Pdo.CompatibleIDs,
          127LL,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        v19 = p_Blink[1];
        v20 = p_Blink[2];
        if ( (_LIST_ENTRY **)v19->Blink != p_Blink + 1 || (_LIST_ENTRY **)v20->Flink != p_Blink + 1 )
          __fastfail(3u);
        v20->Flink = v19;
        v19->Blink = v20;
        FxPoolFree(p_Blink);
        --this->Pdo.CompatibleIDs.m_Count;
      }
    }
  }
  p_HardwareIDs = &this->Pdo.HardwareIDs;
  v17 = &this->Pdo.HardwareIDs.m_ListHead;
  while ( v17->Flink != v17 )
    FxCollectionInternal::Remove(p_HardwareIDs, 0);
}
