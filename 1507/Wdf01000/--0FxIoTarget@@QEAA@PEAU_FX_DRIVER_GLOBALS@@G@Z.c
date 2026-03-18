/*
 * XREFs of ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00142DC
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020E38 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Construct@FxIoTarget@@AEAAXXZ @ 0x1C0014804 (-Construct@FxIoTarget@@AEAAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxIoTarget::FxIoTarget(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FILE_OBJECT *v6; // rbp
  FxVerifierLock *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  _LIST_ENTRY *Caller; // [rsp+48h] [rbp+0h]

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxIoTarget_vtbl *)&FxObject::`vftable';
  this->m_Type = 4608;
  this->m_ObjectSize = (ObjectSize + 15) & 0xFFF0;
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
  this->__vftable = (FxIoTarget_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v5 = this->m_Globals;
    if ( v5->FxVerifierLock )
    {
      v6 = 0LL;
      v7 = (FxVerifierLock *)FxPoolAllocator(
                               v5,
                               (_LIST_ENTRY *)&v5->FxPoolFrameworks,
                               ExDefaultNonPagedPoolType,
                               0xB0uLL,
                               v5->Tag,
                               Caller);
      if ( v7 )
      {
        FxVerifierLock::FxVerifierLock(v7, v5, this);
        v9 = v8;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 122) )
        {
          *(_DWORD *)(v9 + 48) = 1;
          *(_QWORD *)(v9 + 56) = 0LL;
          *(_DWORD *)(v9 + 64) = 0;
          KeInitializeEvent((PRKEVENT)(v9 + 72), SynchronizationEvent, 0);
          *(_BYTE *)(v9 + 40) = 1;
        }
        v6 = (_FILE_OBJECT *)v9;
      }
      else
      {
        WPP_IFR_SF_d(v5, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
      }
      this[-1].m_TargetFileObject = v6;
    }
  }
  this->__vftable = (FxIoTarget_vtbl *)&FxIoTarget::`vftable';
  this->m_TransactionedEntry.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionedEntry.m_TransactionedObject = 0LL;
  this->m_TransactionedEntry.m_ListLink.Blink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_ListLink.Flink = &this->m_TransactionedEntry.m_ListLink;
  this->m_TransactionedEntry.m_TransactionLink.Blink = &this->m_TransactionedEntry.m_TransactionLink;
  this->m_TransactionedEntry.m_TransactionLink.Flink = &this->m_TransactionedEntry.m_TransactionLink;
  this->m_SentIoEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_SentIoEvent.m_Event.m_Event, SynchronizationEvent, 0);
  this->m_SentIoEvent.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_PendedQueue.m_Queue.Blink = &this->m_PendedQueue.m_Queue;
  this->m_PendedQueue.m_Queue.Flink = &this->m_PendedQueue.m_Queue;
  this->m_PendedQueue.m_LockObject = 0LL;
  this->m_PendedQueue.m_CancelCallback = 0LL;
  this->m_PendedQueue.m_RequestCount = 0;
  FxIoTarget::Construct(this);
}
