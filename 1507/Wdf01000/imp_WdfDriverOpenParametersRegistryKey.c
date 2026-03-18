/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C002A420
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017C20 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C002B078 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  int v9; // edi
  FxDriver *v10; // rcx
  __int64 v11; // rdx
  FxRegKey *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // al
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-71h] BYREF
  FxAutoRegKey hKey; // [rsp+48h] [rbp-69h] BYREF
  FxDriver *pDriver; // [rsp+50h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-59h] BYREF
  _UNICODE_STRING parameters; // [rsp+88h] [rbp-29h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-19h] BYREF
  void *retaddr; // [rsp+108h] [rbp+57h]

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  hKey.m_Key = 0LL;
  if ( !Key )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  *Key = 0LL;
  if ( v5->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      2u,
      0x12u,
      0xAu,
      WPP_fxverifier_h_Traceguids,
      CurrentIrql,
      0);
    LODWORD(keyHandle) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v5->Public.DriverName,
      (const char *)&keyHandle,
      v5->Public.DriverName,
      (const char *)&keyHandle);
    if ( v5->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    v9 = -1073741808;
  }
  else
  {
    v9 = FxValidateObjectAttributes(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
           KeyAttributes,
           0,
           (unsigned __int16)KeyAttributes);
    if ( v9 >= 0 )
    {
      if ( !Driver )
        FxVerifierBugCheckWorker(v5, WDF_INVALID_HANDLE, 0LL, 0x1001uLL);
      v10 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
      LOWORD(v11) = 0;
      if ( (Driver & 1) != 0 )
      {
        v11 = LOWORD(v10->FxNonPagedObject::FxObject::__vftable);
        v10 = (FxDriver *)((char *)v10 - v11);
      }
      if ( v10->m_Type == 4097 )
        pDriver = v10;
      else
        FxObjectHandleGetPtrQI(v10, (void **)&pDriver, (void *)Driver, 0x1001u, v11);
      v12 = (FxRegKey *)FxObjectHandleAlloc(
                          v5,
                          ExDefaultNonPagedPoolType,
                          0x80uLL,
                          0,
                          KeyAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( v12 )
      {
        FxRegKey::FxRegKey(v12, v5);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        v9 = FxObject::Commit((FxObject *)v14, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
        if ( v9 < 0 )
          goto LABEL_26;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
        if ( v9 < 0 )
          goto LABEL_26;
        parameters.Buffer = parameters_buffer;
        ObjectAttributes.RootDirectory = hKey.m_Key;
        wcscpy(parameters_buffer, L"Parameters");
        ObjectAttributes.ObjectName = &parameters;
        *(_DWORD *)&parameters.Length = 1441812;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateKey((PHANDLE)(v14 + 112), DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( v9 < 0 )
LABEL_26:
          FxObject::DeleteFromFailedCreate((FxObject *)v14);
        else
          *Key = keyHandle;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  FxAutoRegKey::~FxAutoRegKey(&hKey);
  return (unsigned int)v9;
}
