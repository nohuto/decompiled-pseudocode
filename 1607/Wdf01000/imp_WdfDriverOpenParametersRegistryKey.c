/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001920
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007B40 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0035958 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v9; // rcx
  NTSTATUS v10; // edi
  FxRegKey *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  FxAutoRegKey hKey; // [rsp+40h] [rbp-71h] BYREF
  FxDriver *pDriver; // [rsp+48h] [rbp-69h] BYREF
  WDFKEY__ *keyHandle; // [rsp+50h] [rbp-61h] BYREF
  _UNICODE_STRING parameters; // [rsp+58h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-49h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-19h] BYREF
  void *retaddr; // [rsp+108h] [rbp+57h]

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  hKey.m_Key = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  v10 = FxVerifierCheckIrqlLevel(v9, 0);
  if ( v10 < 0 )
    goto LABEL_16;
  v10 = FxValidateObjectAttributes(v5, KeyAttributes, 0);
  if ( v10 < 0 )
    goto LABEL_16;
  FxObjectHandleGetPtr(v5, Driver, 0x1001u, (void **)&pDriver);
  v11 = (FxRegKey *)FxObjectHandleAlloc(
                      v5,
                      ExDefaultNonPagedPoolType,
                      0x80uLL,
                      0,
                      KeyAttributes,
                      0,
                      FxObjectTypeExternal);
  if ( v11 )
  {
    FxRegKey::FxRegKey(v11, v5);
    v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v10 = -1073741670;
LABEL_16:
    FxAutoRegKey::~FxAutoRegKey(&hKey);
    return (unsigned int)v10;
  }
  v10 = FxObject::Commit((FxObject *)v13, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
  if ( v10 < 0 )
    goto LABEL_18;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
  if ( v10 < 0 )
    goto LABEL_18;
  parameters.Buffer = parameters_buffer;
  ObjectAttributes.RootDirectory = hKey.m_Key;
  wcscpy(parameters_buffer, L"Parameters");
  ObjectAttributes.ObjectName = &parameters;
  *(_DWORD *)&parameters.Length = 1441812;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey((PHANDLE)(v13 + 112), DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v10 < 0 )
LABEL_18:
    FxObject::DeleteFromFailedCreate((FxObject *)v13);
  else
    *Key = keyHandle;
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
  return (unsigned int)v10;
}
