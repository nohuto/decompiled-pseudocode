/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001A10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0009314 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0030998 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // ebx
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  NTSTATUS v13; // edi
  FxAutoRegKey hKey; // [rsp+40h] [rbp-71h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-69h] BYREF
  _UNICODE_STRING parameters; // [rsp+50h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-51h] BYREF
  FxDriver *pDriver; // [rsp+90h] [rbp-21h] BYREF
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
  v11 = FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x80uLL, 0, KeyAttributes, 0, FxObjectTypeExternal);
  v12 = v11;
  if ( v11 )
  {
    v11[2] = 8392710;
    *(_QWORD *)v11 = &FxObject::`vftable';
    *((_QWORD *)v11 + 2) = v5;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_BYTE *)v11 + 48) = 1;
    FxObject::Construct((FxObject *)v11, 0);
    *((_WORD *)v12 + 12) |= 0x11u;
    *(_QWORD *)v12 = &FxRegKey::`vftable';
    *((_QWORD *)v12 + 13) = 0LL;
    *((_QWORD *)v12 + 14) = 0LL;
    *((_QWORD *)v12 + 15) = v5;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v10 = -1073741670;
LABEL_16:
    FxAutoRegKey::~FxAutoRegKey(&hKey);
    return (unsigned int)v10;
  }
  v13 = FxObject::Commit((FxObject *)v12, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
  if ( v13 < 0 )
    goto LABEL_18;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
  if ( v13 < 0 )
    goto LABEL_18;
  parameters.Buffer = parameters_buffer;
  ObjectAttributes.RootDirectory = hKey.m_Key;
  wcscpy(parameters_buffer, L"Parameters");
  ObjectAttributes.ObjectName = &parameters;
  *(_DWORD *)&parameters.Length = 1441812;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwCreateKey((PHANDLE)v12 + 14, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v13 < 0 )
LABEL_18:
    FxObject::DeleteFromFailedCreate((FxObject *)v12);
  else
    *Key = keyHandle;
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
  return (unsigned int)v13;
}
