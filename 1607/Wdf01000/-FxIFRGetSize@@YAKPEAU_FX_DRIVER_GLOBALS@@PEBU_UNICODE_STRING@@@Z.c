/*
 * XREFs of ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001878C
 * Callers:
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C00185B0 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 */

__int64 __fastcall FxIFRGetSize(_FX_DRIVER_GLOBALS *FxDriverGlobals, _UNICODE_STRING *RegistryPath)
{
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned int ResultLength; // [rsp+30h] [rbp-79h] BYREF
  FxAutoRegKey parameters; // [rsp+38h] [rbp-71h] BYREF
  FxAutoRegKey service; // [rsp+40h] [rbp-69h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-61h] BYREF
  _UNICODE_STRING valueName; // [rsp+58h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+68h] [rbp-41h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-11h] BYREF
  int v14; // [rsp+9Ch] [rbp-Dh]
  unsigned int v15; // [rsp+A4h] [rbp-5h]
  wchar_t valueName_buffer[12]; // [rsp+A8h] [rbp-1h] BYREF
  wchar_t parametersPath_buffer[16]; // [rsp+C0h] [rbp+17h] BYREF

  service.m_Key = 0LL;
  parameters.m_Key = 0LL;
  oa.RootDirectory = 0LL;
  v3 = 1;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  parametersPath.Buffer = parametersPath_buffer;
  wcscpy(valueName_buffer, L"LogPages");
  oa.ObjectName = RegistryPath;
  valueName.Buffer = valueName_buffer;
  *(_DWORD *)&parametersPath.Length = 1966108;
  *(_DWORD *)&valueName.Length = 1179664;
  oa.Length = 48;
  oa.Attributes = 576;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&service.m_Key, 0x20019u, &oa) >= 0 )
  {
    oa.RootDirectory = service.m_Key;
    oa.Length = 48;
    oa.ObjectName = &parametersPath;
    oa.Attributes = 576;
    *(_OWORD *)&oa.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&parameters.m_Key, 0x20019u, &oa) >= 0 )
    {
      ResultLength = 16;
      v4 = ZwQueryValueKey(
             parameters.m_Key,
             &valueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10u,
             &ResultLength);
      if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147483643) && v14 != 4 )
        v4 = -1073741788;
      if ( v4 >= 0 )
      {
        v3 = v15;
        if ( !v15 )
          v3 = 1;
        if ( v3 > 0x10 )
        {
          if ( !FxDriverGlobals->FxVerifierOn || (v3 = 5, !FxDriverGlobals->FxVerboseOn) )
            v3 = 1;
        }
      }
    }
  }
  v5 = v3 << 12;
  if ( parameters.m_Key )
    ZwClose(parameters.m_Key);
  if ( service.m_Key )
    ZwClose(service.m_Key);
  return v5;
}
