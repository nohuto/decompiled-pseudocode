/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3A0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C0030B48 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0030CD0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0071330 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C007CE70 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D60C (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  char v6; // r14
  char v7; // al
  WDFCHILDLIST__ *v8; // rcx
  int _a1; // eax
  FxDevice *CreatedDevice; // rcx
  int _a3; // ebx
  bool v13; // zf
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v15; // al
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_ModificationLink; // rsi
  _LIST_ENTRY *Flink; // rdx
  const void *v19; // rax
  KIRQL v20; // bl
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  v6 = 1;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v7 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v7 != 0);
  if ( !this->m_StaticList )
  {
    v8 = (WDFCHILDLIST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v8 = 0LL;
    _a1 = this->m_EvtCreateDevice.m_Method(v8, Entry->m_IdentificationDescription, &init);
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
      v13 = CreatedDevice == 0LL;
      p_m_ListLock = &this->m_ListLock;
      if ( v13 )
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v20 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v20);
        FxChildList::DrainFreeListHead(this, &freeHead);
      }
      else
      {
        v15 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
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
        KeReleaseSpinLock(&this->m_ListLock, v15);
        if ( init.CreatedDevice->m_ObjectSize )
          v19 = (const void *)((unsigned __int64)init.CreatedDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v19 = 0LL;
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v19,
          (__int64)init.CreatedDevice->m_DeviceObject.m_DeviceObject,
          _a3);
        FxDevice::DeleteDeviceFromFailedCreate(init.CreatedDevice, _a3, 1u);
        init.CreatedDevice = 0LL;
      }
    }
    v6 = 0;
    goto LABEL_10;
  }
  CreatedDevice = *(FxDevice **)&Entry->m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = CreatedDevice;
LABEL_9:
  Entry->m_Pdo = CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_10:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return v6;
}
