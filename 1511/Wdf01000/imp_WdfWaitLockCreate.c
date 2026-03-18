/*
 * XREFs of imp_WdfWaitLockCreate @ 0x1C0023AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0023B6C (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C002483C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWaitLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LockAttributes,
        WDFWAITLOCK__ **Lock)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v6; // r9
  int result; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxObject *parent; // [rsp+40h] [rbp+8h] BYREF

  parent = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
         LockAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)LockAttributes->ParentObject, 0x1000u, (void **)&parent);
    m_Globals = parent->m_Globals;
  }
  if ( !Lock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, LockAttributes, 0, v6);
  if ( result >= 0 )
    return FxWaitLock::_Create(m_Globals, LockAttributes, parent, 1u, Lock);
  return result;
}
