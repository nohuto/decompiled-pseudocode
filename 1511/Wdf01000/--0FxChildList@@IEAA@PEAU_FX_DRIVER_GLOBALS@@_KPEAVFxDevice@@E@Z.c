/*
 * XREFs of ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C0026B90
 * Callers:
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025F90 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxChildList::FxChildList(
        FxChildList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        unsigned __int8 Static)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v9; // rdx
  FxVerifierLock *VerifierLock; // [rsp+40h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxChildList_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&this->m_Type = 24121385;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, 0);
  this->__vftable = (FxChildList_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v9 = this->m_Globals;
    if ( v9->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v9, this);
      this[-1].m_ScanEvent.m_Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)VerifierLock;
    }
  }
  this->__vftable = (FxChildList_vtbl *)&FxChildList::`vftable';
  this->m_TransactionLink.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionLink.m_TransactionedObject = 0LL;
  this->m_TransactionLink.m_ListLink.Blink = &this->m_TransactionLink.m_ListLink;
  this->m_TransactionLink.m_ListLink.Flink = &this->m_TransactionLink.m_ListLink;
  this->m_TransactionLink.m_TransactionLink.Blink = &this->m_TransactionLink.m_TransactionLink;
  this->m_TransactionLink.m_TransactionLink.Flink = &this->m_TransactionLink.m_TransactionLink;
  this->m_TotalDescriptionSize = TotalDescriptionSize;
  this->m_EvtCreateDevice.m_Method = 0LL;
  this->m_EvtScanForChildren.m_Method = 0LL;
  this->m_ScanEvent.m_DbgFlagIsInitialized = 0;
  this->m_TransactionLink.m_TransactionedObject = this;
  this->m_DeviceBase = Device;
  *(_QWORD *)&this->m_IdentificationDescriptionSize = 0LL;
  this->m_EvtIdentificationDescriptionDuplicate = 0LL;
  this->m_EvtIdentificationDescriptionCopy = 0LL;
  this->m_EvtIdentificationDescriptionCleanup = 0LL;
  this->m_EvtIdentificationDescriptionCompare = 0LL;
  this->m_EvtAddressDescriptionDuplicate = 0LL;
  this->m_EvtAddressDescriptionCopy = 0LL;
  this->m_EvtAddressDescriptionCleanup = 0LL;
  this->m_ListLock = 0LL;
  this->m_DescriptionListHead.Blink = &this->m_DescriptionListHead;
  this->m_DescriptionListHead.Flink = &this->m_DescriptionListHead;
  this->m_ModificationListHead.Blink = &this->m_ModificationListHead;
  this->m_ModificationListHead.Flink = &this->m_ModificationListHead;
  this->m_StaticList = Static;
  this->m_State = ListUnlocked;
  this->m_InvalidationNeeded = 0;
  *(_WORD *)&this->m_IsAdded = 0;
  this->m_ScanTag = 0LL;
  this->m_ScanCount = 0;
  KeInitializeEvent(&this->m_ScanEvent.m_Event, NotificationEvent, 1u);
  this->m_ScanEvent.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
}
