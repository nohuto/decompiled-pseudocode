/*
 * XREFs of RegistryWriteCurrentTime @ 0x1C00805BC
 * Callers:
 *     LogDriverInfoStream @ 0x1C0080164 (LogDriverInfoStream.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C002B078 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 */

void __fastcall RegistryWriteCurrentTime(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  FxDriver *Driver; // rax
  NTSTATUS v3; // eax
  unsigned __int16 v4; // r9
  FxAutoRegKey hParameters; // [rsp+40h] [rbp-C0h] BYREF
  FxAutoRegKey hDriver; // [rsp+48h] [rbp-B8h] BYREF
  FxAutoRegKey hWdf; // [rsp+50h] [rbp-B0h] BYREF
  _LARGE_INTEGER currentTime; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING parametersPart; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING wdfTimeOfLastTelemetryLog; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES v12; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v13; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t parametersPart_buffer[12]; // [rsp+128h] [rbp+28h] BYREF

  hDriver.m_Key = 0LL;
  hParameters.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  parametersPart.Buffer = parametersPart_buffer;
  wcscpy(wdfPart_buffer, L"Wdf");
  wdfPart.Buffer = wdfPart_buffer;
  wcscpy(parametersPart_buffer, L"Parameters");
  *(_DWORD *)&parametersPart.Length = 1441812;
  *(_DWORD *)&wdfPart.Length = 524294;
  RtlInitUnicodeString(&wdfTimeOfLastTelemetryLog, L"TimeOfLastTelemetryLog");
  Driver = DriverGlobals->Driver;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Driver->m_RegistryPath;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&hDriver.m_Key, 0x2001Fu, &ObjectAttributes);
  if ( v3 < 0 )
  {
    v4 = 13;
LABEL_9:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v4, WPP_FxTelemetryKm_cpp_Traceguids, v3);
    goto LABEL_10;
  }
  v13.RootDirectory = hDriver.m_Key;
  v13.Length = 48;
  v13.ObjectName = &parametersPart;
  v13.Attributes = 576;
  *(_OWORD *)&v13.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&hParameters.m_Key, 0x2001Fu, &v13, 0, 0LL, 0, 0LL);
  if ( v3 < 0 )
  {
    v4 = 14;
    goto LABEL_9;
  }
  v12.RootDirectory = hParameters.m_Key;
  v12.Length = 48;
  v12.ObjectName = &wdfPart;
  v12.Attributes = 576;
  *(_OWORD *)&v12.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&hWdf.m_Key, 0x2001Fu, &v12, 0, 0LL, 0, 0LL);
  if ( v3 < 0 )
  {
    v4 = 15;
    goto LABEL_9;
  }
  currentTime.QuadPart = MEMORY[0xFFFFF78000000014];
  v3 = ZwSetValueKey(hWdf.m_Key, &wdfTimeOfLastTelemetryLog, 0, 0xBu, &currentTime, 8u);
  if ( v3 < 0 )
  {
    v4 = 16;
    goto LABEL_9;
  }
LABEL_10:
  FxAutoRegKey::~FxAutoRegKey(&hWdf);
  FxAutoRegKey::~FxAutoRegKey(&hParameters);
  FxAutoRegKey::~FxAutoRegKey(&hDriver);
}
