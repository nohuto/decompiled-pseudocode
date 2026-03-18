/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x1C007D2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017C20 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v8; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 v10; // rsi
  ACCESS_MASK v11; // r13d
  FxRegKey *v13; // rcx
  __int64 Offset; // r8
  void *m_Key; // r12
  unsigned __int64 ParentObject; // r8
  FxObject *v17; // rbx
  __int64 v18; // rcx
  WDFKEY__ **v19; // r15
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  unsigned __int16 Length; // dx
  int v23; // eax
  unsigned __int16 v24; // r9
  FxRegKey *v25; // rax
  __int64 v26; // rax
  int v27; // edi
  NTSTATUS v28; // eax
  void *PPObject; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  ULONG_PTR retaddr; // [rsp+C8h] [rbp+3Fh]
  WDFKEY__ *keyHandle; // [rsp+D0h] [rbp+47h] BYREF
  FxRegKey *pParent; // [rsp+D8h] [rbp+4Fh] BYREF

  v8 = KeyAttributes;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v10 = 0LL;
  v11 = DesiredAccess;
  if ( ParentKey )
  {
    v13 = (FxRegKey *)(~ParentKey & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(Offset) = 0;
    if ( (ParentKey & 1) != 0 )
    {
      Offset = LOWORD(v13->__vftable);
      v13 = (FxRegKey *)((char *)v13 - Offset);
    }
    LOWORD(DesiredAccess) = 4102;
    if ( v13->m_Type == 4102 )
    {
      pParent = v13;
    }
    else
    {
      FxObjectHandleGetPtrQI(v13, (void **)&pParent, (void *)ParentKey, 0x1006u, Offset);
      v13 = pParent;
    }
    m_Globals = v13->FxPagedObject::FxObject::m_Globals;
    m_Key = v13->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = (unsigned __int64)KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          v17 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
          LOWORD(v18) = 0;
          if ( (ParentObject & 1) != 0 )
          {
            v18 = LOWORD(v17->__vftable);
            v17 = (FxObject *)((char *)v17 - v18);
          }
          LOWORD(DesiredAccess) = 4096;
          if ( v17->m_Type == 4096 )
          {
            PPObject = v17;
          }
          else
          {
            FxObjectHandleGetPtrQI(v17, &PPObject, (void *)ParentObject, 0x1000u, v18);
            v17 = (FxObject *)PPObject;
          }
          m_Globals = v17->m_Globals;
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
          0,
          6u,
          0xBu,
          WPP_FxValidateFunctions_hpp_Traceguids,
          KeyAttributes,
          56,
          KeyAttributes->Size,
          -1073741820);
      }
    }
  }
  if ( !KeyName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v19 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  keyHandle = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(keyHandle) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  result = FxValidateObjectAttributes(m_Globals, v8, 0, DesiredAccess);
  if ( (int)result < 0 )
    return result;
  Length = KeyName->Length;
  if ( (KeyName->Length & 1) != 0 )
  {
    v23 = Length;
    v24 = 13;
LABEL_30:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v24, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v23, -1073741811);
    return 3221225485LL;
  }
  LOWORD(v23) = KeyName->MaximumLength;
  if ( (v23 & 1) != 0 )
  {
    v23 = (unsigned __int16)v23;
    v24 = 14;
    goto LABEL_30;
  }
  if ( (_WORD)v23 && !KeyName->Buffer )
  {
    v23 = (unsigned __int16)v23;
    v24 = 15;
    goto LABEL_30;
  }
  if ( Length > (unsigned __int16)v23 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      KeyName,
      Length,
      (unsigned __int16)v23,
      -1073741811);
    return 3221225485LL;
  }
  v25 = (FxRegKey *)FxObjectHandleAlloc(m_Globals, ExDefaultNonPagedPoolType, 0x80uLL, 0, v8, 0, FxObjectTypeExternal);
  if ( v25 )
  {
    FxRegKey::FxRegKey(v25, m_Globals);
    v10 = v26;
  }
  if ( v10 )
  {
    v27 = FxObject::Commit((FxObject *)v10, v8, (void **)&keyHandle, 0LL, 1u);
    if ( v27 < 0 )
      goto LABEL_48;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = m_Key;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = KeyName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v28 = ZwCreateKey((PHANDLE)(v10 + 112), v11, &ObjectAttributes, 0, 0LL, CreateOptions, CreateDisposition);
    v27 = v28;
    if ( v28 < 0 )
      WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xDu, WPP_FxRegistryAPI_cpp_Traceguids, v28);
    else
      *v19 = keyHandle;
    if ( v27 < 0 )
LABEL_48:
      FxObject::DeleteFromFailedCreate((FxObject *)v10);
  }
  else
  {
    v27 = -1073741670;
    WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xCu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
  }
  return (unsigned int)v27;
}
