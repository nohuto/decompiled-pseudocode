/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x1C0071140
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C002483C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0054F08 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rbx
  __int64 v10; // rsi
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *v14; // rax
  void *m_Key; // r12
  WDFKEY__ **v16; // r14
  __int64 result; // rax
  unsigned __int16 v18; // r9
  FxRegKey *v19; // rax
  __int64 v20; // rax
  int v21; // edi
  NTSTATUS v22; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+38h]
  WDFKEY__ *keyHandle; // [rsp+B0h] [rbp+40h] BYREF
  FxRegKey *pParent; // [rsp+B8h] [rbp+48h] BYREF
  void *PPObject; // [rsp+C0h] [rbp+50h] BYREF

  v8 = KeyAttributes;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v10 = 0LL;
  v13 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( ParentKey )
  {
    FxObjectHandleGetPtr(v13, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent);
    v14 = pParent;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v13, KeyAttributes, 0) < 0 )
      goto LABEL_6;
    FxObjectHandleGetPtr(v9, (unsigned __int64)v8->ParentObject, 0x1000u, &PPObject);
    v14 = PPObject;
  }
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v14 + 2);
LABEL_6:
  if ( !KeyName )
    FxVerifierNullBugCheck(v9, retaddr);
  v16 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  keyHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v9, v8, 0, v18);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v9, KeyName);
      if ( (int)result >= 0 )
      {
        v19 = (FxRegKey *)FxObjectHandleAlloc(v9, ExDefaultNonPagedPoolType, 0x80uLL, 0, v8, 0, FxObjectTypeExternal);
        if ( v19 )
        {
          FxRegKey::FxRegKey(v19, v9);
          v10 = v20;
        }
        if ( v10 )
        {
          v21 = FxObject::Commit((FxObject *)v10, v8, (void **)&keyHandle, 0LL, 1u);
          if ( v21 < 0 )
            goto LABEL_22;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = m_Key;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = KeyName;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v22 = ZwCreateKey(
                  (PHANDLE)(v10 + 112),
                  DesiredAccess,
                  &ObjectAttributes,
                  0,
                  0LL,
                  CreateOptions,
                  CreateDisposition);
          v21 = v22;
          if ( v22 < 0 )
            WPP_IFR_SF_d(v9, 2u, 2u, 0xDu, (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount, v22);
          else
            *v16 = keyHandle;
          if ( v21 < 0 )
LABEL_22:
            FxObject::DeleteFromFailedCreate((FxObject *)v10);
        }
        else
        {
          v21 = -1073741670;
          WPP_IFR_SF_d(v9, 2u, 2u, 0xCu, (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount, -1073741670);
        }
        return (unsigned int)v21;
      }
    }
  }
  return result;
}
