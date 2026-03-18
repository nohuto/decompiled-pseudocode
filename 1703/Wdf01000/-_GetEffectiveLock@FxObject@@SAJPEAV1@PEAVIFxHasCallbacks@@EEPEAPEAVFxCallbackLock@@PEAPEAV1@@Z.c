/*
 * XREFs of ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C001D258
 * Callers:
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0018128 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001C9D4 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0070A08 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 * Callees:
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C000C8E0 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxObject::_GetEffectiveLock(
        FxObject *Object,
        IFxHasCallbacks *Callbacks,
        unsigned __int8 AutomaticLocking,
        unsigned __int8 PassiveCallbacks,
        FxCallbackLock **CallbackLock,
        FxObject **CallbackLockObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxCallbackLock **v8; // r14
  FxObject **v10; // r15
  unsigned __int8 v12; // dl
  unsigned __int8 IsPassiveCallbacks; // al
  _WDF_SYNCHRONIZATION_SCOPE parentScope; // [rsp+50h] [rbp+18h] BYREF

  m_Globals = Object->m_Globals;
  v8 = CallbackLock;
  v10 = CallbackLockObject;
  *CallbackLock = 0LL;
  *v10 = 0LL;
  if ( !AutomaticLocking )
    return 0LL;
  if ( !Callbacks )
    return 3221225488LL;
  Callbacks->GetConstraints(Callbacks, (_WDF_EXECUTION_LEVEL *)&CallbackLock, &parentScope);
  if ( parentScope == WdfSynchronizationScopeNone || parentScope == WdfSynchronizationScopeInheritFromParent )
    return 0LL;
  IsPassiveCallbacks = FxObject::IsPassiveCallbacks(Object, v12);
  if ( PassiveCallbacks )
  {
    if ( IsPassiveCallbacks )
    {
LABEL_9:
      *v8 = Callbacks->GetCallbackLockPtr(Callbacks, v10);
      return 0LL;
    }
  }
  else if ( !IsPassiveCallbacks )
  {
    goto LABEL_9;
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return 3223323148LL;
}
