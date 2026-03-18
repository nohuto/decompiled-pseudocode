/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000C608 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // ebx
  _POOL_TYPE v11; // ebx
  unsigned int Tag; // r15d
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  void *v15; // rax
  void *v16; // rbx
  NTSTATUS v17; // edi
  FxAutoRegKey hKey; // [rsp+40h] [rbp-61h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-59h] BYREF
  FxDriver *pDriver; // [rsp+50h] [rbp-51h] BYREF
  _UNICODE_STRING parameters; // [rsp+58h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  hKey.m_Key = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  v10 = FxVerifierCheckIrqlLevel(v9, 0);
  if ( v10 < 0 || (v10 = FxValidateObjectAttributes(DriverName, KeyAttributes, 0), v10 < 0) )
  {
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
    return (unsigned int)v10;
  }
  else
  {
    FxObjectHandleGetPtr(DriverName, Driver, 0x1001u, (void **)&pDriver);
    v11 = ExDefaultNonPagedPoolType;
    Tag = DriverName->Tag;
    ContextSize = FxGetContextSize(KeyAttributes);
    if ( FxCalculateObjectTotalSize2(DriverName, 0x80u, 0, ContextSize, (unsigned __int64 *)&keyHandle) < 0 )
      goto LABEL_24;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v15 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v11, (unsigned __int64)keyHandle, Tag, Caller);
    v16 = v15;
    if ( v15 )
      v16 = FxObjectAndHandleHeaderInit(DriverName, v15, 0x80u, KeyAttributes, FxObjectTypeExternal);
    if ( v16 )
    {
      *((_DWORD *)v16 + 2) = 8392710;
      *(_QWORD *)v16 = &FxObject::`vftable';
      *((_QWORD *)v16 + 2) = DriverName;
      *((_QWORD *)v16 + 7) = 0LL;
      *((_BYTE *)v16 + 48) = 1;
      FxObject::Construct((FxObject *)v16, 0);
      *((_QWORD *)v16 + 13) = 0LL;
      *((_WORD *)v16 + 12) |= 0x11u;
      *((_QWORD *)v16 + 14) = 0LL;
      *(_QWORD *)v16 = FxRegKey::`vftable';
      *((_QWORD *)v16 + 15) = DriverName;
    }
    else
    {
LABEL_24:
      v16 = 0LL;
    }
    if ( v16 )
    {
      v17 = FxObject::Commit((FxObject *)v16, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
      if ( v17 < 0 )
        goto LABEL_28;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
      if ( v17 < 0 )
        goto LABEL_28;
      parameters.Buffer = parameters_buffer;
      ObjectAttributes.RootDirectory = hKey.m_Key;
      wcscpy(parameters_buffer, L"Parameters");
      ObjectAttributes.ObjectName = &parameters;
      *(_DWORD *)&parameters.Length = 1441812;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwCreateKey((PHANDLE)v16 + 14, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v17 < 0 )
LABEL_28:
        FxObject::DeleteFromFailedCreate((FxObject *)v16);
      else
        *Key = keyHandle;
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return (unsigned int)v17;
    }
    else
    {
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return 3221225626LL;
    }
  }
}
