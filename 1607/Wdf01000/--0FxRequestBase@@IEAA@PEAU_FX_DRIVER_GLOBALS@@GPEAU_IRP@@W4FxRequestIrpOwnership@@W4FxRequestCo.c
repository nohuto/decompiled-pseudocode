/*
 * XREFs of ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C002D90C
 * Callers:
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C001B93C (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0062F6C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001C288 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0063E0C (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
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
  _FX_DRIVER_GLOBALS *v7; // rdi
  unsigned __int8 v10; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int v12; // r8d
  FxVerifierLock *VerifierLock; // [rsp+30h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxRequestBase_vtbl *)&FxObject::`vftable';
  this->m_Type = 4104;
  v7 = FxDriverGlobals;
  v10 = ObjectType == FxObjectTypeEmbedded;
  this->m_ObjectSize = (ObjectSize + 15) & 0xFFF0;
  LOBYTE(FxDriverGlobals) = v10;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, FxDriverGlobals);
  this->__vftable = (FxRequestBase_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, m_Globals, this);
      this[-1].m_IrpQueue = (FxIrpQueue *)VerifierLock;
    }
  }
  v10 = Caller == FxRequestConstructorCallerIsDriver;
  this->__vftable = (FxRequestBase_vtbl *)&FxRequestBase::`vftable';
  this->m_Irp.m_Irp = Irp;
  this->m_CancelRoutine.m_Cancel = 0LL;
  this->m_CompletionRoutine.m_Completion = 0LL;
  this->m_CanComplete = 0;
  if ( v10 )
  {
    this->m_IrpAllocation = (Ownership != FxRequestOwnsIrp) + 1;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v7, (unsigned int)m_Globals, 0xBu) )
      FxObject::MarkDisposeOverride(this, (FxObjectLockState)(v12 - 10));
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
  v10 = this->m_Irp.m_Irp == 0LL;
  this->m_Target = 0LL;
  this->m_Completed = v10;
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
