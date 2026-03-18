/*
 * XREFs of GetEnhancedVerifierOptions @ 0x1C00276AC
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C002753C (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0027860 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 */

void __fastcall GetEnhancedVerifierOptions(_CLIENT_INFO *ClientInfo, unsigned int *Options)
{
  __int64 v3; // rcx
  _UNICODE_STRING *v4; // rax
  NTSTATUS v5; // eax
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-79h] BYREF
  unsigned int ResultLength; // [rsp+38h] [rbp-71h] BYREF
  FxAutoRegKey hKey; // [rsp+40h] [rbp-69h] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-61h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+58h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-41h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-11h] BYREF
  int v13; // [rsp+9Ch] [rbp-Dh]
  unsigned int v14; // [rsp+A4h] [rbp-5h]
  wchar_t parametersPath_buffer[16]; // [rsp+A8h] [rbp-1h] BYREF
  wchar_t valueName_buffer[24]; // [rsp+C8h] [rbp+1Fh] BYREF

  hKey.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  parametersPath.Buffer = parametersPath_buffer;
  *(_DWORD *)&parametersPath.Length = 1966108;
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"EnhancedVerifierOptions";
  *(_DWORD *)&valueName.Length = 3145774;
  *Options = 0;
  wcscpy(&valueName_buffer[8], L"VerifierOptions");
  valueName.Buffer = valueName_buffer;
  if ( IsClientInfoValid(ClientInfo) )
  {
    v4 = *(_UNICODE_STRING **)(v3 + 8);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v4;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ObjectAttributes.RootDirectory = hWdf.m_Key;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &parametersPath;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
      {
        ResultLength = 16;
        v5 = ZwQueryValueKey(
               hKey.m_Key,
               &valueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               &ResultLength);
        if ( ((int)(v5 + 0x80000000) < 0 || v5 == -2147483643) && v13 != 4 )
          v5 = -1073741788;
        if ( v5 >= 0 && v14 )
          *Options = v14;
      }
    }
  }
  else
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Invalid ClientInfo received from wdfldr \n");
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
