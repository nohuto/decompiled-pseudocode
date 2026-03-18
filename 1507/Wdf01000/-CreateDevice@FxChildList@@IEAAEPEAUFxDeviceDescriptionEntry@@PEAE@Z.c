/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C001D5B8
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C001D290 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C000F00C (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C000F1E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x1C000F3AC (-SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D78C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00673E8 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0075D20 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C0076634 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
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
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v15; // rax
  bool v16; // zf
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v18; // al
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_ModificationLink; // r14
  _LIST_ENTRY *Flink; // rdx
  const void *v22; // rax
  KIRQL v23; // bl
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  _LIST_ENTRY freeHead; // [rsp+48h] [rbp-B8h] BYREF
  WDFDEVICE_INIT init; // [rsp+60h] [rbp-A0h] BYREF

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
          m_Globals = this->m_Globals;
          v24 = 7567731;
          Mx::MxDbgPrint(
            "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
            m_Globals->Public.DriverName,
            (const char *)&v24,
            m_Globals->Public.DriverName,
            (const char *)&v24);
          if ( *(_BYTE *)(v15 + 318) )
            DbgBreakPoint();
          CreatedDevice = init.CreatedDevice;
          _a3 = -1073740951;
        }
        if ( _a3 >= 0 )
          goto LABEL_8;
      }
      v16 = CreatedDevice == 0LL;
      p_m_ListLock = &this->m_ListLock;
      if ( v16 )
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v23 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v23);
        FxChildList::DrainFreeListHead(this, &freeHead);
      }
      else
      {
        v18 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
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
        KeReleaseSpinLock(&this->m_ListLock, v18);
        if ( init.CreatedDevice->m_ObjectSize )
          v22 = (const void *)((unsigned __int64)init.CreatedDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v22 = 0LL;
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v22,
          (__int64)init.CreatedDevice->m_DeviceObject.m_DeviceObject,
          _a3);
        FxDevice::DeleteDeviceFromFailedCreate(init.CreatedDevice, _a3, 1u);
        init.CreatedDevice = 0LL;
      }
    }
    v7 = 0;
    goto LABEL_9;
  }
  CreatedDevice = *(FxDevice **)&Entry->m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = CreatedDevice;
LABEL_8:
  Entry->m_Pdo = CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_9:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init, v8);
  return v7;
}
