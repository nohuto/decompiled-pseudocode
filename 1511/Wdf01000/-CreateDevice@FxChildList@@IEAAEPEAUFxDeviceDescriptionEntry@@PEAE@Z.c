/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C00267B8
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0026490 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C001C7D4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C001C9B0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x1C001CB7C (-SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0026988 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00269E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005FCA4 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C006A82C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C006B0D4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  FxDevice *m_Device; // rdx
  char v7; // r15
  unsigned int v8; // edx
  WDFCHILDLIST__ *v9; // rcx
  int _a1; // eax
  FxDevice *CreatedDevice; // rcx
  int _a3; // ebx
  bool v14; // zf
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v16; // al
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_ModificationLink; // rsi
  _LIST_ENTRY *Flink; // rdx
  const void *v20; // rax
  KIRQL v21; // bl
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  m_Device = this->m_Device;
  v7 = 1;
  init.CreatedOnStack = 1;
  WDFDEVICE_INIT::SetPdo(&init, m_Device);
  init.Pdo.DescriptionEntry = Entry;
  if ( !this->m_StaticList )
  {
    if ( this->m_ObjectSize )
      v9 = (WDFCHILDLIST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v9 = 0LL;
    _a1 = this->m_EvtCreateDevice.m_Method(v9, Entry->m_IdentificationDescription, &init);
    CreatedDevice = init.CreatedDevice;
    _a3 = _a1;
    if ( _a1 == -1073741267 )
    {
      if ( init.CreatedDevice )
        FxDevice::Destroy(init.CreatedDevice);
      *InvalidateRelations = 1;
    }
    else
    {
      if ( _a1 >= 0 )
      {
        if ( !init.CreatedDevice )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
          FxVerifierDbgBreakPoint(this->m_Globals);
          CreatedDevice = init.CreatedDevice;
          _a3 = -1073740951;
        }
        if ( _a3 >= 0 )
          goto LABEL_9;
      }
      v14 = CreatedDevice == 0LL;
      p_m_ListLock = &this->m_ListLock;
      if ( v14 )
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v21 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v21);
        FxChildList::DrainFreeListHead(this, &freeHead);
      }
      else
      {
        v16 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        Entry->m_DescriptionState = DescriptionReportedMissing;
        if ( Entry->m_ModificationState )
        {
          Blink = Entry->m_ModificationLink.Blink;
          p_m_ModificationLink = &Entry->m_ModificationLink;
          Flink = p_m_ModificationLink->Flink;
          if ( p_m_ModificationLink->Flink->Blink != p_m_ModificationLink || Blink->Flink != p_m_ModificationLink )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        KeReleaseSpinLock(&this->m_ListLock, v16);
        if ( init.CreatedDevice->m_ObjectSize )
          v20 = (const void *)((unsigned __int64)init.CreatedDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v20,
          (__int64)init.CreatedDevice->m_DeviceObject.m_DeviceObject,
          _a3);
        FxDevice::DeleteDeviceFromFailedCreate(init.CreatedDevice, _a3, 1u);
        init.CreatedDevice = 0LL;
      }
    }
    v7 = 0;
    goto LABEL_10;
  }
  CreatedDevice = *(FxDevice **)&Entry->m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = CreatedDevice;
LABEL_9:
  Entry->m_Pdo = CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_10:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init, v8);
  return v7;
}
