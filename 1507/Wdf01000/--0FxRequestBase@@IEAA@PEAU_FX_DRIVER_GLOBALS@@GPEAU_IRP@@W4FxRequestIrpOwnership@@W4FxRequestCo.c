/*
 * XREFs of ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C00140E4
 * Callers:
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C00208DC (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxObject@@IEAA@GGPEAU_FX_DRIVER_GLOBALS@@W4FxObjectType@@@Z @ 0x1C00156DC (--0FxObject@@IEAA@GGPEAU_FX_DRIVER_GLOBALS@@W4FxObjectType@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030D04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

void __fastcall FxRequestBase::FxRequestBase(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        _IRP *Irp,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxObjectType ObjectType)
{
  unsigned int v10; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrpQueue *v12; // rbp
  FxVerifierLock *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // r8d
  _LIST_ENTRY *retaddr; // [rsp+48h] [rbp+0h]

  FxObject::FxObject(this, (unsigned __int16)FxDriverGlobals, ObjectSize, FxDriverGlobals, ObjectType);
  this->__vftable = (FxRequestBase_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      v12 = 0LL;
      v13 = (FxVerifierLock *)FxPoolAllocator(
                                m_Globals,
                                (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                m_Globals->Tag,
                                retaddr);
      if ( v13 )
      {
        FxVerifierLock::FxVerifierLock(v13, m_Globals, this);
        v15 = v14;
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        if ( *(_BYTE *)(v15 + 122) )
        {
          *(_DWORD *)(v15 + 48) = 1;
          *(_QWORD *)(v15 + 56) = 0LL;
          *(_DWORD *)(v15 + 64) = 0;
          KeInitializeEvent((PRKEVENT)(v15 + 72), SynchronizationEvent, 0);
          *(_BYTE *)(v15 + 40) = 1;
        }
        v12 = (FxIrpQueue *)v15;
      }
      else
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
      }
      this[-1].m_IrpQueue = v12;
    }
  }
  this->__vftable = (FxRequestBase_vtbl *)&FxRequestBase::`vftable';
  this->m_Irp.m_Irp = Irp;
  this->m_CancelRoutine.m_Cancel = 0LL;
  this->m_CompletionRoutine.m_Completion = 0LL;
  this->m_CanComplete = 0;
  if ( Caller == FxRequestConstructorCallerIsDriver )
  {
    this->m_IrpAllocation = (Ownership != FxRequestOwnsIrp) + 1;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v10, 0xBu) )
      FxObject::MarkDisposeOverride(this, (FxObjectLockState)(v16 - 10));
  }
  else if ( Ownership == FxRequestOwnsIrp )
  {
    this->m_IrpAllocation = 1;
  }
  else
  {
    this->m_IrpAllocation = 0;
    this->m_CanComplete = 1;
  }
  this->m_Completed = this->m_Irp.m_Irp == 0LL;
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_Canceled = 0;
  this->m_PriorityBoost = 0;
  this->m_RequestContext = 0LL;
  this->m_Timer = 0LL;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
  this->m_DrainSingleEntry.Next = 0LL;
  *(_QWORD *)&this->m_SystemBufferOffset = 0LL;
  this->m_IrpQueue = 0LL;
  *(_DWORD *)&this->m_OutputBufferOffset = 0;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_AllocatedMdl = 0LL;
  this->m_CompletionState = 0;
}
