/*
 * XREFs of ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00242AC
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0023DE0 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0009314 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

void __fastcall FxWorkItem::FxWorkItem(FxWorkItem *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxVerifierLock *VerifierLock; // [rsp+30h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxWorkItem_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&this->m_Type = 13635621;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, 0LL);
  this->__vftable = (FxWorkItem_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, m_Globals, this);
      this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Blink = (_LIST_ENTRY *)VerifierLock;
    }
  }
  this->__vftable = (FxWorkItem_vtbl *)&FxWorkItem::`vftable';
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x811u;
  this->m_Object = 0LL;
  this->m_Callback = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  *(_WORD *)&this->m_RunningDown = 0;
  this->m_WorkItemThread = 0LL;
  this->m_WorkItemRunningCount = 0;
}
