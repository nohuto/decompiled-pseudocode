/*
 * XREFs of ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C001D5B0
 * Callers:
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C001EDF0 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0020120 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0022D9C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C002EEA8 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008110C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxSystemWorkItem **pObject)
{
  ULONG Tag; // ecx
  SIZE_T v5; // r9
  void *Caller; // rax
  FxSystemWorkItem *v9; // rax
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxSystemWorkItem *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v13; // rdi
  PIO_WORKITEM WorkItem; // rax
  _FX_DRIVER_GLOBALS *v16; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+50h] [rbp+8h] BYREF

  Tag = FxDriverGlobals->Tag;
  v5 = 224LL;
  if ( FxDriverGlobals->FxVerifierHandle )
    v5 = 256LL;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v9 = (FxSystemWorkItem *)FxPoolAllocator(
                             FxDriverGlobals,
                             &FxDriverGlobals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             v5,
                             Tag,
                             Caller);
  v11 = v9;
  if ( v9 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v9, 0, 0x20uLL);
      *(_DWORD *)(&v11->m_ObjectState + 1) = 1146058822;
      v11 = (FxSystemWorkItem *)((char *)v11 + 32);
    }
    if ( v11 )
    {
      v11->m_Globals = FxDriverGlobals;
      v11->__vftable = (FxSystemWorkItem_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v11->m_Type = 4145;
      v11->m_SpinLock.m_Lock = 0LL;
      v11->m_SpinLock.m_DbgFlagIsInitialized = 1;
      *(_DWORD *)&v11->m_ObjectFlags = 0x10000;
      v11->m_ParentObject = 0LL;
      v11->m_Refcnt = 1;
      v11->m_ChildListHead.Blink = &v11->m_ChildListHead;
      v11->m_ChildListHead.Flink = &v11->m_ChildListHead;
      v11->m_ChildEntry.Blink = &v11->m_ChildEntry;
      v11->m_ChildEntry.Flink = &v11->m_ChildEntry;
      m_Globals = v11->m_Globals;
      v11->m_DisposeSingleEntry.Next = 0LL;
      v11->m_DeviceBase = 0LL;
      if ( m_Globals->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v11, v10, 0);
      v11->__vftable = (FxSystemWorkItem_vtbl *)&FxNonPagedObject::`vftable';
      v11->m_NPLock.m_Lock = 0LL;
      v11->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v11->m_ObjectFlags) < 0 )
      {
        v16 = v11->m_Globals;
        if ( v16->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v16, v11);
          v11[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)VerifierLock;
        }
      }
      v11->__vftable = (FxSystemWorkItem_vtbl *)&FxObject::`vftable'.BugCheckCallbackRecord.Checksum;
      v11->m_WorkItem.m_WorkItem = 0LL;
      v11->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
      KeInitializeEvent(&v11->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
      v11->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
      v11->m_RemoveEvent.m_Event.m_DbgFlagIsInitialized = 0;
      KeInitializeEvent(&v11->m_RemoveEvent.m_Event.m_Event, SynchronizationEvent, 0);
      v11->m_RemoveEvent.m_Event.m_DbgFlagIsInitialized = 1;
      *(_WORD *)&v11->m_RunningDown = 0;
      v11->m_Callback = 0LL;
      v11->m_CallbackArg = 0LL;
      v11->m_WorkItemRunningCount = 0;
      v11->m_OutStandingWorkItem = 1;
      v11->m_ObjectFlags |= 0x811u;
      v13 = v11->m_Globals;
      WorkItem = IoAllocateWorkItem(WdmObject);
      v11->m_WorkItem.m_WorkItem = WorkItem;
      if ( WorkItem )
      {
        *pObject = v11;
        return 0LL;
      }
      WPP_IFR_SF_(v13, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
      v11->Release(v11, 0LL, 0, 0LL);
    }
  }
  return 3221225626LL;
}
