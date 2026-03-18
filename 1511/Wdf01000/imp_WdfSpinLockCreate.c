/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C0023660
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00235F8 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C002483C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        FxObject **SpinLock)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v6; // r9
  __int64 result; // rax
  unsigned __int16 ExtraSize; // di
  _POOL_TYPE v9; // edx
  FxSpinLock *v10; // rax
  FxObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
         SpinLockAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, SpinLockAttributes, 0, v6);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierLock )
      ExtraSize = 256;
    else
      ExtraSize = 0;
    v9 = ExDefaultNonPagedPoolType;
    *SpinLock = 0LL;
    v10 = (FxSpinLock *)FxObjectHandleAlloc(
                          m_Globals,
                          v9,
                          0x80uLL,
                          0,
                          SpinLockAttributes,
                          ExtraSize,
                          FxObjectTypeExternal);
    if ( v10 )
    {
      FxSpinLock::FxSpinLock(v10, m_Globals, ExtraSize);
      v12 = v11;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxObject::Commit(v12, SpinLockAttributes, (void **)&pParent, 0LL, 1u);
      if ( v13 < 0 )
        FxObject::DeleteFromFailedCreate(v12);
      else
        *SpinLock = pParent;
      return (unsigned int)v13;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
