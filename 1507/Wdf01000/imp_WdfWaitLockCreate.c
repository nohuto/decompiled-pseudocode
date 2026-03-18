/*
 * XREFs of imp_WdfWaitLockCreate @ 0x1C001EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWaitLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LockAttributes,
        WDFWAITLOCK__ **Lock,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 ParentObject; // r8
  FxObject *v8; // rcx
  __int64 Offset; // rdx
  int result; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *parent; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  parent = 0LL;
  if ( LockAttributes )
  {
    if ( LockAttributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)LockAttributes->ParentObject;
      if ( ParentObject )
      {
        v8 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(Offset) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          Offset = LOWORD(v8->__vftable);
          v8 = (FxObject *)((char *)v8 - Offset);
        }
        a4 = 4096;
        if ( v8->m_Type == 4096 )
        {
          parent = v8;
        }
        else
        {
          FxObjectHandleGetPtrQI(v8, (void **)&parent, (void *)ParentObject, 0x1000u, Offset);
          v8 = parent;
        }
        m_Globals = v8->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        (unsigned __int8)LockAttributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        LockAttributes,
        56,
        LockAttributes->Size,
        -1073741820);
    }
  }
  if ( !Lock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, LockAttributes, 0, a4);
  if ( result >= 0 )
    return FxWaitLock::_Create(m_Globals, LockAttributes, parent, 1u, Lock);
  return result;
}
