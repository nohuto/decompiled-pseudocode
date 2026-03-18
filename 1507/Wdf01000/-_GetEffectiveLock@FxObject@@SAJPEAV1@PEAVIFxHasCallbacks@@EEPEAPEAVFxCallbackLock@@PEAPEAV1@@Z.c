/*
 * XREFs of ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C001F958
 * Callers:
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001F628 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023B0C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C00683E8 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C007AA3C (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
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
  unsigned __int8 v13; // dl
  unsigned __int8 IsPassiveCallbacks; // al
  _WDF_SYNCHRONIZATION_SCOPE parentScope; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = Object->m_Globals;
  v8 = CallbackLock;
  v10 = CallbackLockObject;
  *CallbackLock = 0LL;
  *v10 = 0LL;
  if ( !AutomaticLocking )
    return 0LL;
  if ( !Callbacks )
    return 3221225488LL;
  Callbacks->GetConstraints(Callbacks, (_WDF_EXECUTION_LEVEL *)&CallbackLockObject, &parentScope);
  if ( parentScope == WdfSynchronizationScopeNone || parentScope == WdfSynchronizationScopeInheritFromParent )
    return 0LL;
  IsPassiveCallbacks = FxObject::IsPassiveCallbacks(Object, v13);
  if ( PassiveCallbacks )
  {
    if ( IsPassiveCallbacks )
    {
LABEL_10:
      *v8 = Callbacks->GetCallbackLockPtr(Callbacks, v10);
      return 0LL;
    }
  }
  else if ( !IsPassiveCallbacks )
  {
    goto LABEL_10;
  }
  LODWORD(CallbackLock) = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&CallbackLock,
    m_Globals->Public.DriverName,
    (const char *)&CallbackLock);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3223323148LL;
}
