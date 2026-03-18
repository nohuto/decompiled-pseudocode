/*
 * XREFs of FxLibraryGlobalsQueryRegistrySettings @ 0x1C0017448
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C00178F8 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017610 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 */

int FxLibraryGlobalsQueryRegistrySettings()
{
  int result; // eax
  unsigned int ifrDisabled; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int ssDisabled; // [rsp+24h] [rbp-DCh] BYREF
  FxAutoRegKey hWdf; // [rsp+28h] [rbp-D8h] BYREF
  _UNICODE_STRING path; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING ifrDisabledName; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING ssDisabledName; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t ifrDisabledName_buffer[24]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t path_buffer[56]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t ssDisabledName_buffer[28]; // [rsp+130h] [rbp+30h] BYREF

  hWdf.m_Key = 0LL;
  ifrDisabled = 0;
  ssDisabled = 0;
  ObjectAttributes.RootDirectory = 0LL;
  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  wcscpy(ifrDisabledName_buffer, L"WdfGlobalLogsDisabled");
  path.Buffer = path_buffer;
  ifrDisabledName.Buffer = ifrDisabledName_buffer;
  wcscpy(ssDisabledName_buffer, L"WdfGlobalSleepStudyDisabled");
  ssDisabledName.Buffer = ssDisabledName_buffer;
  *(_DWORD *)&path.Length = 7209068;
  *(_DWORD *)&ifrDisabledName.Length = 2883626;
  *(_DWORD *)&ssDisabledName.Length = 3670070;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = &path;
  result = ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( FxRegKey::_QueryULong(hWdf.m_Key, &ifrDisabledName, &ifrDisabled) >= 0 && ifrDisabled == 1 )
      FxLibraryGlobals.IfrDisabled = 1;
    FxLibraryGlobals.SleepStudyDisabled = 0;
    result = FxRegKey::_QueryULong(hWdf.m_Key, &ssDisabledName, &ssDisabled);
    if ( result >= 0 && ssDisabled == 1 )
      FxLibraryGlobals.SleepStudyDisabled = 1;
  }
  if ( hWdf.m_Key )
    return ZwClose(hWdf.m_Key);
  return result;
}
