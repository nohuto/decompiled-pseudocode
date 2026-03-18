/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C002DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C002DCF4 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        FxObject **SpinLock,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int16 ExtraSize; // si
  _POOL_TYPE v9; // edx
  FxSpinLock *v10; // rax
  FxObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  unsigned __int64 ParentObject; // r8
  FxObject *v15; // rcx
  __int64 v16; // rdx
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( SpinLockAttributes )
  {
    if ( SpinLockAttributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)SpinLockAttributes->ParentObject;
      if ( ParentObject )
      {
        v15 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v16) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v16 = LOWORD(v15->__vftable);
          v15 = (FxObject *)((char *)v15 - v16);
        }
        a4 = 4096;
        if ( v15->m_Type == 4096 )
        {
          pParent = v15;
        }
        else
        {
          FxObjectHandleGetPtrQI(v15, (void **)&pParent, (void *)ParentObject, 0x1000u, v16);
          v15 = pParent;
        }
        m_Globals = v15->m_Globals;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        (unsigned __int8)SpinLockAttributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        SpinLockAttributes,
        56,
        SpinLockAttributes->Size,
        -1073741820);
    }
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, SpinLockAttributes, 0, a4);
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
