/*
 * XREFs of ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C006E44C
 * Callers:
 *     FxInitialize @ 0x1C0020804 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0030998 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 */

void __fastcall _FX_DRIVER_GLOBALS::RegisterClientVersion(_FX_DRIVER_GLOBALS *this, _UNICODE_STRING *ServiceKeyName)
{
  NTSTATUS v4; // eax
  unsigned __int16 v5; // r9
  NTSTATUS v6; // eax
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-79h] BYREF
  FxAutoRegKey hParameters; // [rsp+48h] [rbp-71h] BYREF
  FxAutoRegKey hDriver; // [rsp+50h] [rbp-69h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-61h] BYREF
  _UNICODE_STRING parametersPart; // [rsp+88h] [rbp-31h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+98h] [rbp-21h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+A8h] [rbp-11h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+B8h] [rbp-1h] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+C8h] [rbp+Fh] BYREF
  wchar_t parametersPart_buffer[12]; // [rsp+D0h] [rbp+17h] BYREF

  hDriver.m_Key = 0LL;
  parametersPart.Buffer = parametersPart_buffer;
  hParameters.m_Key = 0LL;
  wcscpy(wdfPart_buffer, L"Wdf");
  hWdf.m_Key = 0LL;
  wdfPart.Buffer = wdfPart_buffer;
  wcscpy(parametersPart_buffer, L"Parameters");
  *(_DWORD *)&parametersPart.Length = 1441812;
  *(_DWORD *)&wdfPart.Length = 524294;
  RtlInitUnicodeString(&wdfMajorValue, L"WdfMajorVersion");
  RtlInitUnicodeString(&wdfMinorValue, L"WdfMinorVersion");
  ObjectAttributes.ObjectName = ServiceKeyName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&hDriver.m_Key, 0x2001Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = hDriver.m_Key;
    ObjectAttributes.ObjectName = &parametersPart;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&hParameters.m_Key, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v4 >= 0 )
    {
      ObjectAttributes.RootDirectory = hParameters.m_Key;
      ObjectAttributes.ObjectName = &wdfPart;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateKey(&hWdf.m_Key, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v4 >= 0 )
      {
        v6 = ZwSetValueKey(hWdf.m_Key, &wdfMajorValue, 0, 4u, &this->WdfBindInfo->Version, 4u);
        if ( v6 < 0 && this->FxVerboseOn )
          WPP_IFR_SF_d(this, 5u, 0x11u, 0xDu, WPP_GlobalsKm_cpp_Traceguids, v6);
        v4 = ZwSetValueKey(hWdf.m_Key, &wdfMinorValue, 0, 4u, &this->WdfBindInfo->Version.Minor, 4u);
        if ( v4 >= 0 || !this->FxVerboseOn )
          goto LABEL_18;
        v5 = 14;
      }
      else
      {
        if ( !this->FxVerboseOn )
          goto LABEL_18;
        v5 = 12;
      }
    }
    else
    {
      if ( !this->FxVerboseOn )
        goto LABEL_18;
      v5 = 11;
    }
LABEL_17:
    WPP_IFR_SF_d(this, 5u, 0x11u, v5, WPP_GlobalsKm_cpp_Traceguids, v4);
    goto LABEL_18;
  }
  if ( this->FxVerboseOn )
  {
    v5 = 10;
    goto LABEL_17;
  }
LABEL_18:
  FxAutoRegKey::~FxAutoRegKey(&hWdf);
  FxAutoRegKey::~FxAutoRegKey(&hParameters);
  FxAutoRegKey::~FxAutoRegKey(&hDriver);
}
