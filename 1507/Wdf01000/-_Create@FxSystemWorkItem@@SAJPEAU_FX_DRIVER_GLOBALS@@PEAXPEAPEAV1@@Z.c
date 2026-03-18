/*
 * XREFs of ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0
 * Callers:
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000A980 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C000C1A4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023B0C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxSystemWorkItem **pObject)
{
  ULONG Tag; // ecx
  SIZE_T v5; // r9
  _LIST_ENTRY *Caller; // rax
  FxSystemWorkItem *v9; // rax
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxSystemWorkItem *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v13; // rdi
  PIO_WORKITEM WorkItem; // rax
  _FX_DRIVER_GLOBALS *v16; // r14
  _LIST_ENTRY *v17; // r15
  FxVerifierLock *v18; // rax
  _LIST_ENTRY *v19; // rax
  _LIST_ENTRY *v20; // rdi
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

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
                             (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
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
          v17 = 0LL;
          v18 = (FxVerifierLock *)FxPoolAllocator(
                                    v16,
                                    (_LIST_ENTRY *)&v16->FxPoolFrameworks,
                                    ExDefaultNonPagedPoolType,
                                    0xB0uLL,
                                    v16->Tag,
                                    retaddr);
          if ( v18 && (FxVerifierLock::FxVerifierLock(v18, v16, v11), (v20 = v19) != 0LL) )
          {
            if ( BYTE2(v19[7].Blink) )
            {
              LODWORD(v19[3].Flink) = 1;
              v19[3].Blink = 0LL;
              LODWORD(v19[4].Flink) = 0;
              KeInitializeEvent((PRKEVENT)&v19[4].Blink, SynchronizationEvent, 0);
              LOBYTE(v20[2].Blink) = 1;
            }
            v17 = v20;
          }
          else
          {
            WPP_IFR_SF_d(v16, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
          }
          v11[-1].m_RemoveEvent.m_Event.m_Event.Header.WaitListHead.Flink = v17;
        }
      }
      v11->__vftable = (FxSystemWorkItem_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedHead;
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
