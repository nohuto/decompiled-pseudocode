/*
 * XREFs of ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C001A93C
 * Callers:
 *     FxInitialize @ 0x1C0019B00 (FxInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall _FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(
        _FX_DRIVER_GLOBALS *this,
        _UNICODE_STRING *ServiceKeyName)
{
  NTSTATUS ValueKey; // eax
  NTSTATUS v4; // eax
  char v5; // bl
  FxAutoRegKey hWdf; // [rsp+38h] [rbp-D0h] BYREF
  FxAutoRegKey hDriver; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE *v12; // [rsp+78h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-58h] BYREF
  int v15; // [rsp+B4h] [rbp-54h]
  int v16; // [rsp+BCh] [rbp-4Ch]
  _BYTE parametersPath_buffer_8[24]; // [rsp+C8h] [rbp-40h] OVERLAPPED BYREF
  _BYTE wdfMajorValue_buffer[72]; // [rsp+E0h] [rbp-28h] OVERLAPPED BYREF

  *(_QWORD *)&parametersPath.Length = 0LL;
  hDriver.m_Key = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_DWORD *)wdfMajorValue_buffer = *(_DWORD *)L"df";
  *(_OWORD *)parametersPath_buffer_8 = *(_OWORD *)L"Parameters\\Wdf";
  *(_WORD *)&wdfMajorValue_buffer[4] = aParametersWdf[14];
  *(_QWORD *)&wdfMajorValue.Length = parametersPath_buffer_8;
  *(_QWORD *)&parametersPath_buffer_8[16] = *(_QWORD *)L"rs\\Wdf";
  *(_QWORD *)&wdfMinorValue.Length = &wdfMajorValue_buffer[8];
  *(_OWORD *)&wdfMajorValue_buffer[8] = *(_OWORD *)L"WdfMajorVersion";
  ObjectAttributes.ObjectName = ServiceKeyName;
  LODWORD(parametersPath.Buffer) = 1966108;
  *(_OWORD *)&wdfMajorValue_buffer[24] = *(_OWORD *)L"Version";
  LODWORD(wdfMajorValue.Buffer) = 2097182;
  LODWORD(wdfMinorValue.Buffer) = 2097182;
  *(_OWORD *)&wdfMajorValue_buffer[40] = *(_OWORD *)L"WdfMinorVersion";
  v12 = &wdfMajorValue_buffer[40];
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&wdfMajorValue_buffer[56] = *(_OWORD *)L"Version";
  if ( ZwOpenKey((PHANDLE)&parametersPath, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_23;
  ObjectAttributes.RootDirectory = *(void **)&parametersPath.Length;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (_UNICODE_STRING *)&parametersPath.Buffer;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&hDriver.m_Key, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_23;
  LODWORD(hWdf.m_Key) = 16;
  ValueKey = ZwQueryValueKey(
               hDriver.m_Key,
               (PUNICODE_STRING)&wdfMajorValue.Buffer,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               (PULONG)&hWdf);
  if ( ((int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643) && v15 != 4 )
    ValueKey = -1073741788;
  if ( ValueKey < 0 || v16 != this->WdfBindInfo->Version.Major )
    goto LABEL_23;
  LODWORD(hWdf.m_Key) = 16;
  v4 = ZwQueryValueKey(
         hDriver.m_Key,
         (PUNICODE_STRING)&wdfMinorValue.Buffer,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x10u,
         (PULONG)&hWdf);
  if ( (((v4 + 0x80000000) & 0x80000000) != 0 || v4 == -2147483643) && v15 != 4 )
    v4 = -1073741788;
  if ( v4 >= 0 && v16 == this->WdfBindInfo->Version.Minor )
    v5 = 1;
  else
LABEL_23:
    v5 = 0;
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
  if ( *(_QWORD *)&parametersPath.Length )
    ZwClose(*(HANDLE *)&parametersPath.Length);
  return v5;
}
